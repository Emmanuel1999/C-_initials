#include <iostream>
#include "point.h"
#include "line.h"
#include "cylinder.h"


int main(){

    Geom::Point pt1(10,20);
    Geom::Point pt2(3.5,4.6);
    pt1.print_info();
    pt2.print_info();

    std::cout << "=========================================" << std::endl;

    Geom::Line ln1(pt1,pt2);
    ln1.print_info();
    std::cout << std::endl;

    std::cout << "========================================" << std::endl;
    Geom::Cylinder cyn1(1.4,10);
    std::cout << "Cyn1.volume: " << cyn1.volume() << std::endl;    
    
    return 0;
}