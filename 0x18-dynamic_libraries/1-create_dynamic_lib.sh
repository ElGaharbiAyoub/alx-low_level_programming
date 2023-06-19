#!/bin/bash
gcc -Wall -Wextra -fPIC -c *.c && gcc -shared -o liball.so *.o
