#ifndef XSANE_TEXT_H
#define XSANE_TEXT_H

#define WINDOW_ABOUT			"About"
#define WINDOW_AUTHORIZE		"authorization"
#define WINDOW_INFO			"info"
#define WINDOW_BATCH_SCAN		"batch scan"
#define WINDOW_FAX_PROJECT		"fax project"
#define WINDOW_FAX_RENAME		"rename fax page"
#define WINDOW_SETUP			"setup"
#define WINDOW_HISTOGRAM		"Histogram"
#define WINDOW_STANDARD_OPTIONS		"Standard options"
#define WINDOW_ADVANCED_OPTIONS		"Advanced options"
#define WINDOW_DEVICE_SELECTION		"device selection"
#define WINDOW_PREVIEW			"preview"

#define MENU_FILE			"File"
#define MENU_PREFERENCES		"Preferences"
#define MENU_HELP			"Help"

#define MENU_ITEM_ABOUT			"About"
#define MENU_ITEM_INFO			"Info"
#define MENU_ITEM_EXIT			"Exit"

#define FRAME_RAW_IMAGE			"Raw image"
#define FRAME_ENHANCED_IMAGE		"Enhanced image"

#define BUTTON_START			"Start"
#define BUTTON_PREVIEW			"Preview Window"
#define BUTTON_OK			"Ok"
#define BUTTON_APPLY			"Apply"
#define BUTTON_CANCEL			"Cancel"
#define BUTTON_BROWSE			"Browse"
#define BUTTON_AUTO			"Auto"
#define BUTTON_DEFAULT			"Default"
#define BUTTON_RESTORE			"Restore"
#define BUTTON_STORE			"Store"
#define BUTTON_CLOSE			"Close"
#define BUTTON_ADD_AREA			"Add area"
#define BUTTON_DELETE			"Delete"
#define BUTTON_SHOW			"Show"
#define BUTTON_RENAME			"Rename"
#define BUTTON_SEND_PROJECT		"Send project"
#define BUTTON_DELETE_PROJECT		"Delete project"
#define BUTTON_ADD_PRINTER		"Add printer"
#define BUTTON_DELETE_PRINTER		"Delete printer"
#define BUTTON_PREVIEW_ACQUIRE		"Acquire Preview"
#define BUTTON_PREVIEW_CANCEL		"Cancel Preview"

#define RADIO_BUTTON_FINE_MODE		"Fine mode"
#define RADIO_BUTTON_RGB_DEFAULT	"RGB default"
#define RADIO_BUTTON_NEGATIVE		"Negative"
#define RADIO_BUTTON_OVERWRITE_WARNING	"Overwrite warning"
#define RADIO_BUTTON_INCREASE_COUNTER	"Increase filename counter"
#define RADIO_BUTTON_SKIP_EXISTING_NRS	"Skip existing numbers"
#define RADIO_BUTTON_WINDOW_FIXED	"Main window size fixed"
#define RADIO_BUTTON_PRESERVE_PRVIEW	"Preserve preview image"
#define RADIO_BUTTON_PRIVATE_COLORMAP	"Use private colormap"

#define TEXT_AVAILABLE_DEVICES		"Available devices:"
#define TEXT_OUTPUT_FILENAME		"Output filename"
#define TEXT_XSANE_OPTIONS		"XSane options"
#define TEXT_XSANE_MODE			"XSane mode"
#define TEXT_SET_ENHANCEMENT		"Set enhancement:"
#define TEXT_SCANNER_BACKEND		"Scanner and backend:"
#define TEXT_VENDOR			"Vendor:"
#define TEXT_MODEL			"Model:"
#define TEXT_TYPE			"Type:"
#define TEXT_DEVICE			"Device:"
#define TEXT_LOADED_BACKEND		"Loaded backend:"
#define TEXT_SANE_VERSION		"Sane version:"
#define TEXT_RECENT_VALUES		"Recent values:"
#define TEXT_GAMMA_CORR_BY		"Gamma correction by:"
#define TEXT_SCANNER			"scanner"
#define TEXT_SOFTWARE_XSANE		"software (xsane)"
#define TEXT_GAMMA_INPUT_DEPTH		"Gamma input depth:"
#define TEXT_GAMMA_OUTPUT_DEPTH		"Gamma output depth:"
#define TEXT_SCANNER_OUTPUT_DEPTH	"Scanner output depth:"
#define TEXT_OUTPUT_FORMATS		"XSane output formats:"
#define TEXT_8BIT_FORMATS		"8 bit output formats:"
#define TEXT_16BIT_FORMATS		"16 bit output formats:"
#define TEXT_SAVE_SETTINGS		"Save device settings:"
#define TEXT_LOAD_SETTINGS		"Load device settings:"
#define TEXT_AUTORIZATION_REQ		"Authorization required for"
#define TEXT_USERNAME			"Username :"
#define TEXT_PASSWORD			"Password :"
#define TEXT_INVALID_PARAMS		"Invalid parameters."
#define TEXT_VERSION			"version:"
#define TEXT_NONE			"none"

#define TEXT_SETUP_PRINTER_SEL		"Printer selection:"
#define TEXT_SETUP_PRINTER_NAME		"Name:"
#define TEXT_SETUP_PRINTER_CMD		"Command:"
#define TEXT_SETUP_COPY_NR_OPT		"Copy number option:"
#define TEXT_SETUP_PRINTER_RES		"Resolution (dpi):"
#define TEXT_SETUP_PRINTER_WIDTH	"Width (1/72 inch):"
#define TEXT_SETUP_PRINTER_HEIGHT	"Height (1/72 inch):"
#define TEXT_SETUP_PRINTER_LEFT		"Left offset (1/72 inch):"
#define TEXT_SETUP_PRINTER_BOTTOM	"Bottom offset (1/72 inch):"
#define TEXT_SETUP_PRINTER_GAMMA	"Printer gamma value:"
#define TEXT_SETUP_PRINTER_GAMMA_RED	"Printer gamma red:"
#define TEXT_SETUP_PRINTER_GAMMA_GREEN	"Printer gamma green:"
#define TEXT_SETUP_PRINTER_GAMMA_BLUE	"Printer gamma blue:"
#define TEXT_SETUP_JPEG_QUALITY		"JPEG image quality"
#define TEXT_SETUP_PNG_COMPRESSION	"PNG image compression"
#define TEXT_SETUP_PREVIEW_GAMMA	"Preview gamma:"
#define TEXT_SETUP_PREVIEW_GAMMA_RED	"Preview gamma red:"
#define TEXT_SETUP_PREVIEW_GAMMA_GREEN	"Preview gamma green:"
#define TEXT_SETUP_PREVIEW_GAMMA_BLUE	"Preview gamma blue:"
#define TEXT_SETUP_HELPFILE_VIEWER	"Helpfile viewer (HTML):"
#define TEXT_SETUP_FAX_COMMAND		"Command:"
#define TEXT_SETUP_FAX_RECEIVER_OPTION	"Receiver option:"
#define TEXT_SETUP_FAX_POSTSCRIPT_OPT	"Postscriptfile option:"
#define TEXT_SETUP_FAX_NORMAL_MODE_OPT	"Normal mode option:"
#define TEXT_SETUP_FAX_FINE_MODE_OPT	"Fine mode option:"
#define TEXT_SETUP_FAX_VIEWER		"Viewer (Postscript):"

#define NOTEBOOK_PRINTER_OPTIONS	"Printer options"
#define NOTEBOOK_SAVING_OPTIONS		"Saving options"
#define NOTEBOOK_DISPLAY_OPTIONS	"Display options"
#define NOTEBOOK_FAX_OPTIONS		"Fax options"

#define MENU_ITEM_SCAN			"Scan"
#define MENU_ITEM_COPY			"Copy"
#define MENU_ITEM_FAX			"Fax"


#define DESC_XSANE_MODE			"Use XSane for SCANning, photoCOPYing, FAXing..."

#define DESC_FILENAME			"Filename for scanned image"
#define DESC_FAXPROJECT			"Enter name of fax project"
#define DESC_FAXPAGENAME		"Enter new name for faxpage"
#define DESC_FAXRECEIVER		"Enter receiver phone number or address"

#define DESC_PRINTER_SELECT		"Select printer definition"

#define DESC_RESOLUTION			"Set scan resolution"
#define DESC_ZOOM			"Set zoomfactor"
#define DESC_COPY_NUMBER		"Set number of copies"

#define DESC_NEGATIVE			"Swap black and white, for scanning negatives"

#define DESC_GAMMA			"Set gamma value"
#define DESC_GAMMA_R			"Set gamma value for red component"
#define DESC_GAMMA_G			"Set gamma value for green component"
#define DESC_GAMMA_B			"Set gamma value for blue component"

#define DESC_BRIGHTNESS			"Set brightness"
#define DESC_BRIGHTNESS_R		"Set brightness for red component"
#define DESC_BRIGHTNESS_G		"Set brightness for green component"
#define DESC_BRIGHTNESS_B		"Set brightness for blue component"

#define DESC_CONTRAST			"Set contrast"
#define DESC_CONTRAST_R			"Set contrast for red component"
#define DESC_CONTRAST_G			"Set contrast for green component"
#define DESC_CONTRAST_B			"Set contrast for blue component"

#define DESC_RGB_DEFAULT		"Set enhancement values for red, green and blue to default values:\n" \
					"gamma = 1.0\n" \
					"brightness = 0\n" \
					"contrast = 0"

#define DESC_WHITE			"Define intensity that shall be transformed to white"
#define DESC_GRAY			"Define intensity that shall be transformed to medium gray"
#define DESC_BLACK			"Define intensity that shall be transformed to black"

#define DESC_ENH_AUTO			"Autoadjust gamma, brightness and contrast in dependance " \
					"of selected area (rgb-values are set to default)"
#define DESC_ENH_DEFAULT		"Set default enhancement values:\n" \
					"gamma = 1.0\n" \
					"brightness = 0\n" \
					"contrast = 0"
#define DESC_ENH_RESTORE		"Restore enhancement values from preferences"
#define DESC_ENH_SAVE			"Store active enhancemnt values to preferences"

#define DESC_HIST_INTENSITY		"Show histogram of intensity/gray"
#define DESC_HIST_RED			"Show histogram of red component"
#define DESC_HIST_GREEN			"Show histogram of green component"
#define DESC_HIST_BLUE			"Show histogram of blue component"
#define DESC_HIST_PIXEL			"Display histogram with lines instead of pixels"
#define DESC_HIST_LOG			"Show logarithm of pixelcount"

#define DESC_PRINTER_SETUP		"Select definition to change"
#define DESC_PRINTER_NAME		"Define a name for the selection of this definition"
#define DESC_PRINTER_COMMAND		"Enter command to be executed in copy mode (e.g. \"lpr -\")"
#define DESC_COPY_NUMBER_OPTION		"Enter option for copy numbers"
#define DESC_PRINTER_RESOLUTION		"Resolution with which images are printed and saved in postscript"
#define DESC_PRINTER_WIDTH		"Width of printable area in 1/72 inch"
#define DESC_PRINTER_HEIGHT		"Height of printable area in 1/72 inch"
#define DESC_PRINTER_LEFTOFFSET		"Left offset from the edge of the paper to the printable area in 1/72 inch"
#define DESC_PRINTER_BOTTOMOFFSET	"Bottom offset from the edge of the paper to the printable area in 1/72 inch"
#define DESC_PRINTER_GAMMA		"Additional gamma value for photocopy"
#define DESC_PRINTER_GAMMA_RED		"Additional gamma value for red component for photocopy"
#define DESC_PRINTER_GAMMA_GREEN	 "Additional gamma value for green component for photocopy"
#define DESC_PRINTER_GAMMA_BLUE		"Additional gamma value for blue component for photocopy"
#define DESC_JPEG_QUALITY		"Quality if image is saved as jpeg"
#define DESC_PNG_COMPRESSION		"Compression if image is saved as png"
#define DESC_OVERWRITE_WARNING		"Warn before overwriting an existing file"
#define DESC_INCREASE_COUNTER		"If the filename is of the form \"name-001.ext\" (where the number of digits is free) " \
					"the number is increased after a scan is finished"
#define DESC_SKIP_EXISTING		"If filename counter is automatically increased, used numbers are skipped"
#define DESC_MAIN_WINDOW_FIXED		"Use fixed main window size or scrolled, resizable main window"
#define DESC_PREVIEW_PRESERVE		"Preserve preview image for next program start"
#define DESC_PREVIEW_COLORMAP		"Use an own colormap for preview if display depth is 8 bpp"
#define DESC_PREVIEW_GAMMA		"Set gamma correction value for preview image"
#define DESC_PREVIEW_GAMMA_RED		"Set gamma correction value for red component of preview image"
#define DESC_PREVIEW_GAMMA_GREEN	 "Set gamma correction value for green component of preview image"
#define DESC_PREVIEW_GAMMA_BLUE		"Set gamma correction value for blue component of preview image"
#define DESC_DOC_VIEWER			"Enter command to be executed to display helpfiles, must be a html-viewer!"

#define DESC_FAX_COMMAND		"Enter command to be executed in fax mode"
#define DESC_FAX_RECEIVER_OPT		"Enter option to specify receiver"
#define DESC_FAX_POSTSCRIPT_OPT		"Enter option to specify postscript files following"
#define DESC_FAX_NORMAL_OPT		"Enter option to specify normal mode (low resolution)"
#define DESC_FAX_FINE_OPT		"Enter option to specify fine mode (high resolution)"
#define DESC_FAX_VIEWER			"Enter command to be executed to view a fax"
#define DESC_FAX_FINE_MODE		"Use high vertical resolution (196 lpi instead of 98 lpi)"

#define DESC_PIPETTE_WHITE		"Pick white point"
#define DESC_PIPETTE_GRAY		"Pick gray point"
#define DESC_PIPETTE_BLACK		"Pick black point"

#define DESC_ZOOM_FULL			"Use full scanarea"
#define DESC_ZOOM_OUT			"Zoom 20% out"
#define DESC_ZOOM_IN			"Zoom into selected area"
#define DESC_ZOOM_UNDO			"Undo last zoom"

#define DESC_FULL_PREVIEW_AREA		"Select visible area"


#define ERR_HOME_DIR			"Failed to determine home directory:"
#define ERR_FILENAME_TOO_LONG		"Filename too long"
#define ERR_SET_OPTION			"Failed to set value of option"
#define ERR_GET_OPTION			"Failed to obtain value of option"
#define ERR_OPTION_COUNT		"Error obtaining option count"

#define ERR_BUTTON_OK			"Ok"
#define ERR_HEADER_ERROR		"Error"
#define ERR_HEADER_WARNING		"Warning"

#endif
