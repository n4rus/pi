#!/bin/bash

echo "copying all text from dirs & sub-dirs into $f file..."
#define f as file name
#then cat all text files with:
cat ./* > $f
#or:
