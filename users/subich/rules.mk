SRC += subich.c

BOOTMAGIC_ENABLE    = no  # Virtual DIP switch configuration (+1000)
EXTRAKEY_ENABLE     = yes # Audio control and System control (+450)
CONSOLE_ENABLE      = no  # Console for debug (+400)
COMMAND_ENABLE      = no  # Commands for debug and configuration
MOUSEKEY_ENABLE     = no  # Mouse keys (+4700)
LTO_ENABLE          = yes # Link-time optimization; smaller compiled size

NKRO_ENABLE        ?= yes
TAP_DANCE_ENABLE   ?= no
RGBLIGHT_ENABLE    ?= no
RGB_MATRIX_ENABLE  ?= no
OLED_ENABLE        ?= no

ifeq ($(strip $(OLED_ENABLE)), yes)
	SRC += oled_stuff.c
endif