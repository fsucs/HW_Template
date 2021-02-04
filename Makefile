# Please complete this Makefile as needed. You can study the Makefile in project 3 to get an idea of how to write Makefile.
# For each target, you need to list the prerequisites, then write the command to make that target
CC = g++
CFLAGS = --std=c++11 -Wall -c
LFLAGS = --std=c++11
SRC = src
OBJ = obj
DOC = doc
TEST = test

# Add target osm: Final executable file name should be osm. Compiled executable should be under current directory. You need to use $(OBJ)/main.o and $(OBJ)/osm.o to make this target. This two object files are made below.

# Add target $(OBJ)/main.o here

# Add target $(OBJ)/osm.o here


.PHONY: clean doc test

# Add target doc here

test:
	./test.sh

# Add clean here. You have to remove the project executable and any object code generated during compilation.

