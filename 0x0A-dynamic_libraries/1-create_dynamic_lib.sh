#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared *.o -o liball.so
