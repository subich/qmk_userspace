#pragma once
#include QMK_KEYBOARD_H

#include "quantum.h"
#include "action_layer.h"
#include "action.h"

#include "version.h"
#include "wrappers.h"

#ifdef OLED_ENABLE
#    include "oled_stuff.h"
#endif

// Each layer gets a name for readability
enum layers {
  _QWERTY,
  _COLEMAK,
  _GAME,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
  // layer toggles
  QWERTY = SAFE_RANGE,
  COLEMAK,
  GAME,
  LOWER,
  RAISE,
  ADJUST,
  // other functions
  RGBRST,
  KC_RACL,        // right alt / colon
  KC_MAKE,        // qmk make command
  NEW_SAFE_RANGE  // use "NEW_SAFE_RANGE" for keymap specific codes
};

#define ___X___ KC_NO

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define CTL_ESC CTL_T(KC_ESC)
// Dual function escape with left command
#define KC_LGESC LGUI_T(KC_ESC)

// macros for Amethyst.app
// eventually these will be custom keycodes so they no-op on windows
#define LYTFWD  LOPT(LSFT(KC_SPACE))
#define LYTBCK  LCTL(LOPT(LSFT(KC_SPACE)))
#define WNDFCCW LOPT(LSFT(KC_J))
#define WNDFCW  LOPT(LSFT(KC_K))
#define WNDMCCW LCTL(LOPT(LSFT(KC_J)))
#define WNDMCW  LCTL(LOPT(LSFT(KC_K)))
