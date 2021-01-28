# Please complete this Makefile as needed. You can study the Makefile in project 3 to get an idea of how to write Makefile.
# For each target, you need to list the prerequisites, then write the command to make that target
CC = g++
CFLAGS = --std=c++11 -Wall -c
LFLAGS = --std=c++11
SRC = src
OBJ = obj
DOC = doc
TEST = test

all: roman

# Add target roman: Final executable file name should be roman. Compiled executable should be under current directory. You need to use $(OBJ)/main.o and $(OBJ)/roman.o to make this target. This two object files are made below.

# Add target $(OBJ)/main.o here 

# Add target $(OBJ)/roman.o here




# leave below untouched
.PHONY: clean doc test

doc:
	doxygen doxyfile

test:
	./test.sh

clean:
	rm -rf $(OBJ)/* roman
