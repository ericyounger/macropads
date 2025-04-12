# macropaddy

![macropaddy](https://github.com/user-attachments/assets/adde2491-6244-4509-8485-099439a577aa)


*A short description of the keyboard/project*

* Keyboard Maintainer: [Eric Younger](https://github.com/ericyounger)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*


Dependent on [vial-qmk](https://github.com/vial-kb/vial-qmk), then when that is set up, just add symlinks:
```
## If git repo is cloned to ~/keyboards
ln -s ~/keyboards/macropaddy ~/vial-qmk/keyboards/macropaddy
```

Make example for this keyboard (after setting up your build environment):

    make macropaddy:vial

Flashing example for this keyboard:

    make macropaddy:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
