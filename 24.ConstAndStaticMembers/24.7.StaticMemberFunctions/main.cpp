#include <iostream>
#include "point.h"


int main(){

    //std::cout << "Point count: " << Point::get_point_count() << std::endl;

    Point pt1{30,2};

    std::cout << std::endl;
    //std::cout << "Point count: " << pt1.get_point_count() << std::endl;

    pt1.print_info(pt1);
    
    return 0;
}