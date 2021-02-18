# Please complete this Makefile as needed. For each target, you need to list the prerequisites, then write the command to make that target

CC := g++			# Compiler to use.
CFLAGS := -c -g -Wall -Werror -Wpedantic --std=c++11	# Compilation flags.
LFLAGS := -g		# Linker flags.
SRC := ./src		# Source code directory.
OBJ := ./obj		# Object code directory.
TEST := ./tests		# Test code directory

# Add target matman: Final executable file name should be matman. Compiled executable should be under current directory. You need to use $(OBJ)/matman.o and $(OBJ)/matrix.o to make this target. This two object files are made below.

# Add target $(OBJ)/matman.o here

# Add target $(OBJ)/matrix.o here


# test
test:
	./test.sh

.PHONY: clean doc

# Add target clean here, so 'make clean' can remove the project executable and any object code generated during compilation.


# Add target doc here, so 'make doc' can enerate HTML documentation.
