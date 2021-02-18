#!/bin/bash

# File: test.sh
# Description: Does unit testing on matrix class.

SRC="./src"     # Source code dir.
TEST="./tests"   # Unit tests dir.

# Do Class Functionality Testing
for file in $TEST/0*.cpp; do
   prefix=${file%*.cpp}
   g++ --std=c++11 $file $SRC/matrix.cpp -o $prefix 2>/dev/null
   $prefix 2>/dev/null
   if [ $? -ne 0 ]; then
      echo "$prefix failed <---"
   else
      echo "$prefix passed"
   fi
   rm $prefix
done

# Do file in/out testing
g++ --std=c++11 $SRC/matrix.cpp $TEST/100.cpp -o $TEST/100 2>/dev/null
$TEST/100
for f in $TEST/t*.pgm; do
   f=${f%*.pgm}
   DIFF=$(diff -d -I '^#' -I '^ #' ${f}.ans ${f}.pgm)
   if [ "$DIFF" != "" ]; then
      echo "${f} failed <---"
   else
      echo "${f} passed"
   fi
   rm ${f}.pgm
done
rm $TEST/100
