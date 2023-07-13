#!/bin/bash
cmake -B build
cd build || exit
make -j8
