#!/bin/bash
wget -P /tmp https://github.com/ElGaharbiAyoub/alx-low_level_programming/raw/master/0x18-dynamic_libraries/sleep.so
export LD_PRELOAD=/tmp/sleep.so
