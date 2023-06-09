#!/bin/bash

gcc -Wall -pedantic -Werroe -Wextra -c *.c
ar rc liball.a *.c
