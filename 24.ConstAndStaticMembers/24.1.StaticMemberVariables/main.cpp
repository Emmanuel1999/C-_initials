#include <iostream>
#include "point.h"

int main(){

    //Print the point count in our program
    //std::cout << "Point count: " << Point::m_point_count << std::endl;
    
    Point pt1(10.2,20.3);
    std::cout << "Point count: " << pt1.get_point_count() << std::endl; //1

    Point pts[] {Point(1,1), Point(), Point(4)};

    std::cout << "Point count : " << pt1.get_point_count() << std::endl;
    
    return 0;
}