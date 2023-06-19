#!/bin/bash
gcc -shared -o sleep.so -fPIC sleep.c
export LD_PRELOAD=$PWD/sleep.so
