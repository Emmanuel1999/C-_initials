#include <iostream>
#include <string>
#include <cstring>

int main(){
    
    
	std::string hello_str{"Hello"};
    std::string bello_str{"Bello"};
    
    /*
	//Using the comparison operators
	std::cout << std::endl;
	std::cout << "Comparing with comparison operators : " << std::endl;
	
	std::cout << std::boolalpha;
    std::cout << hello_str << "==" <<  bello_str <<" : " << (hello_str == bello_str) << std::endl;//false
    std::cout << hello_str << "!=" <<  bello_str <<" : " << (hello_str != bello_str) << std::endl; //true
    std::cout << hello_str << ">" <<  bello_str <<" : " << (hello_str > bello_str) << std::endl; // true
    std::cout << hello_str << ">=" <<  bello_str <<" : " << (hello_str >= bello_str) << std::endl; // true
    std::cout << hello_str << "<" <<  bello_str <<" : " << (hello_str < bello_str) << std::endl; // false
    std::cout << hello_str << "<=" <<  bello_str <<" : " << (hello_str <= bello_str) << std::endl; // false
    */

    //Can compare std::string to C-string
    /*
    const char * c_str1 {"Bello"};
    hello_str = "Hello";
    
    std::cout << "hello_str.size() : " << hello_str.size() << std::endl;
    std::cout << "std::strlen(c_str1) : " << std::strlen(c_str1) << std::endl;
    std::cout << std::boolalpha;
    std::cout << hello_str << " == " << c_str1 << " (C-string) : " << (hello_str == c_str1) << std::endl;
    std::cout << c_str1 << " (C-string) == " << hello_str << " : " << (c_str1 == hello_str) << std::endl;
    std::cout << c_str1 << " (C-string) >= " << hello_str << " : " << (c_str1 >= hello_str) << std::endl;
    std::cout << c_str1 << " (C-string) < " << hello_str << " : " << (c_str1 < hello_str) << std::endl;
    */

    //Be careful about char arrays not terminated with null character
    hello_str = "Hello";
	//const char hello_char_array[] {'h','e','l','l','o'}; //The compiler is going to read past the string
														   //until it sees a null character and consider that
														   //end of the string. Your comparisons may give 
														   //erronous results

	const char hello_char_array[] {'h','e','l','l','o','\0'};//It works right if you put the '\' yourself
	std::cout << hello_str << "== hello_char_array : "  << std::boolalpha << (hello_str == hello_char_array) << std::endl;

    return 0;
}