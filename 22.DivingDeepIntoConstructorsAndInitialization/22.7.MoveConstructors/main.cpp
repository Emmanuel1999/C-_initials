#include <iostream>
#include "point.h"

int main(){

    //Point pt1(10.5,53.6);
    //pt1.print_info();

    //Create a copy from a temporary
    Point pt3(std::move(Point(13.6,87.4)));
    pt3.print_info();
    
    
    return 0;
}