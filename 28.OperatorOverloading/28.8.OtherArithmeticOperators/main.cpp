#include <iostream>
#include "point.h"

int main(){
    
    std::cout << (Point(20,15) + Point(5,18)) << std::endl;
    std::cout << (Point (20,20) - Point(12,5)) << std::endl;

    Point pt1(10,20);
    Point pt2(12,11);
    Point pt3{pt1+pt2};
    Point pt4{pt2 - Point(5,5)};

    std::cout << "********************************" << std::endl;
    std::cout << "point1 : " <<  pt1 << std::endl; // (10,20)
    std::cout << "point3 : " << pt3 << std::endl; // (22,31)
    std::cout << "point4 : " << pt4 << std::endl; // (7,6)
    

    return 0;
}