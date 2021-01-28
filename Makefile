CC = g++
CFLAGS = --std=c++11 -Wall -c
LFLAGS = --std=c++11
SRC = src
OBJ = obj
DOC = doc
TEST = test

all: roman

#Add target roman: Final executable file name should be roman

#add target $(OBJ)/main.o

#add target $(OBJ)/roman.o




#leave below un touched
.PHONY: clean doc test

doc:
	doxygen doxyfile

test:
	./test.sh

clean:
	rm -rf $(OBJ)/* roman
