# CAD & STL files

<!--toc:start-->

- [CAD Instructions](#cad-instructions)
- [CAD Parameters](cad-parameters)
- [Printing Instructions](#printing-instructions)
  - [Printing Settings](#printing-settings)
- [External Components CAD Authors](#external-components-cad-authors)
<!--toc:end-->

In this directory, you can find all the CAD files and also ready to print STLs.

## CAD Instructions

There are 3 types of file extensions, `.f3d`, `.f3z` and `.step`. In case you are
working with a CAD software other than **Autodesk Fusion 360**, just use the `.step`
version. Otherwise, use the `.f3d` and `.f3z`. The difference is that `.f3z` contains
all the external components used on the design.

In case you want to build along the second [episode](https://youtu.be/XiTxWWNvyg0) of the series,
you can make use of the **components** folder, which contains all the components CAD
files for you to make use of them.

On the other hand, in case you just want to have the completed robot design,
to adapt some part for instance, you can use the files starting with `perceptron_bot`.

## CAD Parameters

| Name                  | value (mm)                      |
| --------------------- | ------------------------------- |
| **m2_nut**            | 4                               |
| **m3_nut**            | 5.6                             |
| **m3_head**           | 6.0                             |
| **hole_offset**       | 0.5                             |
| **chassis_size**      | 170                             |
| **l298_hole**         | 37.38                           |
| **l298_hole_h**       | 36.74                           |
| **l298_hole_d**       | 3.0                             |
| **pc_size_w**         | 100 (odroid N2+) \| 56.0 (Pi4)  |
| **pc_size_h**         | 91.0 (odroid N2+) \| 85.0 (Pi4) |
| **pc_hole_placement** | 9.75 (odroid N2+) \| 3.5 (Pi4)  |
| **pc_hole_w**         | 71.5 (odroid N2+) \| 49.0 (Pi4) |
| **pc_hole_h**         | 71.5 (odroid N2+) \| 58.0 (Pi4) |
| **pc_hole_d**         | 3.0 (odroid N2+) \| 2.5 (Pi4)   |
| **motor_hole_w**      | 16.2                            |
| **motor_hole_h**      | 14.2                            |
| **motor_hole_d**      | 3.0                             |
| **motor_offset**      | 13.0                            |
| **space_b_plates**    | 38.0                            |
| **pillars_offset**    | 6.0                             |

## Printing Instructions

Inside the `STL` folder, you can find all the necessary files that are to be printed.
You should print each file only once.

From all the files, only 2 parts require support material. These are the `wheel_frame` and `top_plate`.

### Printing Settings

- **Filament:** PLA/PETG
- **Infill:** 20%+
- **Perimeters:** 2 or 3
- **Supports**: No supports required execpt the 2 parts mentioned above.

> **Additional note:** For the caster wheel parts, please make sure to orient the parts
> in a **reasonable orientation**. For the rest of the parts, the default orientation is
> the expected.

## External Components CAD Authors

| Component           | Link                                                                                               |
| ------------------- | -------------------------------------------------------------------------------------------------- |
| Arduino Nano        | https://grabcad.com/library/arduino-nano--1                                                        |
| Pin Female Headers  | https://grabcad.com/library/pin-header-female-1                                                    |
| Odroid N2+          | https://grabcad.com/library/odroid-n2-3                                                            |
| Buck Converter      | https://grabcad.com/library/dc-dc-4-5-28v-to-0-8-20v-output-3a-mp1584en-step-down-buck-converter-1 |
| PCB Prototype Board | https://grabcad.com/library/pcb-board-prototype-3x7cm-1                                            |
| L298N Driver        | https://grabcad.com/library/l298n-driver-1/details?folder_id=3747362                               |
| Raspberry Pi 4      | https://grabcad.com/library/raspberry-pi-4-model-b-1                                               |
| XT60E Mount         | https://grabcad.com/library/xt60e-m-3                                                              |
