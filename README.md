# My keyboard config

[For the chocofi keyboard](https://github.com/pashutk/chocofi)

## Compilation:
- make sure qmk is ready `qmk setup`
- create a symbolic link from the repo to qmk_firmware 
`ln -s ./ ~/qmk_firmware/keyboards/crkbd/aqua_keymap`
- compile keymap json to keymap.c `qmk json2c aqua.json`
- run `./compile_script.sh`
- install uf2 file on keyboard `qmk flash aqua.uf2` 
