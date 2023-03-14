#include <iostream>
#include "cylinder.h"


int main(){

    Cylinder clyn1(5.4,24.2);
    
    std::cout << "Volume of Cylinder: " << clyn1.volume() << std::endl;
    std::cout << "Cylinder default color: " << Cylinder::default_color << std::endl;
    std::cout << "Cylinder default color: " << clyn1.default_color << std::endl;
    
    return 0;
}