#pragma once

#ifdef SPLIT_KEYBOARD
#    define SPLIT_LAYER_STATE_ENABLE
#    define SPLIT_LED_STATE_ENABLE
#    define SPLIT_MODS_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define SERIAL_USE_MULTI_TRANSACTION
#endif

#ifdef AUDIO_ENABLE
#    define AUDIO_CLICKY
#    define STARTUP_SONG SONG(PLANCK_SOUND)
#    define GOODBYE_SONG SONG(GOODBYE_SOUND)
#    define DEFAULT_LAYER_SONGS { \
                SONG(QWERTY_SOUND), \
                SONG(COLEMAK_SOUND), \
                SONG(DVORAK_SOUND) \
                }
#    define AUDIO_CLICKY_FREQ_RANDOMNESS 1.5f
#endif  // !AUDIO_ENABLE

#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    define RGBLED_NUM 27
#    define RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_SLEEP
#    define RGBLIGHT_SPLIT
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
// #   define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#   define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS
//#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
//#    define ENABLE_RGB_MATRIX_BREATHING
//#    define ENABLE_RGB_MATRIX_BAND_SAT
//#    define ENABLE_RGB_MATRIX_BAND_VAL
//#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
//#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
//#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
//#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
//#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
//#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
//#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
//#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
//#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
//#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
//#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
//#    define ENABLE_RGB_MATRIX_DUAL_BEACON
//#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
//#    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
//#    define ENABLE_RGB_MATRIX_RAINDROPS
//#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
//#    define ENABLE_RGB_MATRIX_HUE_BREATHING
//#    define ENABLE_RGB_MATRIX_HUE_PENDULUM
//#    define ENABLE_RGB_MATRIX_HUE_WAVE
//#    define ENABLE_RGB_MATRIX_PIXEL_RAIN
//#    define ENABLE_RGB_MATRIX_PIXEL_FLOW
//#    define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
//#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
//#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
//#    define ENABLE_RGB_MATRIX_SPLASH
//#    define ENABLE_RGB_MATRIX_MULTISPLASH
//#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
//#    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif

#ifdef OLED_ENABLE
#    ifdef SPLIT_KEYBOARD
#        define SPLIT_OLED_ENABLE
#        define OLED_UPDATE_INTERVAL 60
#    else
#        define OLED_UPDATE_INTERVAL 15
#    endif
#    define OLED_TIMEOUT 10000
#    ifdef OLED_FONT_H
#        undef OLED_FONT_H
#    endif
#    define OLED_FONT_H "users/subich/glcdfont.c"
//#    define OLED_FONT_END 255
//#    define OLED_FONT_5X5
//#    define OLED_FONT_AZTECH
//#    define OLED_FONT_BMPLAIN
//#    define OLED_FONT_SUPER_DIGG
//#    define OLED_LOGO_GMK_BAD
//#    define OLED_LOGO_HUE_MANITEE
//#    define OLED_LOGO_CORNE
//#    define OLED_LOGO_GOTHAM
//#    define OLED_LOGO_SCIFI
//#    define OLED_FONT_WIDTH 5
//#    define OLED_FONT_HEIGHT 7
#endif

//#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 150
#define RETRO_TAPPING
#define IGNORE_MOD_TAP_INTERRUPT

/* Disable unused and unneeded features to reduce on firmware size */
#ifdef LOCKING_SUPPORT_ENABLE
#    undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
#    undef LOCKING_RESYNC_ENABLE
#endif
