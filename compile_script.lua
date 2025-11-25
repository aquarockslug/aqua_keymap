#!/usr/bin/env lua

-- Check if filename argument is provided
if not arg[1] then
    print("json filename required")
    os.exit(1)
end

local filename = arg[1]

-- Check if file exists
local file = io.open(filename, "r")
if not file then
    print("file not found")
    os.exit(1)
end
file:close()

-- Convert JSON to C keymap
os.execute('qmk json2c "' .. filename .. '" > keymap.c')

-- Compile the keymap
os.execute('qmk compile -c -kb crkbd/rev1 -km aqua_keymap -e CONVERT_TO=rp2040_ce')

-- Move the compiled UF2 file
os.execute('mv ~/qmk_firmware/.build/crkbd_rev1_aqua_keymap_rp2040_ce.uf2 ./aqua_keymap.uf2')
