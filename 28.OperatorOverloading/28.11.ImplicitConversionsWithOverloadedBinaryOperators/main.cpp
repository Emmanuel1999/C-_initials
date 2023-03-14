#include <iostream>
#include "number.h"

int main(){
    
    Number num1(32);

    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num1 + 2: " << (num1 + 2) << std::endl;
    std::cout << "2 + num1: " << (2 + num1) << std::endl;
    std::cout << "42 - num1: " << (42 - num1) << std::endl;

    return 0;
}