# Open TAC

**Version 1.0.4**

This project is inspired by the project "inFORM" made by MIT Media Lab and we aim to make a small version with an appropriate price.


## Video

This video gives the general purpose and construction of the project.

[![Video](https://img.youtube.com/vi/bSxOIqRPzkY/hqdefault.jpg)](https://www.youtube.com/watch?v=bSxOIqRPzkY&t=8s)

## Prerequisites

What things you need to install the system


| Material      | Count  |
| ------------- | -----:|
| Servo Motors       |   64 |
| Electronic Circuit |    1 |
| Arduino            |    1 |
| Wooden Plates      |    1 |
| Power Supply (5V 20A)      |    1 |
| 3D Prints           |   |

## Installing

### 3D Printing
First of all we should print all of the parts from 3D printer. In first try we used model from [*DesignCell*](https://www.thingiverse.com/thing:2038205). But we changed the model to sit appropriate the cover.
You can find all 3D designs in the folder. I also add the 3D parts to [Thingiverse](https://www.thingiverse.com/musas/designs) that you can download easily.  We use [Craftware](https://craftunique.com/craftware/) as a slicer. After slice the models with these adjusments;

- [x] 0.3mm **Layer Height** 
- [x] 50 mm/s **Draw Speed**
- [x] **No Raft- No Support**

After 120 hours of printing now we're all done!

![gif](https://user-images.githubusercontent.com/19881231/38439608-eff2dbaa-39e6-11e8-8c91-3427f27b1e2d.gif)

After that models be like that.


<img src="https://user-images.githubusercontent.com/19881231/38439678-3630071e-39e7-11e8-8590-b550e2a29c3c.jpg" width="175">


Put the model3 (in the folder) top of the rod.

### Installing the Cover

After mounting each servo motor, let's put in the system. You should watch out the aligment of the motors.


<img src="https://user-images.githubusercontent.com/19881231/38440121-fba48744-39e8-11e8-9872-40d301a83627.jpg" width="350">


## Circuit Designs & Schematics

The current circuit so basic and so easy to control the sytem. We use [**PCA9685**](https://www.adafruit.com/product/815) from Adafruit for controlling servo motors. You should adress the boards before wiring. Adressing can be like:

- [x] 0x40
- [x] 0x41
- [x] 0x42
- [x] 0x43


![cizimdevre](https://user-images.githubusercontent.com/19881231/38440563-82fbccce-39ea-11e8-8d62-82ee6ca1d86f.JPG)

In the current system we use Arduino Nano that use AtMega328 as microcontroller. But it can be insufficient for memory. So we can
use Atmega2560 as an alternative. We designed a PCB that we can control the system gerber files included in the project detail.

- [ ] Tested

## Software Part
You can control the system like
```c++
SET_SERVO(0000000011111111222222223333333344444444555555556666666677777777);
GO();
```
## Built With

* [Arduino](https://www.arduino.cc/) - For Controlling Circuit
* [.Net](https://docs.microsoft.com/en-gb/dotnet/csharp/programming-guide/) - .Net For GUI

## Authors

* **Musa Sadık Unal** - *Initial work* - [musaunal.com](http://www.musaunal.com/)
* **Ersin Erturk** - *Initial work*

## What We Plan To Do

- [ ] Add Leap Motion Interaction
- [ ] Eagle Schematic 
- [ ] Preparing GUI

## Acknowledgments

* Thanks to inFORM team for inspiration  (Especially thanks to Daniel Leithinger)
* First 3D parts from [*DesignCell*](https://www.thingiverse.com/thing:2038205) 

