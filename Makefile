all: example
	doxygen Doxyfile
	
example: ./src/main.cpp ./include/example.hpp
	g++ -g -Wall -I ./include/ ./src/main.cpp -o ./bin/example
	
clean:
	rm -rf ./doc/*
	rm -rf ./bin/*
