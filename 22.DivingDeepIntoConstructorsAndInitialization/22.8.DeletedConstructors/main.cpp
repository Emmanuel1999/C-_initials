#include <iostream>
#include "point.h"

int main(){

    Point pt1(std::move(Point(23.1,32.2)));
    
    return 0;
}