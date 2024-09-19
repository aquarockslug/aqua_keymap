# My keyboard config

[For the chocofi keyboard](https://github.com/pashutk/chocofi)

![keymap_diagram](aqua8.png "keymap")

## Compilation:
- make sure qmk is ready `qmk setup`
- create a symbolic link from this repo to qmk_firmware 
`ln -s ~/aqua_keymap ~/qmk_firmware/keyboards/crkbd/keymaps/aqua_keymap`
- run `./compile_script.sh aquaX.json`
- install the new uf2 file onto the keyboard `qmk flash aqua_keymap.uf2` 
