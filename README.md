# TextLCD

TextLCD library updated to work with mbed os 6, PlatformIO, and C++ 17. Forked from
[the version by Kenji Arai](https://os.mbed.com/users/kenjiArai/code/TextLCD/).

Select the appropriate serial port expander module via build flags in your
`platformio.ini` file. Supported expanders are:

- LCD_ADAFRUIT
- LCD_DFROBOT
- LCD_LCM1602
- LCD_YWROBOT
- LCD_GYLCD
- LCD_MJKDZ
- LCD_SYDZ
- LCD_WIDEHK
- LCD_LCDPLUG

Example:

```ini
build_flags =
  -D TEXTLCD_DFROBOT=1
```

To reduce memory footprint the following hardware interfaces can be enabled/disabled via
build flags in your `platformio.ini` file. Only `LCD_I2C` is enabled by default.

- LCD_I2C
- LCD_SPI
- LCD_I2C_N
- LCD_SPI_N
- LCD_SPI_N_3_8
- LCD_SPI_N_3_9
- LCD_SPI_N_3_10
- LCD_SPI_N_3_16
- LCD_SPI_N_3_24

Example:

```ini
build_flags =
  -D LCD_I2C=0
  -D LCD_SPI=1
```

To reduce memory footprint the following options can be enabled/disabled via build flags in your `platformio.ini` file. By default only `LCD_PRINTF` is enabled.

- LCD_BIGFONT (enables big font, adds 0.6k)
- LCD_BLINK (enables UDc and icon blink control, adds 0.8k)
- LCD_CONTRAST (enables contrast control, adds 0.9k)
- LCD_FONTSEL (enables runtime font selection using setFont, adds 0.9k)
- LCD_ICON (enables icons, adds 2.0k)
- LCD_INVERT (enables display invert, adds 0.5k)
- LCD_ORIENT (enables orientation switch, adds 0.9k)
- LCD_PRINTF (enables printf(), on by default)
- LCD_POWER (enables power control, adds 0.1k)
- LCD_TWO_CTRL (enables LCD40x4 (two controllers), adds 0.1k)
- LCD_UDC (enables predefined user defined characters example)

Example:

```ini
build_flags =
  -D LCD_ICON=1
  -D LCD_INVERT=1
```

## Building this repo

This git repo is configured for easy development using Visual Studio Code and the Remote Containers extension. Simply open the repo
with the `Remote Containers: Clone Repository in Container Volume...` command and you'll be up and running for development with
no configuraton required.
