# NGC224

A small 40% pcb-only fully split ortho, only supporting kialh choc switches.

If there will be a V2, it will likely add mx switch support, or just to make it hotswappable.

* Keyboard Maintainer: [Juliet](https://github.com/NJCsih)
* Hardware Supported: ATmega24U arduino pro micro, choc switches, custom pcb
* Hardware Availability: Pro micro at your discretion, boards are not mass produced.

Pretty sure I've lost the pcb files due to a hard drive failure lol \:cries\:

I just flash with qmk on the unix command line with:

```bash
# Plug in left side
qmk flash -kb ngc224 -km default -c -bl avrdude-split-left

# Plug in right side
qmk flash -kb ngc224 -km default -c -bl avrdude-split-left
```

This handles the eeprom flashing as well, and works with the atmega24U chips.


