#!/bin/bash
gcc -Wall -Werror -Wextra -pedantics -c *.c
ar -rc liball.a *.o
