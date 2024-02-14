# Build Options

BACKLIGHT_ENABLE = no    # Enable keyboard backlight functionality
MIDI_ENABLE      = no    # MIDI controls
AUDIO_ENABLE     = yes   # Audio output on port C6
UNICODE_ENABLE   = no    # Unicode
BLUETOOTH_ENABLE = no    # Enable Bluetooth with the Adafruit EZ-Key HID
RGBLIGHT_ENABLE  = no    # Enable WS2812 RGB underlight.  Do not enable this with audio at the same time.

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend

ifndef QUANTUM_DIR
	include ../../../../Makefile
endif
