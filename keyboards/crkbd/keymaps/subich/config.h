#pragma once

// #define USE_MATRIX_I2C

#ifdef KEYBOARD_crkbd_rev1_common
#    undef USE_I2C
#    define USE_SERIAL
#endif
#define USE_SERIAL_PD2

// #define SSD1306OLED
// #undef SSD1306OLED

/* Select hand configuration */
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
