# NGC224 | MK4

A 36-key pcb-only fully-split column-staggered keyboard

- Full split, using full-duplex usart over TRRS
- Uses Elite-Pi microcontroller, Arduino Pro Micro back compatible
- Kailh Choc switches, hot-swap mounts, and through-hole diodes
- Gerbers and source kicad files available
- CC-BY-NC-SA Licensed

## Assembly

There is only one known hardware issue: The TRRS jack was placed inset to the pcb, which prevents my TRRS cable from being connected. I filed through the pcb to allow room for the connection. Filing through fiberglass is not exactly fun--I did it with the corner of the board submerged in water, and superglued over the exposed edge. Do not worry about shorting the copper planes together, as both are ground.

I prefer clipping through-hole pins to less than the pcb-width, giving a flush solder joint. However the hot-swap mounts are sharp enough to catch a deskmat, so this is less important on MK4.

## Flashing:

For the Elite-Pi microcontroller, plug in one board at a time, and run the following command to start compilation. Once it is waiting for a board, double press the boot dimple button on the Elite-Pi, and mount with dolphin.

```bash
# Plug in left side
qmk flash -kb ngc224 -km default -c -bl uf2-split-left

# Plug in right side
qmk flash -kb ngc224 -km default -c -bl uf2-split-right
```

## Layouts:
"One does not simply share his emacs configuration, this is all personalized to my quirks and misdemeanors"

I use [Colemak-DH](https://colemakmods.github.io/mod-dh/), chosen due to hand pain issues to minimize finger travel, especially with less usage of the center columns

## BOM:
- 1-each: left and right PCBs
	- As an american I spend \$40 to ship and import a \$9 JLC
- 36: Kailh choc hot-swap mounts
- 36: Kailh choc switches
- 72: through-hole 1N4148 Diodes
- 2: TRRS connectrs
- 1: TRRS cable

## Credits:
- Kicad footprints are from [joe-scotto/scottokeebs](https://github.com/joe-scotto/scottokeebs)
