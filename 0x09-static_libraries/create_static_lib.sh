#!/bin/bash

# Compile the .c files and generate corresponding object files
gcc -c *.c

# Create the static library by archiving the object files
ar rcs liball.a *.o
