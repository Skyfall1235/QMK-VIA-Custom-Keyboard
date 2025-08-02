# This line tells QMK the internal name of your keyboard.
# It must match the path relative to the 'keyboards/' directory.
KEYBOARD = ilovbee/b87
#rgb enabled for sure
RGBLIGHT_ENABLE = yes

# This specifies the bootloader type for your WB32 microcontroller.
BOOTLOADER = wb32-dfu

# Enable features you need. Based on your b87.c, it likely uses RGB_MATRIX.
RGB_MATRIX_ENABLE = yes

# You can add other common features if you know they are enabled or want them:
# COMBO_ENABLE = yes
# MOUSEKEY_ENABLE = yes
# EXTRAKEY_ENABLE = yes
# CONSOLE_ENABLE = yes # Good for debugging if you can connect via serial