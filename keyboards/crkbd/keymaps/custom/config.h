/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#define VIAL_KEYBOARD_UID {0x2A, 0xCE, 0x1E, 0x57, 0xDD, 0x49, 0x47, 0xBF}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }
#define VIALRGB_NO_DIRECT
//#define USE_MATRIX_I2C

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100
#define MASTER_LEFT
#define USE_SERIAL_PD2
// The pin connected to the data pin of the LEDs
#define BACKLIGHT_PIN B5
#define RGB_DI_PIN B5
// The number of LEDs connected
#define DRIVER_LED_TOTAL 54
#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 10

    // #define RGB_MATRIX_TIMEOUT 0
    
    #define ENABLE_RGB_MATRIX_SOLID_COLOR
    
    #define RGB_MATRIX_SOLID_REACTIVE_GRADIENT_MODE
#endif
