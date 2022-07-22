#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libmya.a *.o
ranlib liball.a
