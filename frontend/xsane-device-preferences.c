
/* sane - Scanner Access Now Easy.
   Copyright (C) 1999 Oliver Rauch
   This file is part of the XSANE package.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston,
   MA 02111-1307, USA. */

/* ---------------------------------------------------------------------------------------------------------------- */

#include "xsane.h"
#include "xsane-rc-io.h"
#include "xsane-front-gtk.h"
#include "xsane-gamma.h"

/* ---------------------------------------------------------------------------------------------------------------- */

#define BITS_PER_LONG   (8*sizeof(u_long))

#define SET(set, bit) ((set)[(bit)/BITS_PER_LONG] |= (1UL << (bit)%BITS_PER_LONG))
#define IS_SET(set, bit) (((set)[(bit)/BITS_PER_LONG] & (1UL << (bit)%BITS_PER_LONG)) != 0) 

#define DPOFFSET(field)  ((char *) &((Xsane *) 0)->field - (char *) 0) 

/* ---------------------------------------------------------------------------------------------------------------- */

static struct
{
  SANE_String name;
  void (*codec) (Wire *w, void *p, long offset);
  long offset;
}
desc_xsane_device[] =
{
    {"xsane-main-window-x-position",  xsane_rc_pref_int,          DPOFFSET(shell_posx)},
    {"xsane-main-window-y-position",  xsane_rc_pref_int,          DPOFFSET(shell_posy)},
    {"xsane-main-window-width",       xsane_rc_pref_int,          DPOFFSET(shell_width)},
    {"xsane-main-window-height",      xsane_rc_pref_int,          DPOFFSET(shell_height)},
    {"xsane-standard-options-window-x-position", xsane_rc_pref_int, DPOFFSET(standard_options_shell_posx)},
    {"xsane-standard-options-window-y-position", xsane_rc_pref_int, DPOFFSET(standard_options_shell_posy)},
    {"xsane-advanced-options-window-x-position", xsane_rc_pref_int, DPOFFSET(advanced_options_shell_posx)},
    {"xsane-advanced-options-window-y-position", xsane_rc_pref_int, DPOFFSET(advanced_options_shell_posy)},
    {"xsane-histogram-window-x-position", xsane_rc_pref_int,      DPOFFSET(histogram_dialog_posx)},
    {"xsane-histogram-window-y-position", xsane_rc_pref_int,      DPOFFSET(histogram_dialog_posy)},
    {"xsane-preview-window-x-position", xsane_rc_pref_int,        DPOFFSET(preview_dialog_posx)},
    {"xsane-preview-window-y-position", xsane_rc_pref_int,        DPOFFSET(preview_dialog_posy)},
    {"xsane-preview-window-width",    xsane_rc_pref_int,          DPOFFSET(preview_dialog_width)},
    {"xsane-preview-window-height",   xsane_rc_pref_int,          DPOFFSET(preview_dialog_height)},

    {"xsane-gamma",                   xsane_rc_pref_double,       DPOFFSET(gamma)},
    {"xsane-gamma-red",               xsane_rc_pref_double,       DPOFFSET(gamma_red)},
    {"xsane-gamma-green",             xsane_rc_pref_double,       DPOFFSET(gamma_green)},
    {"xsane-gamma-blue",              xsane_rc_pref_double,       DPOFFSET(gamma_blue)},

    {"xsane-brightness",              xsane_rc_pref_double,       DPOFFSET(brightness)},
    {"xsane-brightness-red",          xsane_rc_pref_double,       DPOFFSET(brightness_red)},
    {"xsane-brightness-green",        xsane_rc_pref_double,       DPOFFSET(brightness_green)},
    {"xsane-brightness-blue",         xsane_rc_pref_double,       DPOFFSET(brightness_blue)},

    {"xsane-contrast",                xsane_rc_pref_double,       DPOFFSET(contrast)},
    {"xsane-contrast-red",            xsane_rc_pref_double,       DPOFFSET(contrast_red)},
    {"xsane-contrast-green",          xsane_rc_pref_double,       DPOFFSET(contrast_green)},
    {"xsane-contrast-blue",           xsane_rc_pref_double,       DPOFFSET(contrast_blue)},

    {"xsane-enhancement-rgb-default", xsane_rc_pref_int,          DPOFFSET(enhancement_rgb_default)},
    {"xsane-negative",                xsane_rc_pref_int,          DPOFFSET(negative)},
    {"xsane-show-preview",            xsane_rc_pref_int,          DPOFFSET(show_preview)},
};

/* ---------------------------------------------------------------------------------------------------------------- */

static int xsane_device_preferences_load_values(Wire *w, SANE_Handle device)
{
 const SANE_Option_Descriptor *opt;
 SANE_Word *word_array;
 SANE_String name, str;
 u_long *caused_reload;
 SANE_Int num_options;
 SANE_Status status;
 int i, keep_going;
 SANE_Word word;
 SANE_Int info;
 off_t offset;
 size_t size;
 char *buf;

  lseek(w->io.fd, 1, SEEK_SET); /* rewind file */
  xsane_rc_io_w_flush(w);

  offset = lseek(w->io.fd, 0, SEEK_CUR); /* remeber file position */

  keep_going = 0;

  sane_control_option(device, 0, SANE_ACTION_GET_VALUE, &num_options, 0);
  size = (num_options + BITS_PER_LONG - 1) / BITS_PER_LONG * sizeof(long);
  caused_reload = alloca(size);
  memset(caused_reload, 0, size);

  while (1)
  {
    xsane_rc_io_w_space(w, 3);
    if (!w->status)
    {
      xsane_rc_io_w_string(w, &name);
    }

    if (w->status == XSANE_EOF) /* eof */
    {
      if (keep_going) /* we had a reload otpions? */
      {
        lseek(w->io.fd, offset, SEEK_SET); /* rewind file to position of first run */
        xsane_rc_io_w_flush(w);
        keep_going = 0;
        continue;
      }
      return 0;
    }
    else if (w->status) /* error: skip line */
    {
      w->status = 0;
      xsane_rc_io_w_free(w, (WireCodecFunc) xsane_rc_io_w_string, &name); /* free string memory */
      xsane_rc_io_w_skip_newline(w); /* skip this line */
      continue;
    }

    status = SANE_STATUS_GOOD;
    info = 0;
    for (i = 1; (opt = sane_get_option_descriptor(device, i)); ++i) /* search all options */
    {
      if (!opt->name || strcmp(opt->name, name) != 0) /* test if option names are equal */
      {
        continue; /* not equal, continue the search */
      }

      if (IS_SET(caused_reload, i)) 
      {
        continue; /* option caused a reload, continue search ??? why? ??? */
      }

      switch (opt->type)
      {
        case SANE_TYPE_BOOL:
        case SANE_TYPE_INT:
        case SANE_TYPE_FIXED:
          if (opt->size == sizeof(SANE_Word))
          {
            xsane_rc_io_w_word(w, &word);
            status = sane_control_option(device, i, SANE_ACTION_SET_VALUE, &word, &info);
          }
          else
          {
            SANE_Int len;

            xsane_rc_io_w_array(w, &len, (void **) &word_array, (WireCodecFunc) xsane_rc_io_w_word, sizeof(SANE_Word));
            status = sane_control_option(device, i, SANE_ACTION_SET_VALUE, word_array, &info);
            w->direction = WIRE_FREE;
            xsane_rc_io_w_array(w, &len, (void **) &word_array, (WireCodecFunc) xsane_rc_io_w_word, sizeof(SANE_Word));
            w->direction = WIRE_DECODE;
          }
	  break;

        case SANE_TYPE_STRING:
          xsane_rc_io_w_string(w, &str);
          buf = malloc(opt->size);
          if (!w->status) /* got a string ? */
          {
            strncpy(buf, str, opt->size);
            buf[opt->size - 1] = '\0';
            xsane_rc_io_w_free(w, (WireCodecFunc) xsane_rc_io_w_string, &str);
            status = sane_control_option(device, i, SANE_ACTION_SET_VALUE, buf, &info);
          }
          break;

        case SANE_TYPE_BUTTON:
        case SANE_TYPE_GROUP:
          /* nothing to read for button and group */
          break;
      }
      break; /* option is set: do not continue search */
    }
    xsane_rc_io_w_free(w, (WireCodecFunc) xsane_rc_io_w_string, &name); /* free string memory */

    if (status == SANE_STATUS_GOOD && (info & SANE_INFO_RELOAD_OPTIONS))
    {
      SET(caused_reload, i);
      keep_going = 1;
    }
  }
  return 0;
}

/* ---------------------------------------------------------------------------------------------------------------- */

static int xsane_device_preferences_save_values(Wire *w, SANE_Handle device)
{
 const SANE_Option_Descriptor *opt;
 size_t word_array_size = 0;
 SANE_Word *word_array = 0;
 size_t str_size = 0;
 SANE_String str = 0;
 SANE_Word word;
 int i;

  for (i = 0; (opt = sane_get_option_descriptor(device, i)); ++i)
  {
    if ((opt->cap & (SANE_CAP_SOFT_SELECT | SANE_CAP_SOFT_DETECT)) != (SANE_CAP_SOFT_SELECT | SANE_CAP_SOFT_DETECT) || !opt->name)
	/* if we can't query AND set the option, don't bother saving it */
    {
      continue;
    }

    switch (opt->type)
    {
      case SANE_TYPE_BOOL:
      case SANE_TYPE_INT:
      case SANE_TYPE_FIXED:
        if (opt->size == sizeof(SANE_Word))
        {
          if (sane_control_option(device, i, SANE_ACTION_GET_VALUE, &word, 0) != SANE_STATUS_GOOD)
          {
            continue;
          }
          xsane_rc_io_w_string(w, (SANE_String *) &opt->name);
          xsane_rc_io_w_word(w, &word);
        }
        else
        {
         SANE_Int len = opt->size / sizeof(SANE_Word);

          if (opt->size > word_array_size)
          {
             word_array_size = ((opt->size + 32*sizeof(SANE_Word)) & ~(32*sizeof(SANE_Word) - 1));
             if (word_array)
             {
               word_array = realloc(word_array, word_array_size);
             }
             else
             {
               word_array = malloc(word_array_size);
             }

             if (word_array == 0)
             {
               /* Malloc failed, so return an error. */
               w->status = ENOMEM;
               return 1;
             }
          }

          if (sane_control_option(device, i, SANE_ACTION_GET_VALUE, word_array, 0) != SANE_STATUS_GOOD)
          {
            continue;
          }

          xsane_rc_io_w_string(w, (SANE_String *) &opt->name);
          xsane_rc_io_w_array(w, &len, (void **) &word_array, (WireCodecFunc) xsane_rc_io_w_word, sizeof(SANE_Word));
        }
        break;

      case SANE_TYPE_STRING:
        if (opt->size > str_size)
        {
          str_size = (opt->size + 1024) & ~1023;

          if (str)
          {
            str = realloc(str, str_size);
          }
          else
          {
            str = malloc(str_size);
          }

          if (str == 0)
          {
            /* Malloc failed, so return an error. */
            w->status = ENOMEM;
            return 1;
          }
        }

        if (sane_control_option(device, i, SANE_ACTION_GET_VALUE, str, 0) != SANE_STATUS_GOOD)
        {
          continue;
        }

        xsane_rc_io_w_string(w, (SANE_String *) &opt->name);
        xsane_rc_io_w_string(w, &str);
        break;

      case SANE_TYPE_BUTTON:
      case SANE_TYPE_GROUP:
        break;
    }
  }

  if (word_array)
  {
    free(word_array);
  }
  if (str)
  {
    free(str);
  }

  return 0;
}

/* ---------------------------------------------------------------------------------------------------------------------- */

void xsane_device_preferences_load_file(char *filename)
{
 int fd;
 char buf[256];
 char *version = 0;
 Wire w;
 SANE_String name;
 int i;

  /* set geometry and position to standard values */
  xsane.shell_posx                  = XSANE_DIALOG_POS_X;
  xsane.shell_posy                  = XSANE_DIALOG_POS_Y;
  xsane.shell_width                 = XSANE_DIALOG_WIDTH;
  xsane.shell_height                = XSANE_DIALOG_HEIGHT;

  xsane.standard_options_shell_posx = XSANE_DIALOG_POS_X;
  xsane.standard_options_shell_posy = XSANE_DIALOG_POS_Y2;

  xsane.advanced_options_shell_posx = XSANE_DIALOG_POS_X2;
  xsane.advanced_options_shell_posy = XSANE_DIALOG_POS_Y2;

  xsane.histogram_dialog_posx       = XSANE_DIALOG_POS_X2;
  xsane.histogram_dialog_posy       = XSANE_DIALOG_POS_Y;

  xsane.preview_dialog_posx         = 0;
  xsane.preview_dialog_posy         = 0;
  xsane.preview_dialog_width        = 0;
  xsane.preview_dialog_height       = 0;

  fd = open(filename, O_RDONLY); 
  if (fd < 0)
  {
    return;
  }

  /* prepare wire */
  w.io.fd = fd;
  w.io.read = read;
  w.io.write = write;
  xsane_rc_io_w_init(&w);
  xsane_rc_io_w_set_dir(&w, WIRE_DECODE);

  xsane_rc_io_w_space(&w, 3);
  if (!w.status)
  {
    xsane_rc_io_w_string(&w, &name); /* get string */
    if (!w.status)
    {
      if (strcmp(name, "XSANE_DEVICE_RC")) /* no real *.drc file */
      {
        w.status = -1; /* no *.drc file => error */
      }
    }
  }

  if (w.status)
  {
    char buf[256];

    snprintf(buf, sizeof(buf), "%s\n%s %s", ERR_LOAD_DEVICE_SETTINGS, filename, ERR_NO_DRC_FILE);
    xsane_back_gtk_error(buf, TRUE);
    close(fd);
    return;
  }

  xsane_rc_io_w_space(&w, 3);
  if (!w.status)
  {
    xsane_rc_io_w_string(&w, &name); /* get string */
    if (!w.status)
    {
      if (strcmp(name, xsane.device_set_filename))
      {
        snprintf(buf, sizeof(buf), "%s \"%s\"\n"
                                   "%s \"%s\",\n"
                                   "%s \"%s\",\n"
                                   "%s",
                                   TEXT_FILE, filename,
                                   ERR_CREATED_FOR_DEVICE, name,
                                   ERR_USED_FOR_DEVICE, xsane.device_set_filename,
                                   ERR_MAY_CAUSE_PROBLEMS);
        if (xsane_back_gtk_decision(ERR_HEADER_WARNING, buf, ERR_BUTTON_OK, BUTTON_CANCEL, TRUE) == FALSE)
        { /* cancel */
          close(fd);
          return; 
        }
      }
    }
  }

  if (w.status)
  {
    /* may be we should pop up a window here */
    close(fd);
    return;
  }
  

#if 0
/* add here: read version info */
#if 0
  while (!feof(file))
  {
    fgets(option, sizeof(option), file); /* get option name */
    option[strlen(option)-1] = 0; /* remove cr */
    if (strcmp(option, "\"xsane-version\"") == 0)
    {
      fgets(option, sizeof(option), file); /* get version */
      option[strlen(option)-1] = 0; /* remove cr */
      len = strlen(option);
      if (len)
      {
        if (option[len-1] == 34)
        {
          option[len-1] = 0; /* remove " */
        }
      }
      version = strdup(option+1);
    }
    else
    {
      fgets(option, sizeof(option), file); /* skip option */
    }
  }
#endif


  if (version)
  {
    if (strcmp(version, XSANE_VERSION))
    {
      snprintf(buf, sizeof(buf), "File: \"%s\"\n"
                                 "has been saved with xsane-%s,\n"
                                 "this may cause problems!", filename, version);
      xsane_back_gtk_warning(buf, TRUE);
    }
    free(version);
  }
  else
  {
    snprintf(buf, sizeof(buf), "File: \"%s\"\n"
                               "has been saved with xsane before version 0.40,\n"
                               "this may cause problems!", filename);
    xsane_back_gtk_warning(buf, TRUE);
  }
#endif



  while (1) /* read device dependant xsane options */
  {
    xsane_rc_io_w_space(&w, 3);
    if (w.status)
    {
      break;
    }

    xsane_rc_io_w_string(&w, &name);

    if (!w.status && name)
    {
      for (i = 0; i < NELEMS (desc_xsane_device); ++i)
      {
        if (strcmp(name, desc_xsane_device[i].name) == 0)
        {
          (*desc_xsane_device[i].codec) (&w, &xsane, desc_xsane_device[i].offset);
          break; /* leave for loop */
        }
      }
    }
    w.status = 0;
  }                 

  xsane_device_preferences_load_values(&w, dialog->dev); /* read device preferences */
  close(fd); 

  if (dialog->well_known.dpi > 0)
  {
   const SANE_Option_Descriptor *opt;

    opt = sane_get_option_descriptor(dialog->dev, dialog->well_known.dpi);
  
    switch (opt->type)
    {
      case SANE_TYPE_INT:
      {
       SANE_Int dpi;
        sane_control_option(dialog->dev, dialog->well_known.dpi, SANE_ACTION_GET_VALUE, &dpi, 0);
        xsane.resolution = dpi;
      }
      break;

      case SANE_TYPE_FIXED:
      {
       SANE_Fixed dpi;
        sane_control_option(dialog->dev, dialog->well_known.dpi, SANE_ACTION_GET_VALUE, &dpi, 0);
        xsane.resolution = (int) SANE_UNFIX(dpi);
      }
      break;
 
      default:
       fprintf(stderr, "xsane_pref_load_file: %s %d\n", ERR_UNKNOWN_TYPE, opt->type);
      return;
    }
  }

  gtk_widget_set_uposition(xsane.shell, xsane.shell_posx, xsane.shell_posy);
  gtk_window_set_default_size(GTK_WINDOW(xsane.shell), xsane.shell_width, xsane.shell_height);
  gtk_widget_set_uposition(xsane.standard_options_shell, xsane.standard_options_shell_posx, xsane.standard_options_shell_posy);
  gtk_widget_set_uposition(xsane.advanced_options_shell, xsane.advanced_options_shell_posx, xsane.advanced_options_shell_posy);
  gtk_widget_set_uposition(xsane.histogram_dialog, xsane.histogram_dialog_posx, xsane.histogram_dialog_posy);

  if (xsane.preview)
  {
    gtk_widget_set_uposition(xsane.preview->top, xsane.preview_dialog_posx, xsane.preview_dialog_posy);
    gtk_window_set_default_size(GTK_WINDOW(xsane.preview->top), xsane.preview_dialog_width, xsane.preview_dialog_height);
  }

  xsane_refresh_dialog(dialog);
  xsane_enhancement_by_gamma();
}

/* ---------------------------------------------------------------------------------------------------------------------- */

void xsane_device_preferences_restore(void)
{
  char filename[PATH_MAX];

  xsane_back_gtk_make_path(sizeof(filename), filename, "xsane", 0, 0, xsane.device_set_filename, ".drc");
  xsane_device_preferences_load_file(filename);
}
                  
/* ---------------------------------------------------------------------------------------------------------------------- */

void xsane_device_preferences_load(void)
{
  char filename[PATH_MAX];
  char windowname[256];

  xsane_set_sensitivity(FALSE);

  sprintf(windowname, "%s %s %s", prog_name, WINDOW_LOAD_SETTINGS, device_text);
  xsane_back_gtk_make_path(sizeof(filename), filename, "xsane", 0, 0, xsane.device_set_filename, ".drc");
  xsane_back_gtk_get_filename(windowname, filename, sizeof(filename), filename);
  xsane_device_preferences_load_file(filename);
  xsane_set_sensitivity(TRUE);
}        

/* ---------------------------------------------------------------------------------------------------------------------- */

#define XSANE_RC_IO_W_STRINGCONST(wire, string)	{ SANE_String str=string; xsane_rc_io_w_string(wire, &str); }

/* ---------------------------------------------------------------------------------------------------------------------- */

void xsane_device_preferences_save(GtkWidget *widget, gpointer data)
{
 char filename[PATH_MAX];
 char windowname[256];
 int fd;
 Wire w;
 int i;

  xsane_set_sensitivity(FALSE);

  sprintf(windowname, "%s %s %s", prog_name, WINDOW_SAVE_SETTINGS, device_text);
  xsane_back_gtk_make_path(sizeof(filename), filename, "xsane", 0, 0, xsane.device_set_filename, ".drc");
  xsane_back_gtk_get_filename(windowname, filename, sizeof(filename), filename);

  fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0666);
  if (fd < 0)
  {
    char buf[256];

    snprintf(buf, sizeof(buf), "%s %s.", ERR_FAILED_CREATE_FILE, strerror(errno));
    xsane_back_gtk_error(buf, TRUE);
    xsane_set_sensitivity(TRUE);
    return;
  }

  /* prepare wire */
  w.io.fd = fd;
  w.io.read = read;
  w.io.write = write;
  xsane_rc_io_w_init(&w);
  xsane_rc_io_w_set_dir(&w, WIRE_ENCODE);

  XSANE_RC_IO_W_STRINGCONST(&w, "XSANE_DEVICE_RC");
  xsane_rc_io_w_string(&w, &xsane.device_set_filename);

  XSANE_RC_IO_W_STRINGCONST(&w, "xsane-version");
  XSANE_RC_IO_W_STRINGCONST(&w, XSANE_VERSION);

  /* make geometry and position values up to date */
  gdk_window_get_root_origin(xsane.shell->window, &xsane.shell_posx, &xsane.shell_posy);
  gdk_window_get_size(xsane.shell->window, &xsane.shell_width, &xsane.shell_height);
  gtk_widget_set_uposition(xsane.shell, xsane.shell_posx, xsane.shell_posy); /* geometry used when window closed and opened again */
  gtk_window_set_default_size(GTK_WINDOW(xsane.shell), xsane.shell_width, xsane.shell_height);

  gdk_window_get_root_origin(xsane.standard_options_shell->window, &xsane.standard_options_shell_posx, &xsane.standard_options_shell_posy);
  gtk_widget_set_uposition(xsane.standard_options_shell, xsane.standard_options_shell_posx, xsane.standard_options_shell_posy);

  gdk_window_get_root_origin(xsane.advanced_options_shell->window, &xsane.advanced_options_shell_posx, &xsane.advanced_options_shell_posy);
  gtk_widget_set_uposition(xsane.advanced_options_shell, xsane.advanced_options_shell_posx, xsane.advanced_options_shell_posy);

  gdk_window_get_root_origin(xsane.histogram_dialog->window, &xsane.histogram_dialog_posx, &xsane.histogram_dialog_posy);
  gtk_widget_set_uposition(xsane.histogram_dialog, xsane.histogram_dialog_posx, xsane.histogram_dialog_posy);

  if (xsane.preview)
  {
    gdk_window_get_root_origin(xsane.preview->top->window, &xsane.preview_dialog_posx, &xsane.preview_dialog_posy);
    gdk_window_get_size(xsane.preview->top->window, &xsane.preview_dialog_width, &xsane.preview_dialog_height);
    gtk_widget_set_uposition(xsane.preview->top, xsane.preview_dialog_posx, xsane.preview_dialog_posy);
    gtk_window_set_default_size(GTK_WINDOW(xsane.preview->top), xsane.preview_dialog_width, xsane.preview_dialog_height);
  }

  xsane_device_preferences_save_values(&w, dialog->dev);

  for (i = 0; i < NELEMS(desc_xsane_device); ++i) /* save device preferences xsane values */
  {
    xsane_rc_io_w_string(&w, &desc_xsane_device[i].name);
    (*desc_xsane_device[i].codec) (&w, &xsane, desc_xsane_device[i].offset);
  }   

  xsane_rc_io_w_flush(&w);
  close(fd);

  xsane_set_sensitivity(TRUE);
}

/* ---------------------------------------------------------------------------------------------------------------- */

