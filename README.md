# Sherlock search engine

This is a search engine in which the back-end is written in C++ and the front-end is implemented using ReactJs.
The default structure is configured for building a back-end, as well as providing an front-end that communicates with it.



## Setup instructions

This project depends on some packages, which need to be installed prior to build and run it.

Install `restbed`

If you have a `Linux` machine, you can run the following command in the
terminal to install `restbed`:  

```sh
sudo apt-get update
sudo apt install librestbed-dev
```

* [CMake installation](https://cmake.org/install/)
* [NodeJs and npm installation](https://linuxize.com/post/how-to-install-node-js-on-ubuntu-18.04/)



## Building back-end and run

``` bash
> cd back_end && mkdir build && cd build
> conan install .. && cmake .. && cmake --build .
> ./sherlock
```


## Start front-end

``` bash
> cd front_end
> npm start
```
