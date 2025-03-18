#!/usr/bin/bash

#conan install . --output-folder=build --build=missing

cd build

meson compile

./examify
