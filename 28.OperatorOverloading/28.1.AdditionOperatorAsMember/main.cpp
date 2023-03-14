#include <iostream>
#include "point.h"


int main(){
    
    Point pt1(20,10);
    Point pt2(5,15);
    Point pt3{pt1 + pt2}; //pt1.operator + (pt2) 
    
    Point pt4{pt2 + Point(5,5)};

    pt3.print_info();
    pt4.print_info();

    (Point(20,20) + Point(10,10)).print_info();


    return 0;
}