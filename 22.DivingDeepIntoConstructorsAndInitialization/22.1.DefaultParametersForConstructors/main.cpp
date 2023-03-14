#include <iostream>
#include "cylinder.h"

int main(){
    
    Cylinder c1(1);
    std::cout << "Volume : " << c1.volume() << std::endl;
    
    return 0;
}