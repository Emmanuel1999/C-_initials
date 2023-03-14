#include <iostream>
#include "point.h"

int main(){
    
    Point pt1(10,91);
    Point pt2(20,12);
    Point pt3(1,1);

    std::cout << "pt1 + pt2: " << (pt1 + pt2) << std::endl;
    std::cout << "pt2 - pt3: " << (pt2 - pt3) << std::endl;

    std::cout << "********************************" << std::endl;

    pt1-=pt3;
    pt2+=pt1;

    std::cout << "point1: " << pt1 << std::endl;
    std::cout << "point2: " << pt2 << std::endl; 


    return 0;
}