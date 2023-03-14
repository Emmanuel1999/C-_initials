#include <iostream>
#include "point.h"

int main(){

    //Print the point count in our program
    //std::cout << "Point count: " << Point::m_point_count << std::endl; //0
    
    
    Point pt1(12.4);
    std::cout << "Point count: " << pt1.get_point_count() << std::endl; //1
    
    Point points[] {Point(1,1), Point(), Point(5), Point(50.5)};

    std::cout << "Point count: " << pt1.get_point_count() << std::endl; //5 


    return 0;
}