#!/bin/bash

gcc -c -fPIC *.c
gcc -o -shared liball.so *.o
