# rominronin/tsuka60/proto1

![rominronin/tsuka60/proto1](https://i.imgur.com/SLQ8bmYh.jpg)

Prototype firmware for the original Tsuka60 "Semi Ergo Layout" PCB marked "Prototype One" (tsuka60-classic repo, commit 453d515).

* Keyboard Maintainer: [Baris Tosun](https://github.com/rominronin)
* Hardware Supported: Tsuka60 (classic, semi-ergo) PCB, silkscreen "Prototype One"
* Hardware Availability: Not currently available. For more information, please visit [rominronin.net](https://rominronin.net)
* Cases: Partially compatible with 60% cases, please read compatibility notes at [rominronin.net](https://rominronin.net)

Make example for this keyboard (after setting up your build environment):

    make rominronin/tsuka60/proto1:default

Flashing example for this keyboard:

    make rominronin/tsuka60/proto1:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
## Known hardware issue

On this PCB the diodes of matrix positions (4,3), (4,4), (4,9), (4,10) and (4,11) are not connected to Row4, so those bottom-row keys only work if the board was bodged.
