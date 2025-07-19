## tiny gamepad

### what it does
- acts like a basic HID gamepad
- 4 buttons (wasd layout) + 4 leds that light up on button presses
- can be used to move in any game that accepts controller input

### components used:
- xiao rp2040
- 4x resistors
- 4x regular leds, nothing fancy
- 4x cherry mx switches
- designed in KiCad 

## the schematic:

<img width="662.15" height="763.8" alt="gamepad schematic" src="https://github.com/user-attachments/assets/db352e5e-5f51-4fe2-8008-d9622f616659" />

## the pcb:

<img width="664.05" height="537.7" alt="gamepad 3d pcb view" src="https://github.com/user-attachments/assets/4088fbdb-a12c-4066-ad2c-41893aaa0c21" />


### to use:
download the gerber files from <code>prod.zip</code> if you want to get this pcb fabricated.


### i learned:
- pcb design for the first time + using KiCad
- writing firmware using <code>Adafruit_TinyUSB</code> to emulate a gamepad
- random stuff about some electronic components

### why i made this
i just wanted to make something physical for once - this project is really basic, but i loved making + learning about hardware, and now i want to make more stuff that clicks and lights up
