#!/bin/bash
wget -P .. https://raw.githubusercontent.comAnteneh2121/alx-low_level_programming/main/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD="$PWD/../libinjection.so"
