#pragma once
#include "subich.h"

// clang-format off
/****** Alpha layers *********************************************************************************/
#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH


#define _________________COLEMAK_L1________________       KC_Q,    KC_W,    KC_F,    KC_P,    KC_G
#define _________________COLEMAK_L2________________       KC_A,    KC_R,    KC_S,    KC_T,    KC_D
#define _________________COLEMAK_L3________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________COLEMAK_R1________________       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define _________________COLEMAK_R2________________       KC_H,    KC_N,    KC_E,    KC_I,    KC_O
#define _________________COLEMAK_R3________________       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

/****** Numbers, symbols, function rows **************************************************************/
#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0

#define ________________SYMBOL_LEFT________________       KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define ________________SYMBOL_RIGHT_______________       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN

#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ___________________BLANK___________________       _______, _______, _______, _______, _______
#define ____________________NO_____________________       ___X___, ___X___, ___X___, ___X___, ___X___

/****** Lower (left layer hold) **********************************************************************/
#define _________________LOWER_L1__________________       ________________NUMBER_LEFT________________
#define _________________LOWER_L2__________________       _________________FUNC_LEFT_________________
#define _________________LOWER_L3__________________       _________________FUNC_RIGHT________________

#define _________________LOWER_R1__________________       ________________NUMBER_RIGHT_______________
#define _________________LOWER_R2__________________       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ___X___
#define _________________LOWER_R3__________________       KC_HOME, KC_PGDN, KC_PGUP, KC_END,  ___X___

/****** Raise (right layer hold) *********************************************************************/
#define _________________RAISE_L1__________________       ________________SYMBOL_LEFT________________
#define _________________RAISE_L2__________________       ___X___, ___X___, LYTBCK,  WNDFCCW, WNDMCCW
#define _________________RAISE_L3__________________       ___X___, ___X___, LYTFWD,  WNDFCW,  WNDMCW

#define _________________RAISE_R1__________________       ________________SYMBOL_RIGHT_______________
#define _________________RAISE_R2__________________       KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_PIPE
#define _________________RAISE_R3__________________       KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS

/****** Adjust (both layer holds) ********************************************************************/
#define _________________ADJUST_L1_________________       RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI
#define _________________ADJUST_L2_________________       RGB_M_P, ___X___, ___X___, RGB_TOG, AU_TOG
#define _________________ADJUST_L3_________________       RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD

#define _________________ADJUST_R1_________________       KC_PAUS, KC_MUTE, ___X___, ___X___, KC_MAKE
#define _________________ADJUST_R2_________________       KC_MNXT, KC_VOLU, QWERTY,  COLEMAK, GAME
#define _________________ADJUST_R3_________________       KC_MPRV, KC_VOLD, ___X___, ___X___, ___X___
// clang-format on
