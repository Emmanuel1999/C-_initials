#include <iostream>
#include "point.h"


int main(){

    Point pt1(10,20);

    //std::cout << "p1.x : " << p1[0] << std::endl; // x coordinate : 10
    std::cout << "pt1.x : " << pt1.operator[](0) << std::endl; // x coordinate : 10
    std::cout << "pt1.y : " << pt1[1] << std::endl; // y coordinate : 20    
    
    return 0;
}