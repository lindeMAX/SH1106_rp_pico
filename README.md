# SH1106 driver (1.3 OLED display) for Raspberry Pi Pico

## GPIO onfiguration

> spi1 is used as default

| GPIO | OLED |
|:---: |:---: |
| 10 | CLK |
| 11 | DIN |
| 12 | NC |
| 13 | CS |
| 14 | D/C |
| 15 | RES |

## Compile & Flash

```bash
mkdir build
cd build
cmake ..
make
picotool load test.uf2
picotool reboot
```
