#!/bin/bash

gcc -Wall -pedantic -Wall -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a
ranlib liball.a
