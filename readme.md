# NGC224

A small 40% pcb-only fully split ortho, only supporting kialh choc switches.

If there will be a V2, it will likely add mx switch support, or just to make it hotswappable.

* Keyboard Maintainer: [Juliet](https://github.com/NJCsih)
* Hardware Supported: ATmega24U arduino pro micro, choc switches, custom pcb
* Hardware Availability: Pro micro at your discretion, boards are not mass produced.

Pretty sure I've lost the pcb files due to a hard drive failure lol \:cries\:

## Flashing:

I just flash with qmk on the unix command line with:

```bash
# Plug in left side
qmk flash -kb ngc224 -km default -c -bl avrdude-split-left

# Plug in right side
qmk flash -kb ngc224 -km default -c -bl avrdude-split-right
```

This handles the eeprom flashing as well, and works with the atmega24U chips.

I'd like to include a nix flake for the qmk versioning soon, mostly just so that if they fully-depricate c-style configuration in favor of info.json I can just... ignore it forever.

## Layout:

The layout I use is based on the colemak-dh layout, everything except the letters is custom.

I've gone down to 34 buttons, so there's just kinda 14 extra ones hanging out on my keyboard now :p

I do use homerow mods now. From center out they go ctrl, shift, alt, super. The outer thumb buttons are escape and enter when tapped, and num and fn layers when held.

Current "default" layout:
![layout](https://github.com/NJCsih/NGC224/blob/main/layout.png?raw=true)


## The future:

I would like to do a v2, which would introduce hotswappable switch mounts, and not feature a broken I2C connection, which has been patched by desoldering the resistors and using serial instead.

I do need to actually print the keycaps, I'll add a photo or two once I do.
