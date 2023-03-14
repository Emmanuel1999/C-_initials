#include <iostream>
#include <string>

int main(){

    //Printing data
/*
    std::cout << "Hello C++ World!" << std::endl;

    int age{21};
    std::cout << "My Age is : " << age << std::endl;

    std::cerr << "Error Message: 404 Error located!" << std::endl;
    std::clog << "Log Message: This is your logs!" << std::endl;
*/

    //Data Input
    /*
    int age1;
    std::string name;

    std::cout << "Pls type your Name and Age : " << std::endl;

    // std::cin >> name;
    // std::cin >> age1;

    std::cin >> name >> age1;

    std::cout << "Hello " << name << " are you " << age1 << " years old?" << std::endl;
    */

   //Data with spaces
    std::string full_name;
    int age2;

    std::cout << "Please type your full name and your age : " << std::endl;
     std::getline(std::cin,full_name);
     std::cin >> age2;
     
     std::cout << "Hell0 " << full_name << " you are " << age2 << " years old!" << std::endl;
     
    return 0;
}