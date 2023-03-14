#include <iostream>
#include "utility.h"

inline int age{15};

inline void some_func(){
    std::cout << "age: " << age << std::endl;
    std::cout << "&age: " << &age << std::endl;
}

void print_age_utility1() {
    std::cout << "Printing from utility1: " << std::endl;
    some_func();
    std::cout << std::endl;
}