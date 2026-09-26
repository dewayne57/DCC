# DCC

Digital Command Control model railroading projects organized as separate KiCad + Visual Studio Code workspaces, all targeting the PIC18F47Q43 microcontroller family.

## Projects

- `power-booster/` - rail power stage and fault handling booster firmware.
- `command-station-cab/` - handheld or panel-mounted DCC command station / cab.
- `diagnostic-tool/` - packet monitor that is intended to decode and print DCC traffic seen on the rails.
- `signal-controller-example/` - example layout accessory controller for signals or building effects.

## Common structure

Each project keeps hardware and firmware together:

- `hardware/` contains KiCad starter project files and hardware notes.
- `firmware/` contains a PIC18F47Q43-oriented C starter for editing in Visual Studio Code.

Open `DCC.code-workspace` in Visual Studio Code to work with all projects together.
