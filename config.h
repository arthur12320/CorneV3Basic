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

/* Select hand configuration */
#define MASTER_LEFT

#ifdef RGBLIGHT_ENABLE
    //#define RGBLIGHT_EFFECT_ALTERNATING  //one side than other

    //#define RGBLIGHT_EFFECT_CHRISTMAS  //christmas colors horrible =(
    //#define RGBLIGHT_EFFECT_KNIGHT   //one side to another

    #define RGBLIGHT_EFFECT_RAINBOW_MOOD  //solid color but changng in rainbow
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL //all colouns change with rainbow
    
    #define RGBLIGHT_EFFECT_BREATHING	

    //#define RGBLIGHT_EFFECT_RGB_TEST  //solid color toggle all together
    //zd#define RGBLIGHT_EFFECT_SNAKE  //snake going trhough all the keys
   
    //#define RGBLIGHT_EFFECT_STATIC_GRADIENT  //solid gradiant rainbow
    //#define RGBLIGHT_EFFECT_TWINKLE   //twinkle

    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif



#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_WPM_ENABLE //Enable WPM across split keyboards (+268).

#define NO_ACTION_ONESHOT

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
