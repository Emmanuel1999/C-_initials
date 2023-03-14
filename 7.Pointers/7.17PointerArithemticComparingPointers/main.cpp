#include <iostream>

int main(){
    
    int scores [10] {31,32,33,34,35,36,37,38,39,40};

    int * pointer1 {&scores[0]};
    int * pointer2 {&scores[9]};

    //Can also compare pointers
    //The further you go in the array, the bigger the address

    std::cout << "Comparing pointers : " << std::boolalpha << std::endl;

    std::cout << "Pointer1 : " << *pointer1 << std::endl;
    std::cout << "Pointer2 : " << *pointer2 << std::endl;
    std::cout << "Pointer1 > Pointer2 : " << (pointer1 > pointer2) << std::endl;
    std::cout << "Pointer1 < Pointer2 : " << (pointer1 < pointer2) << std::endl;
    std::cout << "Pointer1 >= Pointer2 : " << (pointer1 >= pointer2) << std::endl;
    std::cout << "Pointer1 <= Pointer2 : " << (pointer1 <= pointer2) << std::endl;
    std::cout << "Pointer1 == Pointer2 : " << (pointer1 == pointer2) << std::endl;
    std::cout << "Pointer1 != Pointer2 : " << (pointer1 != pointer2) << std::endl; 
    
    return 0;
}