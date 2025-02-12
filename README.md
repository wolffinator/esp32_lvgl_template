# How I Got this Repo Set Up

## Export a SquareLine studio project as an Arduino Project

Watch the following video and get an Arduino project compiling.

https://www.bing.com/videos/riverview/relatedvideo?&q=squareline+studio+export+project&&mid=C99A941857865FC1D00CC99A941857865FC1D00C&mmscn=mtsc&aps=68&FORM=VRDGAR

For the Seeed studio Round display I'm using here, uncomment the following line in User_Setup_Select and make sure to comment out the other generic include near the top of the file.

```cpp
#include <User_Setups/Setup66_Seeed_XIAO_Round.h>     // Setup file for Seeed XIAO with GC9A01 240x240
```



Verify you can compile and flash via Arduino to the board.



## Create a PlatformIO Project as Normal for an ESP32-C3 Board

## Move Contents of SquareLine Export to PlatformIO Project

- Move the contents of the libraries folder for the exported Squareline Studio project into the lib folder of the PlatformIO project.
- Copy the contents of the ui.ino file into main.cpp.
- Make sure to install the `I2C BM8563 RTC` library from PlatformIO.
- Try building it.

## Set SquareLine Studio's UI Export Path to the lib/ui/src Directory

This way, you only need to hit "Export UI Files" and then hit compile/upload to see your changes on the real display.
