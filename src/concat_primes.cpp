/** 
    @mainpage Concat Primes

    @author Author

    Program to slice a string formed after concatenating the first
    k primes numbers.
*/

/** \file concat_primes.cpp
    \brief Main program that, given a number n, returns a substring
    of the string formed by concatenating the first k prime numbers.

    The program accepts a number n from stdin provided by a user.        
    Then, the program takes the first few prime numbers, converts them   
    to  strings and concatenates them to get a string (say concat_primes 
    of length 1000.                                                      
                                                                         
    Finally, the program prints the first 5 characters of concat_primes 
    starting at index n.                                                 
    For example, the first few prime numbers are 2, 3, 5, 7, 11, 13, 17..
    Thus, concat_primes = "2357111317...". If the user provides $n = 3$, the program
    should print 71113.

    Requires: C++11
*/


#include<iostream>
#include<string>


/** \brief Returns a string of length 1000 formed after concatenating
    the first k prime numbers.
    You can uses the Sieve of Eratosthenes method to filter prime numbers.

    @return std::string
*/
std::string get_concatenated_primes()
{
    std::string concat_primes = "";
    //Complete this function

    return concat_primes.substr(0, 1000);
}


/** \brief Return a slice of a string of length 5 beginning at the
    given index.

    @param primes is a string
    @param index is an integer
    @return std::string
*/
std::string get_slice_of_5(const std::string & primes, const int index)
{
    std::string ret = "";
    //Complete this function
    return ret;
}
/** \brief Program entry point

    The program starts execution from here. It accepts integer input
    from the user until the EOF is reached or when the user terminates
    the program.
*/
int main(int argc, char *argv[]){
    using namespace std;
    int n;
    string concat_primes;
    if (argc >= 2){
        concat_primes = get_concatenated_primes();
        assert(get_slice_of_5(concat_primes, 3) == "71113");
        assert(get_slice_of_5(concat_primes, 6) == "13171");
        cout<<"passed Assert"<<endl;
    } else{        
        while(std::cin >> n)
        {
            concat_primes = get_concatenated_primes();
            std::cout << get_slice_of_5(concat_primes, n) << std::endl;
        }
    }
    return 0;
}
