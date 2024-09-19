#!/bin/bash
if [ -z $1 ]; then echo "json filename required"; exit; fi
if [ ! -f $1 ]; then echo "file not found"; exit; fi
qmk json2c "$1" > keymap.c
qmk compile -c -kb crkbd/rev1 -km aqua_keymap -e CONVERT_TO=promicro_rp2040
mv ~/qmk_firmware/.build/crkbd_rev1_aqua_keymap_promicro_rp2040.uf2 ~/aqua_keymap/aqua_keymap.uf2
