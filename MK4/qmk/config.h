#pragma once

// #include "config_common.h"

/* USB Device descriptor parameter */
// #define MANUFACTURER Homebuilt
// #define PRODUCT      Andromeda
// #define VENDOR       NA

#define VENDOR_ID 0x0000
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER "NA"
#define PRODUCT "ngc224"

/*
 * There's a different hardware issue which is cool, someone didn't read the I2C
 * sheet well enough :p I'm nixing the resistors and using serial over one of
 * the formerly I2C pins :( better than new pcbs tho I guess The discord was
 * really nice though.
 */

/* Split keyboard descriptors */
#define EE_HANDS
#define SPLIT_USB_DETECT

// #define MASTER_RIGHT

/* key matrix size */
#define MATRIX_ROWS 8 // magic? it complains if they're too low? idk
#define MATRIX_COLS 5

// Wait I think you double the rows, and then it just implicitly puts the right
// half below the left, you don't need to NO_PIN anything! THAT WORKED!
// EVERYTHING WORKS! :D
#define MATRIX_ROW_PINS {GP20, GP23, GP21, GP9}
#define MATRIX_COL_PINS {GP29, GP28, GP27, GP26, GP22} // Left pins

#define MATRIX_ROW_PINS_RIGHT {GP7, GP8, GP9, GP21}
#define MATRIX_COL_PINS_RIGHT {GP6, GP5, GP4, GP3, GP2} // Left pins

// Using COL2ROW Diodes
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is
 * not needed */
#define DEBOUNCE 5

#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0  // USART TX pin
#define SERIAL_USART_RX_PIN GP1  // USART RX pin
#define SERIAL_PIO_USE_PIO1      // Force the usage of PIO1 peripheral, by default
                                 // the Serial implementation uses the PIO0
                                 // peripheral
