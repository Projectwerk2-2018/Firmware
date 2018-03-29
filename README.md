# Project Smart-Campus - Firmware
This is the firmware for a environment Sensor Board for the project Smart-Campus created by University College VIVES campus Bruges.



## Setting up the project
Next we need to download the libraries:

```shell
mbed deploy
```

Now setup the project to compile for example for the LPC1768 by editing the `.mbed` file and adding the following to it (this can also be done automatically using the mbed detect command if you have an mbed connected):

```
ROOT=.
TOOLCHAIN=GCC_ARM
TARGET=LPC1768
```

Last we need to enable C++11 compilation. THis can be achieved by changing the three json configurations files in `code/mbed-os/tools/profiles`. Change the `cxx` section of the `GCC_ARM` config to the following:

```json
        "cxx": ["-std=gnu++11", "-fno-rtti", "-Wvla"],
```

## Adding libraries

If you add other libraries, please only add the `.lib` file to the repository and add the actual library directory to the `code/.gitignore` file. Take a look inside the file for an example.