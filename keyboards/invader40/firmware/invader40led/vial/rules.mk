# This file intentionally left blank
#MCU = RP2040

VIA_ENABLE = yes
VIAL_ENABLE = yes
#BACKLIGHT_ENABLE = yes
#VIALRGB_ENABLE = yes
#RGB_MATRIX_ENABLE = yes
RGBLIGHT_ENABLE = yes
WS2812_DRIVER = vendor
#ENCODER_MAP_ENABLE = yes

#BOOTMAGIC_ENABLE = yes
#MOUSEKEY_ENABLE = yes       # Mouse keys
#EXTRAKEY_ENABLE = yes       # Audio control and System control
#CONSOLE_ENABLE = no         # Console for debug
#COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
#SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
#NKRO_ENABLE = yes           # USB Nkey Rollover
#BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
#RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
#BLUETOOTH_ENABLE = no       # Enable Bluetooth
#AUDIO_ENABLE = no           # Audio output
#LTO_ENABLE = yes
QMK_SETTINGS = yes
TAP_DANCE_ENABLE = yes
