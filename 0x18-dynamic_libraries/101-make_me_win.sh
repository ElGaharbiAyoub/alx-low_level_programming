#!/bin/bash
echo -e '#include <stdio.h>\n\nunsigned int sleep(unsigned int seconds)\n{\n    return 0;\n}' > sleep.c
gcc -shared -o sleep.so -fPIC sleep.c
export LD_PRELOAD=$PWD/sleep.so
