# Observer Pattern - using clasic oriented object programming

## Description
This is a very basic version of the Observer Pattern [Wikipedia](https://en.wikipedia.org/wiki/Observer_pattern) that will be used to show some principles that are used in Reactive Programming [Wikipedia](https://en.wikipedia.org/wiki/Reactive_programming).

## Requirements to use this program
* In order to use this program, it is necessary to check out if gcc & g++ versions are higher than version 8.  
**NOTE:** This program was tested in Windows 10 using VS 2019 Compiler and Linux-Ubuntu using GCC/G++ version 9.

## Steps to install GCC version 9 in Ubuntu
Run the following command:
```bash
> sudo apt install gcc-9
```
Verify gcc alternative versions:
```bash
sudo update_alternatives --verbose --display gcc
```
If gcc version 9 has not been included as alternative, run following instruction
```bash
sudo update-alternatives --verbose --install /usr/bin/gcc gcc /usr/bin/gcc-9 60
```
Setting up version 9 as current default version:
```bash
sudo update-alternatives --verbose --config gcc
```
## Steps to install G++ version 9 in Ubuntu
Run the following command:
```bash
> sudo apt install g++-9
```
Verify g++ alternative versions:
```bash
sudo update_alternatives --verbose --display g++
```
If g++ version 9 has not been included as alternative, run following instruction:
```bash
sudo update-alternatives --verbose --install /usr/bin/g++ g++ /usr/bin/g++-9 60
```
Setting up version 9 as current default version:
```bash
sudo update-alternatives --verbose --config g++
```


