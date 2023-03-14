#include <iostream>
#include "cylinder.h"


int main(){

    Cylinder cylinder1;

    cylinder1.volume();

    //Managing a stack through pointers
    Cylinder* p_cylinder1 = &cylinder1;

    //std::cout << "volume : " << (*p_cylinder1).volume() << std::endl;
    std::cout << "volume : " << p_cylinder1->volume() << std::endl;

    //Create a cylinder object through the new operator
    Cylinder* p_cylinder2 = new Cylinder(100,2); //Heap memory
    std::cout << "volume(p_cylinder2) : " << p_cylinder2->volume() << std::endl;
    std::cout << "base_rad(p_cylinder2) : " <<p_cylinder2->get_base_radius() << std::endl;




    delete p_cylinder2;
    
    return 0;
}