/* xsane -- a graphical (X11, gtk) scanner-oriented SANE frontend

   xsane-text.h

   Oliver Rauch <Oliver.Rauch@rauch-domain.de>
   Copyright (C) 1998-2002 Oliver Rauch
   This file is part of the XSANE package.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */ 

/* ------------------------------------------------------------------------ */

#ifndef XSANE_TEXT_H
#define XSANE_TEXT_H

/* Please translate this to the correct directory name (eg. german=>de) */
#define XSANE_LANGUAGE_DIR		_("language_dir")

#define XSANE_STRSTATUS(status)		_(sane_strstatus(status))
#define _BGT(text)			dgettext(xsane.backend, text)

#define XSANE_COPYRIGHT_SIGN		_("(c)") /* can be translated with \251 */

#define WINDOW_ABOUT_XSANE		_("About")
#define WINDOW_ABOUT_TRANSLATION	_("About translation")
#define WINDOW_AUTHORIZE		_("authorization")
#define WINDOW_GPL			_("GPL - the license")
#define WINDOW_EULA			_("End User License Agreement")
#define WINDOW_INFO			_("info")
#define WINDOW_LOAD_BATCH_LIST		_("load batch list")
#define WINDOW_SAVE_BATCH_LIST		_("save batch list")
#define WINDOW_BATCH_SCAN		_("batch scan")
#define WINDOW_BATCH_RENAME		_("rename batch area")
#define WINDOW_FAX_PROJECT		_("fax project")
#define WINDOW_FAX_RENAME		_("rename fax page")
#define WINDOW_FAX_INSERT		_("insert ps-file into fax")
#define WINDOW_MAIL_PROJECT		_("mail project")
#define WINDOW_MAIL_RENAME		_("rename mail image")
#define WINDOW_MAIL_INSERT		_("insert file into mail")
#define WINDOW_PRESET_AREA_RENAME	_("rename preset area")
#define WINDOW_SETUP			_("setup")
#define WINDOW_HISTOGRAM		_("Histogram")
#define WINDOW_GAMMA			_("Gamma curve")
#define WINDOW_STANDARD_OPTIONS		_("Standard options")
#define WINDOW_ADVANCED_OPTIONS		_("Advanced options")
#define WINDOW_DEVICE_SELECTION		_("device selection")
#define WINDOW_PREVIEW			_("Preview")
#define WINDOW_VIEWER			_("Viewer")
#define WINDOW_VIEWER_OUTPUT_FILENAME	_("Viewer: select output filename")
#define WINDOW_OCR_OUTPUT_FILENAME	_("Select output filename for OCR text file")
#define WINDOW_OUTPUT_FILENAME		_("select output filename")
#define WINDOW_SAVE_SETTINGS		_("save device settings")
#define WINDOW_LOAD_SETTINGS		_("load device settings")
#define WINDOW_CHANGE_WORKING_DIR	_("change working directory")
#define WINDOW_TMP_PATH			_("select temporary directory")
#define WINDOW_SCALE			_("Scale image")
#define WINDOW_DESPECKLE		_("Despeckle image")
#define WINDOW_BLUR			_("Blur image")
#define WINDOW_STORE_MEDIUM		_("Store medium definition")

#define MENU_FILE			_("File")
#define MENU_PREFERENCES		_("Preferences")
#define MENU_VIEW			_("View")
#define MENU_HELP			_("Help")
#define MENU_FILTERS			_("Filters")

#define MENU_ITEM_ABOUT_XSANE		_("About XSane")
#define MENU_ITEM_ABOUT_TRANSLATION	_("About translation")
#define MENU_ITEM_INFO			_("Info")
#define MENU_ITEM_QUIT			_("Quit")

#define MENU_ITEM_SAVE_IMAGE		_("Save image")
#define MENU_ITEM_OCR			_("OCR - save as text")
#define MENU_ITEM_CLONE			_("Clone")
#define MENU_ITEM_SCALE			_("Scale")
#define MENU_ITEM_CLOSE			_("Close")

#define MENU_ITEM_DESPECKLE		_("Despeckle")
#define MENU_ITEM_BLUR			_("Blur")

#define FRAME_RAW_IMAGE			_("Raw image")
#define FRAME_ENHANCED_IMAGE		_("Enhanced image")

#define BUTTON_SCAN			_("Scan")
#define BUTTON_OK			_("Ok")
#define BUTTON_ACCEPT			_("Accept")
#define BUTTON_NOT_ACCEPT		_("Not accept")
#define BUTTON_APPLY			_("Apply")
#define BUTTON_CANCEL			_("Cancel")
#define BUTTON_REDUCE			_("Reduce")
#define BUTTON_CONT_AT_OWN_RISK		_("Continue at your own risk")
#define BUTTON_BROWSE			_("Browse")
#define BUTTON_CLOSE			_("Close")
#define BUTTON_OVERWRITE		_("Overwrite")
#define BUTTON_BATCH_LIST_SCAN		_("Scan batch list")
#define BUTTON_BATCH_AREA_SCAN		_("Scan selected area")
#define BUTTON_PAGE_DELETE		_("Delete page")
#define BUTTON_PAGE_SHOW		_("Show page")
#define BUTTON_PAGE_RENAME		_("Rename page")
#define BUTTON_IMAGE_DELETE		_("Delete image")
#define BUTTON_IMAGE_SHOW		_("Show image")
#define BUTTON_IMAGE_RENAME		_("Rename image")
#define BUTTON_FILE_INSERT		_("Insert file")
#define BUTTON_CREATE_PROJECT		_("Create project")
#define BUTTON_SEND_PROJECT		_("Send project")
#define BUTTON_DELETE_PROJECT		_("Delete project")
#define BUTTON_ADD_PRINTER		_("Add printer")
#define BUTTON_DELETE_PRINTER		_("Delete printer")
#define BUTTON_PREVIEW_ACQUIRE		_("Acquire preview")
#define BUTTON_PREVIEW_CANCEL		_("Cancel preview")
#define BUTTON_DISCARD_IMAGE		_("Discard image")
#define BUTTON_DISCARD_ALL_IMAGES	_("Discard all images")
#define BUTTON_DO_NOT_CLOSE		_("Do not close")
#define BUTTON_SCALE_BIND		_("Bind scale")

#define RADIO_BUTTON_FINE_MODE		_("Fine mode")
#define RADIO_BUTTON_HTML_MAIL		_("HTML mail")
#define RADIO_BUTTON_SAVE_DEVPREFS_AT_EXIT _("Save device preferences at exit")
#define RADIO_BUTTON_OVERWRITE_WARNING	_("Overwrite warning")
#define RADIO_BUTTON_SKIP_EXISTING_NRS	_("Skip existing filenames")
#define RADIO_BUTTON_REDUCE_16BIT_TO_8BIT _("Reduce 16 bit image to 8 bit")
#define RADIO_BUTTON_WINDOW_FIXED	_("Main window size fixed")
#define RADIO_BUTTON_DISABLE_GIMP_PREVIEW_GAMMA	_("Disable gimp preview gamma")
#define RADIO_BUTTON_PRIVATE_COLORMAP	_("Use private colormap")
#define RADIO_BUTTON_AUTOENHANCE_GAMMA  _("Autoenhance gamma")
#define RADIO_BUTTON_PRESELECT_SCANAREA _("Preselect scanarea")
#define RADIO_BUTTON_AUTOCORRECT_COLORS _("Autocorrect colors")
#define RADIO_BUTTON_POP3_AUTHENTIFICATION _("POP3 authentification")
#define RADIO_BUTTON_OCR_USE_GUI_PIPE	_("Use GUI progress pipe")

#define TEXT_SCANNING_DEVICES		_("scanning for devices")
#define TEXT_AVAILABLE_DEVICES		_("Available devices:")
#define TEXT_XSANE_OPTIONS		_("XSane options")
#define TEXT_XSANE_MODE			_("XSane mode")
#define TEXT_FILENAME_COUNTER_STEP	_("Step")
#define TEXT_FILETYPE			_("Type")
#define TEXT_SCANNER_BACKEND		_("Scanner and backend:")
#define TEXT_VENDOR			_("Vendor:")
#define TEXT_MODEL			_("Model:")
#define TEXT_TYPE			_("Type:")
#define TEXT_DEVICE			_("Device:")
#define TEXT_LOADED_BACKEND		_("Loaded backend:")
#define TEXT_SANE_VERSION		_("Sane version:")
#define TEXT_RECENT_VALUES		_("Recent values:")
#define TEXT_GAMMA_CORR_BY		_("Gamma correction by:")
#define TEXT_SCANNER			_("scanner")
#define TEXT_SOFTWARE_XSANE		_("software (XSane)")
#define TEXT_NONE			_("none")
#define TEXT_GAMMA_INPUT_DEPTH		_("Gamma input depth:")
#define TEXT_GAMMA_OUTPUT_DEPTH		_("Gamma output depth:")
#define TEXT_SCANNER_OUTPUT_DEPTH	_("Scanner output depth:")
#define TEXT_OUTPUT_FORMATS		_("XSane output formats:")
#define TEXT_8BIT_FORMATS		_("8 bit output formats:")
#define TEXT_16BIT_FORMATS		_("16 bit output formats:")
#define TEXT_GIMP_REDUCE_16BIT_TO_8BIT	_("Gimp does not support depth 16 bits/color.\n" \
                                          "Do you want to reduce the depth to 8 bits/color?")
#define TEXT_REDUCE_16BIT_TO_8BIT	_("Bit depth 16 bits/color is not supported for this output format.\n" \
                                          "Do you want to reduce the depth to 8 bits/color?")
#define TEXT_AUTHORIZATION_REQ		_("Authorization required for")
#define TEXT_AUTHORIZATION_SECURE	_("Password transmission is secure")
#define TEXT_AUTHORIZATION_INSECURE	_("Backend requests plain-text password")
#define TEXT_USERNAME			_("Username :")
#define TEXT_PASSWORD			_("Password :")
#define TEXT_INVALID_PARAMS		_("Invalid parameters.")
#define TEXT_VERSION			_("version:")
#define TEXT_PACKAGE			_("package")
#define TEXT_WITH_GIMP_SUPPORT		_("with GIMP support")
#define TEXT_WITHOUT_GIMP_SUPPORT	_("without GIMP support")
#define TEXT_GTK_VERSION		_("compiled with GTK-")
#define TEXT_GIMP_VERSION		_("compiled with GIMP-")
#define TEXT_UNKNOWN			_("unknown")
#define TEXT_EULA			_( "XSane is distributed under the terms of the GNU General Public License\n" \
                                          "as published by the Free Software Foundation; either version 2 of the\n" \
                                          "License, or (at your option) any later version.\n" \
                                          "\n" \
                                          "This program is distributed in the hope that it will be useful, but\n" \
                                          "WITHOUT ANY WARRANTY; without even the implied warranty of\n" \
                                          "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n" \
                                          "Should the program prove defective, you assume the cost of all\n" \
                                          "necessary servicing, repair or correction. To use this program you\n" \
                                          "have to read, understand and accept the following\n" \
                                          "\"NO WARRANTY\" agreement.\n")
#define TEXT_GPL			_("XSane is distributed under the terms of the GNU General Public License\n" \
                                          "as published by the Free Software Foundation; either version 2 of the\n" \
                                          "License, or (at your option) any later version.\n" \
                                          "\n" \
                                          "This program is distributed in the hope that it will be useful, but\n" \
                                          "WITHOUT ANY WARRANTY; without even the implied warranty of\n" \
                                          "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n")
#define TEXT_EMAIL			_("Email:")
#define TEXT_HOMEPAGE			_("Homepage:")
#define TEXT_FILE			_("File:")
#define TEXT_TRANSLATION		_("Translation:")

/* Please translate this to something like */
/* translation to YOUR LANGUAGE\n */
/* by YOUR NAME\n */
/* Email: your.name@yourdomain.com\n */
#define TEXT_TRANSLATION_INFO		_("untranslated original english text\n" \
					  "by Oliver Rauch\n" \
					  "Email: Oliver.Rauch@rauch-domain.de\n")

#define TEXT_INFO_BOX			_("0x0: 0KB")

#define TEXT_ADF_PAGES_SCANNED		_("Scanned pages: ")

#define TEXT_MAIL_TEXT			_("Email text:")
#define TEXT_ATTACHMENTS		_("Attachments:")
#define TEXT_MAIL_STATUS		_("Project status:")

#define TEXT_MEDIUM_DEFINITION_NAME	_("Medium Name:")

#define TEXT_VIEWER_IMAGE_INFO		_("Size %d x %d pixel, %d bit/color, %d colors, %1.0f dpi x %1.0f dpi, %1.1f %s")
#define TEXT_DESPECKLE_RADIUS		_("Despeckle radius:")
#define TEXT_BLUR_RADIUS		_("Blur radius:")
#define TEXT_BATCH_AREA_DEFAULT_NAME	_("(no name)")
#define TEXT_BATCH_LIST_AREANAME	_("Area name:")
#define TEXT_BATCH_LIST_SCANMODE	_("Scanmode:")
#define TEXT_BATCH_LIST_GEOMETRY_TL	_("Top left:")
#define TEXT_BATCH_LIST_GEOMETRY_SIZE	_("Size:")
#define TEXT_BATCH_LIST_RESOLUTION	_("Resolution:")
#define TEXT_BATCH_LIST_BIT_DEPTH	_("Bit depth:")
#define TEXT_BATCH_LIST_BY_GUI		_("as selected")

#define TEXT_SETUP_PRINTER_SEL		_("Printer selection:")
#define TEXT_SETUP_PRINTER_NAME		_("Name:")
#define TEXT_SETUP_PRINTER_CMD		_("Command:")
#define TEXT_SETUP_COPY_NR_OPT		_("Copy number option:")
#define TEXT_SETUP_PRINTER_LINEART_RES	_("Lineart resolution (dpi):")
#define TEXT_SETUP_PRINTER_GRAYSCALE_RES _("Grayscale resolution (dpi):")
#define TEXT_SETUP_PRINTER_COLOR_RES	_("Color resolution (dpi):")
#define TEXT_SETUP_PRINTER_WIDTH	_("Width")
#define TEXT_SETUP_PRINTER_HEIGHT	_("Height")
#define TEXT_SETUP_PRINTER_LEFT		_("Left offset")
#define TEXT_SETUP_PRINTER_BOTTOM	_("Bottom offset")
#define TEXT_SETUP_PRINTER_GAMMA	_("Printer gamma value:")
#define TEXT_SETUP_PRINTER_GAMMA_RED	_("Printer gamma red:")
#define TEXT_SETUP_PRINTER_GAMMA_GREEN	_("Printer gamma green:")
#define TEXT_SETUP_PRINTER_GAMMA_BLUE	_("Printer gamma blue:")
#define TEXT_SETUP_TMP_PATH		_("Temporary directory")
#define TEXT_SETUP_IMAGE_PERMISSION	_("Image-file permissions")
#define TEXT_SETUP_DIR_PERMISSION	_("Directory permissions")
#define TEXT_SETUP_JPEG_QUALITY		_("JPEG image quality")
#define TEXT_SETUP_PNG_COMPRESSION	_("PNG image compression")
#define TEXT_SETUP_FILENAME_COUNTER_LEN	_("Filename counter length")
#define TEXT_SETUP_TIFF_COMPRESSION_16	_("TIFF 16 bit image compression")
#define TEXT_SETUP_TIFF_COMPRESSION_8	_("TIFF 8 bit image compression")
#define TEXT_SETUP_TIFF_COMPRESSION_1	_("TIFF lineart image compression")
#define TEXT_SETUP_SHOW_RANGE_MODE	_("Show range as:")
#define TEXT_SETUP_PREVIEW_OVERSAMPLING	_("Preview oversampling:")
#define TEXT_SETUP_PREVIEW_GAMMA	_("Preview gamma:")
#define TEXT_SETUP_PREVIEW_GAMMA_RED	_("Preview gamma red:")
#define TEXT_SETUP_PREVIEW_GAMMA_GREEN	_("Preview gamma green:")
#define TEXT_SETUP_PREVIEW_GAMMA_BLUE	_("Preview gamma blue:")
#define TEXT_SETUP_LINEART_MODE         _("Threshold option:")
#define TEXT_SETUP_ADF_MODE		_("Automatic Document Feeder Modus:")
#define TEXT_SETUP_PREVIEW_PIPETTE_RANGE _("Preview pipette range")
#define TEXT_SETUP_THRESHOLD_MIN        _("Threshold minimum:")
#define TEXT_SETUP_THRESHOLD_MAX        _("Threshold maximum:")
#define TEXT_SETUP_THRESHOLD_MUL        _("Threshold multiplier:")
#define TEXT_SETUP_THRESHOLD_OFF        _("Threshold offset:")
#define TEXT_SETUP_GRAYSCALE_SCANMODE   _("Name of grayscale scanmode:")
#define TEXT_SETUP_HELPFILE_VIEWER	_("Helpfile viewer (HTML):")
#define TEXT_SETUP_FAX_COMMAND		_("Command:")
#define TEXT_SETUP_FAX_RECEIVER_OPTION	_("Receiver option:")
#define TEXT_SETUP_FAX_POSTSCRIPT_OPT	_("Postscriptfile option:")
#define TEXT_SETUP_FAX_NORMAL_MODE_OPT	_("Normal mode option:")
#define TEXT_SETUP_FAX_FINE_MODE_OPT	_("Fine mode option:")
#define TEXT_SETUP_FAX_VIEWER		_("Viewer (Postscript):")
#define TEXT_SETUP_FAX_WIDTH		_("Width")
#define TEXT_SETUP_FAX_HEIGHT		_("Height")
#define TEXT_SETUP_FAX_LEFT		_("Left offset")
#define TEXT_SETUP_FAX_BOTTOM		_("Bottom offset")
#define TEXT_SETUP_SMTP_SERVER		_("SMTP server:")
#define TEXT_SETUP_SMTP_PORT		_("SMTP port:")
#define TEXT_SETUP_MAIL_FROM		_("From:")
#define TEXT_SETUP_MAIL_REPLY_TO	_("Reply to:")
#define TEXT_SETUP_POP3_SERVER		_("POP3 server:")
#define TEXT_SETUP_POP3_PORT		_("POP3 port:")
#define TEXT_SETUP_POP3_USER		_("POP3 user:")
#define TEXT_SETUP_POP3_PASS		_("POP3 password:")
#define TEXT_SETUP_MAIL_VIEWER		_("Viewer (png):")
#define TEXT_SETUP_OCR_COMMAND		_("OCR Command:")
#define TEXT_SETUP_OCR_INPUTFILE_OPT	_("Inputfile option:")
#define TEXT_SETUP_OCR_OUTPUTFILE_OPT	_("Outputfile option:")
#define TEXT_SETUP_OCR_USE_GUI_PIPE_OPT	_("Use GUI progress pipe:")
#define TEXT_SETUP_OCR_OUTFD_OPT	_("GUI output-fd option:")
#define TEXT_SETUP_OCR_PROGRESS_KEYWORD	_("Progress keyword:")
#define TEXT_SETUP_PERMISSION_USER	_("user")
#define TEXT_SETUP_PERMISSION_GROUP	_("group")
#define TEXT_SETUP_PERMISSION_ALL	_("all")

#define NOTEBOOK_SAVING_OPTIONS		_("Save")
#define NOTEBOOK_IMAGE_OPTIONS		_("Image")
#define NOTEBOOK_COPY_OPTIONS		_("Copy")
#define NOTEBOOK_FAX_OPTIONS		_("Fax")
#define NOTEBOOK_MAIL_OPTIONS		_("Mail")
#define NOTEBOOK_OCR_OPTIONS		_("OCR")
#define NOTEBOOK_DISPLAY_OPTIONS	_("Display")
#define NOTEBOOK_ENHANCE_OPTIONS	_("Enhancement")

#define MENU_ITEM_SAVE			_("Save")
#define MENU_ITEM_VIEWER		_("Viewer")
#define MENU_ITEM_COPY			_("Copy")
#define MENU_ITEM_FAX			_("Fax")
#define MENU_ITEM_MAIL			_("Email")

#define MENU_ITEM_SHOW_TOOLTIPS		_("Show tooltips")
#define MENU_ITEM_SHOW_PREVIEW		_("Show preview")
#define MENU_ITEM_SHOW_HISTOGRAM	_("Show histogram")
#define MENU_ITEM_SHOW_GAMMA		_("Show gamma curve")
#define MENU_ITEM_SHOW_BATCH_SCAN	_("Show batch scan")
#define MENU_ITEM_SHOW_STANDARDOPTIONS	_("Show standard options")
#define MENU_ITEM_SHOW_ADVANCEDOPTIONS	_("Show advanced options")

#define MENU_ITEM_SETUP			_("Setup")
#define MENU_ITEM_LENGTH_UNIT		_("Length unit")
#define SUBMENU_ITEM_LENGTH_MILLIMETERS	_("millimeters")
#define SUBMENU_ITEM_LENGTH_CENTIMETERS	_("centimeters")
#define SUBMENU_ITEM_LENGTH_INCHES	_("inches")
#define MENU_ITEM_UPDATE_POLICY		_("Update policy")
#define SUBMENU_ITEM_POLICY_CONTINUOUS	_("continuous")
#define SUBMENU_ITEM_POLICY_DISCONTINU	_("discontinuous")
#define SUBMENU_ITEM_POLICY_DELAYED	_("delayed")
#define MENU_ITEM_SHOW_RESOLUTIONLIST	_("Show resolution list")
#define MENU_ITEM_PAGE_ROTATE		_("Rotate postscript")
#define MENU_ITEM_SAVE_DEVICE_SETTINGS	_("Save device settings")
#define MENU_ITEM_LOAD_DEVICE_SETTINGS	_("Load device settings")
#define MENU_ITEM_CHANGE_WORKING_DIR	_("Change directory")

#define MENU_ITEM_XSANE_EULA		_("Show EULA")
#define MENU_ITEM_XSANE_GPL		_("Show license (GPL)")
#define MENU_ITEM_XSANE_DOC		_("XSane doc")
#define MENU_ITEM_BACKEND_DOC		_("Backend doc")
#define MENU_ITEM_AVAILABLE_BACKENDS	_("Available backends")
#define MENU_ITEM_SCANTIPS		_("Scantips")
#define MENU_ITEM_PROBLEMS		_("Problems?")

#define MENU_ITEM_COUNTER_LEN_INACTIVE	_("inactive")
#define MENU_ITEM_TIFF_COMP_NONE	_("no compression")
#define MENU_ITEM_TIFF_COMP_CCITTRLE	_("CCITT 1D Huffman compression")
#define MENU_ITEM_TIFF_COMP_CCITFAX3	_("CCITT Group 3 Fax compression")
#define MENU_ITEM_TIFF_COMP_CCITFAX4	_("CCITT Group 4 Fax compression")
#define MENU_ITEM_TIFF_COMP_JPEG	_("JPEG DCT compression")
#define MENU_ITEM_TIFF_COMP_PACKBITS	_("pack bits")

#define MENU_ITEM_RANGE_SCALE		_("Slider (Scale)")
#define MENU_ITEM_RANGE_SCROLLBAR	_("Slider (Scrollbar)")
#define MENU_ITEM_RANGE_SPINBUTTON	_("Spinbutton")
#define MENU_ITEM_RANGE_SCALE_SPIN	_("Scale and Spinbutton")
#define MENU_ITEM_RANGE_SCROLL_SPIN	_("Scrollbar and Spinbutton")

#define MENU_ITEM_LINEART_MODE_STANDARD	_("Standard options window (lineart)")
#define MENU_ITEM_LINEART_MODE_XSANE	_("XSane main window (lineart)")
#define MENU_ITEM_LINEART_MODE_GRAY	_("XSane main window (grayscale->lineart)")
#define MENU_ITEM_SELECTION_NONE	_("(none)")

#define MENU_ITEM_FILETYPE_BY_EXT	_("by ext")

#define MENU_ITEM_PRESET_AREA_ADD_SEL	_("Add selection to list")
#define MENU_ITEM_PRESET_AREA_RENAME	_("Rename definiton")
#define MENU_ITEM_PRESET_AREA_DELETE	_("Delete definition")
#define MENU_OTEM_PRESET_AREA_MOVE_UP	_("Move up")
#define MENU_OTEM_PRESET_AREA_MOVE_DWN	_("Move down")

#define PROGRESS_SCANNING		_("Scanning")
#define PROGRESS_RECEIVING_FRAME_DATA	_("Receiving %s data")

#define PROGRESS_TRANSFERING_DATA	_("Transfering image")
#define PROGRESS_ROTATING_DATA		_("Rotating image")
#define PROGRESS_MIRRORING_DATA		_("Mirroring image")
#define PROGRESS_PACKING_DATA		_("Packing image")
#define PROGRESS_CONVERTING_DATA	_("Converting image")
#define PROGRESS_SAVING_DATA		_("Saving image")
#define PROGRESS_CLONING_DATA		_("Cloning image")
#define PROGRESS_SCALING_DATA		_("Scaling image")
#define PROGRESS_DESPECKLING_DATA	_("Despeckling image")
#define PROGRESS_BLURING_DATA		_("Bluring image")
#define PROGRESS_OCR			_("OCR in progress")

#define DESC_SCAN_START			_("Start scan <Ctrl-Enter>")
#define DESC_SCAN_CANCEL		_("Cancel scan <ESC>")
#define DESC_PREVIEW_ACQUIRE		_("Acquire preview scan <Alt-p>")
#define DESC_PREVIEW_CANCEL		_("Cancel preview scan <Alt-ESC>")
#define DESC_XSANE_MODE			_("save-<Ctrl-s>, view-<Ctrl-v>, photocopy-<Ctrl-c>, " \
					  "fax-<Ctrl-f> or mail-<Ctrl-m>")
#define DESC_XSANE_MEDIUM		_("Select source medium type")

#define DESC_FILENAME_COUNTER_STEP	_("Value that is added to filenamecounter after scan")
#define DESC_BROWSE_FILENAME		_("Browse for image filename")
#define DESC_FILENAME			_("Filename for scanned image")
#define DESC_FILETYPE			_("Type of image format, the suitable filename extension is automatically added to the filename")
#define DESC_FAXPROJECT			_("Enter name of fax project")
#define DESC_FAXPAGENAME		_("Enter new name for faxpage")
#define DESC_FAXRECEIVER		_("Enter receiver phone number or address")
#define DESC_MAILPROJECT		_("Enter name of mail project")
#define DESC_MAILIMAGENAME		_("Enter new name for mail image")
#define DESC_MAILRECEIVER		_("Enter email address")
#define DESC_MAILSUBJECT		_("Enter subject of email")
#define DESC_PRESET_AREA_NAME		_("Enter new name for preset area")

#define DESC_PRINTER_SELECT		_("Select printerdefinition <Shift-F1/F2/...>")

#define DESC_RESOLUTION			_("Set scan resolution")
#define DESC_RESOLUTION_X		_("Set scan resolution for x direction")
#define DESC_RESOLUTION_Y		_("Set scan resolution for y direction")
#define DESC_ZOOM			_("Set zoomfactor")
#define DESC_ZOOM_X			_("Set zoomfactor for x direction")
#define DESC_ZOOM_Y			_("Set zoomfactor for y direction")
#define DESC_COPY_NUMBER		_("Set number of copies")

#define DESC_NEGATIVE			_("Negative: Invert colors for scanning negatives <Shift-n>")

#define DESC_GAMMA			_("Set gamma value")
#define DESC_GAMMA_R			_("Set gamma value for red component")
#define DESC_GAMMA_G			_("Set gamma value for green component")
#define DESC_GAMMA_B			_("Set gamma value for blue component")

#define DESC_BRIGHTNESS			_("Set brightness")
#define DESC_BRIGHTNESS_R		_("Set brightness for red component")
#define DESC_BRIGHTNESS_G		_("Set brightness for green component")
#define DESC_BRIGHTNESS_B		_("Set brightness for blue component")

#define DESC_CONTRAST			_("Set contrast")
#define DESC_CONTRAST_R			_("Set contrast for red component")
#define DESC_CONTRAST_G			_("Set contrast for green component")
#define DESC_CONTRAST_B			_("Set contrast for blue component")

#define DESC_THRESHOLD			_("Set threshold")

#define DESC_RGB_DEFAULT		_("RGB default: Set enhancement values for red, " \
                                          "green and blue to default values <Shift-b>:\n" \
						" gamma = 1.0\n" \
						" brightness = 0\n" \
						" contrast = 0")

#define DESC_ENH_AUTO			_("Autoadjust gamma, brightness and contrast <Shift-e>")
#define DESC_ENH_DEFAULT		_("Set default enhancement values <Shift-d>:\n" \
						"gamma = 1.0\n" \
						"brightness = 0\n" \
						"contrast = 0")
#define DESC_ENH_RESTORE		_("Restore enhancement values from preferences <Shift-r>")
#define DESC_ENH_STORE			_("Store active enhancement values to preferences <Shift-m>")

#define DESC_HIST_INTENSITY		_("Show histogram of intensity/gray <Alt-i>")
#define DESC_HIST_RED			_("Show histogram of red component <Alt-r>")
#define DESC_HIST_GREEN			_("Show histogram of green component <Alt-g>")
#define DESC_HIST_BLUE			_("Show histogram of blue component <Alt-b>")
#define DESC_HIST_PIXEL			_("Display mode: show histogram with lines instead of pixels <Alt-m>")
#define DESC_HIST_LOG			_("Show logarithm of pixelcount <Alt-l>")

#define DESC_PRINTER_SETUP		_("Select definition to change")
#define DESC_PRINTER_NAME		_("Define a name for the selection of this definition")
#define DESC_PRINTER_COMMAND		_("Enter command to be executed in copy mode (e.g. \"lpr\")")
#define DESC_COPY_NUMBER_OPTION		_("Enter option for copy numbers")
#define DESC_PRINTER_LINEART_RESOLUTION	_("Resolution with which lineart images are printed and saved in postscript")
#define DESC_PRINTER_GRAYSCALE_RESOLUTION	_("Resolution with which grayscale images are printed and saved in postscript")
#define DESC_PRINTER_COLOR_RESOLUTION	_("Resolution with which color images are printed and saved in postscript")
#define DESC_PRINTER_WIDTH		_("Width of printable area")
#define DESC_PRINTER_HEIGHT		_("Height of printable area")
#define DESC_PRINTER_LEFTOFFSET		_("Left offset from the edge of the paper to the printable area")
#define DESC_PRINTER_BOTTOMOFFSET	_("Bottom offset from the edge of the paper to the printable area")
#define DESC_PRINTER_GAMMA		_("Additional gamma value for photocopy")
#define DESC_PRINTER_GAMMA_RED		_("Additional gamma value for red component for photocopy")
#define DESC_PRINTER_GAMMA_GREEN	_("Additional gamma value for green component for photocopy")
#define DESC_PRINTER_GAMMA_BLUE		_("Additional gamma value for blue component for photocopy")
#define DESC_TMP_PATH			_("Path to temp directory")
#define DESC_BUTTON_TMP_PATH_BROWSE	_("Browse for temporary directory")
#define DESC_JPEG_QUALITY		_("Quality in percent if image is saved as jpeg or tiff with jpeg compression")
#define DESC_PNG_COMPRESSION		_("Compression if image is saved as png")
#define DESC_FILENAME_COUNTER_LEN	_("Minimum length of counter in filename")
#define DESC_TIFF_COMPRESSION_16	_("Compression type if 16 bit image is saved as tiff")
#define DESC_TIFF_COMPRESSION_8		_("Compression type if 8 bit image is saved as tiff")
#define DESC_TIFF_COMPRESSION_1		_("Compression type if lineart image is saved as tiff")
#define DESC_SAVE_DEVPREFS_AT_EXIT	_("Save device dependant preferences in default file at exit of xsane")
#define DESC_OVERWRITE_WARNING		_("Warn before overwriting an existing file")
#define DESC_SKIP_EXISTING		_("If filename counter is automatically increased, used numbers are skipped")
#define DESC_REDUCE_16BIT_TO_8BIT	_("If scanner sends image with 16 bits/color save image with 8 bits/color")
#define DESC_PSFILE_WIDTH		_("Width of paper for postscript files")
#define DESC_PSFILE_HEIGHT		_("Height of paper for postscript files")
#define DESC_PSFILE_LEFTOFFSET		_("Left offset from the edge of the paper to the usable area for postscript files")
#define DESC_PSFILE_BOTTOMOFFSET	_("Bottom offset from the edge of the paper to the usable area for postscript files")
#define DESC_MAIN_WINDOW_FIXED		_("Use fixed main window size or scrolled, resizable main window")
#define DESC_DISABLE_GIMP_PREVIEW_GAMMA	_("Disable preview gamma when XSane runs as gimp plugin")
#define DESC_PREVIEW_COLORMAP		_("Use an own colormap for preview if display depth is 8 bpp")
#define DESC_SHOW_RANGE_MODE		_("Select how a range is displayed")
#define DESC_PREVIEW_OVERSAMPLING	_("Value with that the calculated preview resolution is multiplied")
#define DESC_PREVIEW_GAMMA		_("Set gamma correction value for preview image")
#define DESC_PREVIEW_GAMMA_RED		_("Set gamma correction value for red component of preview image")
#define DESC_PREVIEW_GAMMA_GREEN	_("Set gamma correction value for green component of preview image")
#define DESC_PREVIEW_GAMMA_BLUE		_("Set gamma correction value for blue component of preview image")
#define DESC_LINEART_MODE               _("Define the way XSane shall handle the threshold option")
#define DESC_GRAYSCALE_SCANMODE         _("Select grayscale scanmode. " \
                                          "This scanmode is used for lineart preview scan when transformation " \
                                          "from grayscale to lineart is enabled")
#define DESC_PREVIEW_THRESHOLD_MIN      _("The scanner's minimum threshold level in %")
#define DESC_PREVIEW_THRESHOLD_MAX      _("The scanner's maximum threshold level in %")
#define DESC_PREVIEW_THRESHOLD_MUL      _("Multiplier to make XSane threshold range and scanner threshold range the same")
#define DESC_PREVIEW_THRESHOLD_OFF      _("Offset to make XSane threshold range and scanner threshold range the same")
#define DESC_ADF_MODE			_("Select scansource for Automatic Document feeder. " \
                                          "If this scansource is selected XSane scans until \"out of paper\" or error.")
#define DESC_PREVIEW_PIPETTE_RANGE	_("dimension of square that is used to average color for pipette function")
#define DESC_DOC_VIEWER			_("Enter command to be executed to display helpfiles, must be a html-viewer!")
#define DESC_AUTOENHANCE_GAMMA		_("Change gamma value when autoenhancement button is pressed")
#define DESC_PRESELECT_SCANAREA		_("Select scanarea after preview scan has finished")
#define DESC_AUTOCORRECT_COLORS		_("Do color correction after preview scan has finished")

#define DESC_FAX_COMMAND		_("Enter command to be executed in fax mode")
#define DESC_FAX_RECEIVER_OPT		_("Enter option to specify receiver")
#define DESC_FAX_POSTSCRIPT_OPT		_("Enter option to specify postscript files following")
#define DESC_FAX_NORMAL_OPT		_("Enter option to specify normal mode (low resolution)")
#define DESC_FAX_FINE_OPT		_("Enter option to specify fine mode (high resolution)")
#define DESC_FAX_VIEWER			_("Enter command to be executed to view a fax")
#define DESC_FAX_FINE_MODE		_("Send fax with high vertical resolution (196 lpi instead of 98 lpi)")
#define DESC_FAX_WIDTH			_("Width of printable area")
#define DESC_FAX_HEIGHT			_("Height of printable area")
#define DESC_FAX_LEFTOFFSET		_("Left offset from the edge of the paper to the printable area")
#define DESC_FAX_BOTTOMOFFSET		_("Bottom offset from the edge of the paper to the printable area")
#define DESC_SMTP_SERVER		_("IP Address or Domain name of SMTP server")
#define DESC_SMTP_PORT			_("port to connect to SMTP server")
#define DESC_MAIL_FROM			_("enter your email address")
#define DESC_MAIL_REPLY_TO		_("enter email address for replied emails")
#define DESC_POP3_AUTHENTIFICATION	_("Authentificate at POP3 server before sending mail")
#define DESC_POP3_SERVER		_("IP Address or Domain name of POP3 server")
#define DESC_POP3_PORT			_("port to connect to POP3 server")
#define DESC_POP3_USER			_("user name for POP3 server")
#define DESC_POP3_PASS			_("password for POP3 server")
#define DESC_MAIL_VIEWER		_("Enter command to be executed to view a mail image")
#define DESC_HTML_MAIL			_("Mail is sent in html mode, images are displayed directly")
#define DESC_OCR_COMMAND		_("Enter command to start ocr program")
#define DESC_OCR_INPUTFILE_OPT		_("Enter option of the ocr program to define input file")
#define DESC_OCR_OUTPUTFILE_OPT		_("Enter option of the ocr program to define output file")
#define DESC_OCR_USE_GUI_PIPE_OPT	_("Define if the ocr program supports gui progress pipe")
#define DESC_OCR_OUTFD_OPT		_("Enter option of the ocr program to define output filedescripor in GUI mode")
#define DESC_OCR_PROGRESS_KEYWORD	_("Define Keyword that is used to mark progress information")

#define DESC_PERMISSION_READ		_("read")
#define DESC_PERMISSION_WRITE		_("write")
#define DESC_PERMISSION_EXECUTE		_("execute")

#define DESC_ADD_BATCH			_("Add selection for batch scan")
#define DESC_PIPETTE_WHITE		_("Pick white point")
#define DESC_PIPETTE_GRAY		_("Pick gray point")
#define DESC_PIPETTE_BLACK		_("Pick black point")

#define DESC_ZOOM_FULL			_("Use full scanarea")
#define DESC_ZOOM_OUT			_("Zoom 20% out")
#define DESC_ZOOM_IN			_("Click at position to zoom to")
#define DESC_ZOOM_AREA			_("Zoom into selected area")
#define DESC_ZOOM_UNDO			_("Undo last zoom")

#define DESC_FULL_PREVIEW_AREA		_("Select visible area")
#define DESC_AUTOSELECT_SCANAREA	_("Autoselect scanarea")
#define DESC_AUTORAISE_SCANAREA		_("Autoraise scanarea")
#define DESC_DELETE_IMAGES		_("Delete preview image cache")

#define DESC_PRESET_AREA		_("Preset area")
#define DESC_ROTATION			_("Rotate preview and scan")

#define DESC_VIEWER_SAVE		_("Save image")
#define DESC_VIEWER_OCR			_("Optical Character Recognition")
#define DESC_VIEWER_CLONE		_("Clone image")
#define DESC_VIEWER_SCALE		_("Scale image")
#define DESC_VIEWER_DESPECKLE		_("Despeckle image")
#define DESC_VIEWER_BLUR		_("Blur image")
#define DESC_ROTATE90			_("Rotate image 90 degree")
#define DESC_ROTATE180			_("Rotate image 180 degree")
#define DESC_ROTATE270			_("Rotate image 270 degree")
#define DESC_MIRROR_X			_("Mirror image at vertical axis")
#define DESC_MIRROR_Y			_("Mirror image at horizontal axis")
#define DESC_VIEWER_ZOOM		_("Zoom image")
#define DESC_STORE_MEDIUM		_("Store medium")
#define DESC_DELETE_MEDIUM		_("Delete active medium")
#define DESC_SCALE_FACTOR		_("Scale factor")
#define DESC_X_SCALE_FACTOR		_("X-Scale factor")
#define DESC_Y_SCALE_FACTOR		_("Y-Scale factor")
#define DESC_BATCH_LIST_EMPTY		_("Empty batch list")
#define DESC_BATCH_LIST_SAVE		_("Save batch list")
#define DESC_BATCH_LIST_LOAD		_("Load batch list")
#define DESC_BATCH_RENAME		_("Rename area")
#define DESC_BATCH_ADD			_("Add selected preview area to batch list")
#define DESC_BATCH_DEL			_("Delete selected area from batch list")

#define ERR_HOME_DIR			_("Failed to determine home directory:")
#define ERR_CHANGE_WORKING_DIR		_("Failed to change working directory to")
#define ERR_FILENAME_TOO_LONG		_("Filename too long")
#define ERR_CREATE_TEMP_FILE		_("Could not create temporary file")
#define ERR_SET_OPTION			_("Failed to set value of option")
#define ERR_GET_OPTION			_("Failed to obtain value of option")
#define ERR_OPTION_COUNT		_("Error obtaining option count")
#define ERR_DEVICE_OPEN_FAILED		_("Failed to open device")
#define ERR_NO_DEVICES			_("no devices available")
#define ERR_DURING_READ			_("Error during read:")
#define ERR_DURING_SAVE			_("Error during save:")
#define ERR_BAD_DEPTH			_("Can't handle depth")
#define ERR_GIMP_BAD_DEPTH		_("GIMP can't handle depth %d bits/color")
#define ERR_UNKNOWN_SAVING_FORMAT	_("Unknown file format for saving")
#define ERR_OPEN_FAILED			_("Failed to open")
#define ERR_CREATE_SECURE_FILE		_("Could not create secure file (may be a link does exist):")
#define ERR_FAILED_PRINTER_PIPE		_("Failed to open pipe for executing printercommand")
#define ERR_FAILED_EXEC_PRINTER_CMD	_("Failed to execute printercommand:")
#define ERR_FAILED_START_SCANNER	_("Failed to start scanner:")
#define ERR_FAILED_GET_PARAMS		_("Failed to get parameters:")
#define ERR_NO_OUTPUT_FORMAT		_("No output format given")
#define ERR_NO_MEM			_("out of memory")
#define ERR_TOO_MUCH_DATA		_("Backend sends more image data than it defined in parameters")
#define ERR_LIBTIFF			_("LIBTIFF reports error")
#define ERR_LIBPNG			_("LIBPNG reports error")
#define ERR_UNKNOWN_TYPE		_("unknown type")
#define ERR_UNKNOWN_CONSTRAINT_TYPE	_("unknown constraint type")
#define ERR_FAILED_EXEC_DOC_VIEWER	_("Failed to execute documentation viewer:")
#define ERR_FAILED_EXEC_FAX_VIEWER	_("Failed to execute fax viewer:")
#define ERR_FAILED_EXEC_FAX_CMD		_("Failed to execute fax command:")
#define ERR_FAILED_EXEC_MAIL_VIEWER	_("Failed to execute mail image viewer:")
#define ERR_FAILED_EXEC_OCR_CMD		_("Failed to execute ocr command:")
#define ERR_BAD_FRAME_FORMAT		_("bad frame format")
#define ERR_FAILED_SET_RESOLUTION	_("unable to set resolution")
#define ERR_PASSWORD_FILE_INSECURE	_("Password file (%s) is insecure, use permission x00\n")

#define ERR_ERROR			_("error")
#define ERR_MAJOR_VERSION_NR_CONFLICT	_("Sane major version number mismatch!")
#define ERR_XSANE_MAJOR_VERSION		_("XSane major version =")
#define ERR_BACKEND_MAJOR_VERSION	_("backend major version =")
#define ERR_PROGRAM_ABORTED		_("*** PROGRAM ABORTED ***")

#define ERR_FAILED_ALLOCATE_IMAGE	_("Failed to allocate image memory:")
#define ERR_PREVIEW_BAD_DEPTH		_("Preview cannot handle bit depth")
#define ERR_GIMP_SUPPORT_MISSING	_("GIMP support missing")

#define ERR_CREATE_PREVIEW_FILE		_("Could not create temporary preview files")
#define ERR_CREATE_PREVIEW_FILENAME	_("Could not create filenames for preview files")

#define ERR_CREATE_FAX_PROJECT		_("Could not create faxproject")

#define WARN_COUNTER_UNDERRUN		_("Filename counter underrun")
#define WARN_NO_VALUE_CONSTRAINT	_("warning: option has no value constraint")
#define WARN_XSANE_AS_ROOT		_("You try to run XSane as ROOT, that really is DANGEROUS!\n\n\
Do not send any bug reports when you\n\
have any problem while running XSane as root:\n\
YOU ARE ALONE!\
")

#define ERR_HEADER_ERROR		_("Error")
#define ERR_HEADER_WARNING		_("Warning")
#define ERR_HEADER_INFO			_("Information")
#define ERR_HEADER_CHILD_PROCESS_ERROR	_("Child process error")

#define ERR_FAILED_CREATE_FILE		_("Failed to create file:")
#define ERR_LOAD_DEVICE_SETTINGS	_("Error while loading device settings:")
#define ERR_NO_DRC_FILE			_("is not a device-rc-file !!!")
#define ERR_NETSCAPE_EXECUTE_FAIL	_("Failed to execute netscape!")
#define ERR_SENDFAX_RECEIVER_MISSING	_("Send fax: no receiver defined")

#define ERR_CREATED_FOR_DEVICE		_("has been created for device")
#define ERR_USED_FOR_DEVICE		_("you want to use it for device")
#define ERR_MAY_CAUSE_PROBLEMS		_("this may cause problems!")

#define WARN_UNSAVED_IMAGES		_("There are %d unsaved images")
#define WARN_FILE_EXISTS		_("File %s already exists")
#define ERR_FILE_NOT_EXISTS		_("File %s does not exist")
#define ERR_FILE_NOT_POSTSCRIPT		_("File %s is not a postscript file")
#define ERR_UNSUPPORTED_OUTPUT_FORMAT	_("Unsupported %d-bit output format: %s")

#define WARN_VIEWER_IMAGE_NOT_SAVED	_("viewer image is not saved")

#define TEXT_USAGE			_("Usage:")
#define TEXT_USAGE_OPTIONS		_("[OPTION]... [DEVICE]")
#define TEXT_HELP			_(\
"Start up graphical user interface to access SANE (Scanner Access Now Easy) devices.\n\
\n\
The format of [DEVICE] is backendname:devicefile (e.g. umax:/dev/scanner).\n\
[OPTION]... can be a combination of the following items:\n\
 -h, --help                   display this help message and exit\n\
 -v, --version                print version information\n\
 -l, --license                print license information\n\
\n\
 -d, --device-settings file   load device settings from file (without \".drc\")\n\
\n\
 -V, --viewer                 start with viewer-mode active (default)\n\
 -s, --save                   start with save-mode active\n\
 -c, --copy                   start with copy-mode active\n\
 -f, --fax                    start with fax-mode active\n\
 -m, --mail                   start with mail-mode active\n\
 -n, --no-mode-selection      disable menu for XSane mode selection\n\
\n\
 -M, --Medium-calibration     enable medium calibration mode\n\
\n\
 -F, --Fixed                  fixed main window size (overwrite preferences value)\n\
 -R, --Resizeable             resizable, scrolled main window (overwrite preferences value)\n\
\n\
 -p, --print-filenames        print image filenames created by XSane\n\
 -N, --force-filename name    force filename and disable user filename selection\n\
\n\
 --display X11-display        redirect output to X11-display\n\
 --no-xshm                    do not use shared memory images\n\
 --sync                       request a synchronous connection with the X11 server\
")

/* strings for gimp plugin */

#define XSANE_GIMP_INSTALL_BLURB	_("Front-end to the SANE interface")
#define XSANE_GIMP_INSTALL_HELP		_("This function provides access to scanners and other image acquisition devices through the SANE (Scanner Access Now Easy) interface.")

/* Menu path must not be translated, this is done by the gimp. Only translate the text behind the last "/" */
#define XSANE_GIMP_MENU_DIALOG		_("<Toolbox>/File/Acquire/XSane: Device dialog...")
#define XSANE_GIMP_MENU			_("<Toolbox>/File/Acquire/XSane: ")
#define XSANE_GIMP_MENU_DIALOG_OLD	_("<Toolbox>/Xtns/XSane/Device dialog...")
#define XSANE_GIMP_MENU_OLD		_("<Toolbox>/Xtns/XSane/")

/* strings that are used in structures, so it is not allowed to use _()/gettext() here */
/* gettext_noop does mark these texts but does not change the string */

#define MENU_ITEM_SURFACE_FULL_SIZE		N_("full size")
#define MENU_ITEM_SURFACE_DIN_A3P		N_("DIN A3 port.")
#define MENU_ITEM_SURFACE_DIN_A3L		N_("DIN A3 land.")
#define MENU_ITEM_SURFACE_DIN_A4P		N_("DIN A4 port.")
#define MENU_ITEM_SURFACE_DIN_A4L		N_("DIN A4 land.")
#define MENU_ITEM_SURFACE_DIN_A5P		N_("DIN A5 port.")
#define MENU_ITEM_SURFACE_DIN_A5L		N_("DIN A5 land.")
#define MENU_ITEM_SURFACE_13cmx18cm		N_("13cm x 18cm")
#define MENU_ITEM_SURFACE_18cmx13cm		N_("18cm x 13cm")
#define MENU_ITEM_SURFACE_10cmx15cm		N_("10cm x 15cm")
#define MENU_ITEM_SURFACE_15cmx10cm		N_("15cm x 10cm")
#define MENU_ITEM_SURFACE_9cmx13cm		N_("9cm x 13cm")
#define MENU_ITEM_SURFACE_13cmx9cm		N_("13cm x 9cm")
#define MENU_ITEM_SURFACE_legal_P		N_("legal port.")
#define MENU_ITEM_SURFACE_legal_L		N_("legal land.")
#define MENU_ITEM_SURFACE_letter_P		N_("letter port.")
#define MENU_ITEM_SURFACE_letter_L		N_("letter land.")

#define MENU_ITEM_MEDIUM_FULL_COLOR_RANGE	N_("Full color range")
#define MENU_ITEM_MEDIUM_SLIDE			N_("Slide")
#define MENU_ITEM_MEDIUM_STANDARD_NEG		N_("Standard negative")
#define MENU_ITEM_MEDIUM_AGFA_NEG		N_("Agfa negative")
#define MENU_ITEM_MEDIUM_AGFA_NEG_XRG200_4	N_("Agfa negative XRG 200-4")
#define MENU_ITEM_MEDIUM_AGFA_NEG_HDC_100	N_("Agfa negative HDC 100")
#define MENU_ITEM_MEDIUM_FUJI_NEG		N_("Fuji negative")
#define MENU_ITEM_MEDIUM_KODAK_NEG		N_("Kodak negative")
#define MENU_ITEM_MEDIUM_KONICA_NEG		N_("Konica negative")
#define MENU_ITEM_MEDIUM_KONICA_NEG_VX_100	N_("Konica negative VX 100")
#define MENU_ITEM_MEDIUM_ROSSMANN_NEG_HR_100	N_("Rossmann negative HR 100")

#endif
