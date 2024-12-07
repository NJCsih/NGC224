#pragma once

//#include "config_common.h"

/* USB Device descriptor parameter */
//#define MANUFACTURER Homebuilt
//#define PRODUCT      Andromeda
//#define VENDOR       NA

#define VENDOR_ID 0x0000
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER "NA"
#define PRODUCT "ngc224"

/*
 * There's a different hardware issue which is cool, someone didn't read the I2C sheet well enough :p
 * I'm nixing the resistors and using serial over one of the formerly I2C pins :( better than new pcbs tho I guess
 * The discord was really nice though.
*/

/* Split keyboard descriptors */
#define EE_HANDS
#define SOFT_SERIAL_PIN D2
#define SPLIT_USB_DETECT

//#define MASTER_RIGHT

/* key matrix size */
#define MATRIX_ROWS 8 // magic? it complains if they're too low? idk
#define MATRIX_COLS 6

// Wait I think you double the rows, and then it just implicitly puts the right half below the left, you don't need to NO_PIN anything!
// THAT WORKED! EVERYTHING WORKS! :D
#define MATRIX_ROW_PINS { B1, B3, B2, B6 }  // Left pins
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }

#define MATRIX_ROW_PINS_RIGHT { D7, E6, B4, B5 } // Right pins
#define MATRIX_COL_PINS_RIGHT { B6, B2, B3, B1, F7, F6 }

// Using COL2ROW Diodes
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
