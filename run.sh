#!/bin/bash
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/tony/Desktop/DBus_CMake/build/Delivery/libraries
cd build || exit
exec Delivery/Provider & exec Delivery/Consumer