#include <iostream>
#include "cylinder.h"

int main(){
    
    Cylinder cylin1(10);

    std::cout << "base_rad : " << cylin1.get_base_radius() << std::endl;
    std::cout << "height : " << cylin1.get_height() << std::endl;
    std::cout << "volume : " << cylin1.volume() << std::endl;
    
    return 0;
}