all: document example
	@echo "All done!"
	
document:
	doxygen Doxyfile
	@echo "Documentation extraction complete."
 
example: ./src/main.cpp ./include/example.hpp
	g++ -g -Wall -I ./include/ ./src/main.cpp -o ./bin/example
	
clean:
	rm -rf ./doc/*
	rm -rf ./bin/*
