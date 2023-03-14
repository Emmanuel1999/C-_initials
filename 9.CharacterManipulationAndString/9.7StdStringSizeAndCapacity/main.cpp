#include <iostream>
#include <string>

int main(){
    

    /*
    std::string str1 {"Hello World"};
    std::string str2;
    std::string str3 {};

    //Empty
    std::cout << std::endl;
    std::cout << "std::string::empty() : " << std::endl;
    std::cout << "str1 is empty : " << std::boolalpha << str1.empty() << std::endl;
    std::cout << "str2 is empty : " << std::boolalpha << str2.empty() << std::endl;
    std::cout << "str3 is empty : " << std::boolalpha << str3.empty() << std::endl;

    //Size
    std::cout << std::endl;
    std::cout << "std::string::size() : " << std::endl;
    std::cout << "str1 contains " << str1.size() << " characters" << std::endl;
    std::cout << "str2 contains " << str2.size() << " characters" << std::endl;
    std::cout << "str3 contains " << str3.size() << " characters" << std::endl;

    //Length
    std::cout << std::endl;
    std::cout << "std::string::length() : " << std::endl;
    std::cout << "str1 contains " << str1.length() << " characters." << std::endl;
    std::cout << "str2 contains " << str2.length() << " characters." << std::endl;
    std::cout << "str3 contains " << str3.length() << " characters." << std::endl;   
    */

    //max_size : max number of characters a string can have on the system
    /*
	//Prints : 2147483647 on my system
    std::string str1 {"Hello World"};
    std::cout << "std::string can hold " << str1.max_size() << " characters" << std::endl;
    */


    //Capacity
    
    std::string str1 {"Hello World"};
    std::string str2;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
	std::cout << "str2 capacity : " << str2.capacity() << std::endl;
	
	str1 = "The sky is so blue, the grass is green. Kids are running all over the place";
	
    std::cout << "str1 size : " << str1.size() << std::endl;
	std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    


    return 0;
}