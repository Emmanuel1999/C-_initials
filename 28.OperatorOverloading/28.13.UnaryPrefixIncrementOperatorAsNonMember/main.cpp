#include <iostream>
#include "point.h"


int main(){
    
    Point pt1(10,10);

    std::cout << "pt1: " << pt1 << std::endl;

    operator++(pt1);
    std::cout << std::endl;
    std::cout << "pt1: " << pt1 << std::endl;

    std::cout << std::endl;
    for (size_t i = 0; i < 20; i++)
    {
        ++pt1;
        std::cout << "Pt1: " << pt1 << std::endl;
    }
         

    return 0;
}