/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define TAPPING_TERM 180

/* Select hand configuration */
#define SOFT_SERIAL_PIN D2
#define MASTER_LEFT
#define BONGO_ENABLE
#define USE_SERIAL_PD2
// The pin connected to the data pin of the LEDs
#define BACKLIGHT_PIN B5
#define RGB_DI_PIN B5

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_KEYPRESSES                                // reacts to keypresses
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100                    // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set
// HSV VALUES SCARLET RED
#    define RGB_MATRIX_HUE_STEP 5
#    define RGB_MATRIX_SAT_STEP 92
#    define RGB_MATRIX_VAL_STEP 94
#    define RGB_MATRIX_SPD_STEP 20
//#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
// Split keyboard specific
#    define RGBLED_NUM 54 // Number of LEDs
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    define RGB_MATRIX_SPLIT \
        { 27, 27 } // Split keyboards, the number of LEDs connected on each half. X = left, Y = Right
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS
#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#endif