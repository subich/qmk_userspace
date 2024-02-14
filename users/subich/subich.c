#include "subich.h"

#ifdef RGBLIGHT_ENABLE
// Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

#ifdef RGB_MATRIX_ENABLE
void suspend_power_down_keymap(void) {
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_keymap(void) {
    rgb_matrix_set_suspend_state(false);
}
#endif

int RGB_current_mode;

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef OLED_ENABLE
  process_record_user_oled(keycode, record);
#endif  // OLED

  static uint16_t my_colon_timer;

  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
    case GAME:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_GAME);
      }
      return false;
      break;
    case KC_RACL:
      if (record->event.pressed) {
        my_colon_timer = timer_read();
        register_code(KC_RALT);
      } else {
        unregister_code(KC_RALT);
        if (timer_elapsed(my_colon_timer) < TAPPING_TERM) {
          SEND_STRING(":"); // Change the character(s) to be sent on tap here
        }
      }
      return false;
    case RGBRST:
      #ifdef RGBLIGHT_ENABLE
      if (record->event.pressed) {
        eeconfig_update_rgblight_default();
        rgblight_enable();
        RGB_current_mode = rgblight_config.mode;
      }
      #endif
      #ifdef RGB_MATRIX_ENABLE
      if (record->event.pressed) {
        eeconfig_update_rgb_matrix_default();
        rgb_matrix_enable();
      }
      #endif
      break;
    case KC_MAKE:  // Compiles the firmware, and adds the flash command based on keyboard bootloader
      if (!record->event.pressed) {
        uint8_t temp_mod = get_mods();
        uint8_t temp_osm = get_oneshot_mods();
        clear_mods(); clear_oneshot_mods();
        SEND_STRING("make " QMK_KEYBOARD ":" QMK_KEYMAP);
    #ifndef FLASH_BOOTLOADER
        if ((temp_mod | temp_osm) & MOD_MASK_SHIFT)
    #endif
        {
          SEND_STRING(":flash");
        }
        if ((temp_mod | temp_osm) & MOD_MASK_CTRL) {
          SEND_STRING(" -j8 --output-sync");
        }
        tap_code(KC_ENT);
        set_mods(temp_mod);
      }
      break;
  }
  return process_record_keymap(keycode, record);
}

