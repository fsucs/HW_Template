
/**
@mainpage COP 3330 Project 1

@author Me and Myself

Here you should tell us about how your project works.  How to run,
any special things you have, etc.  Also, explain any non-trivial
design decisions you make. If you are working with a partner, clearly 
State what is each persons contribution. You should
also comment on the stability of your code.  Any big bugs should be listed
here.  Basically, anything that you think we need to know in general about
your project should go here.

Any additional comments you want to make can go here.  Did you like the
project?  Was it too hard, too easy?  My TA smells bad.  Well, you get
the idea.

This initial documentation here should be removed.
Or else you loose points.

*/


#include <iostream>
#include <example.hpp>

int main(int argc, char *argv[]){
	if( argc == 1 ) 
		std::cout << "Please give an argument\n";
	else 
		std::cout << "The first argument was :" << argv[1] 
			  << std::endl; 
	return 0;

}
