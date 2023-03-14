#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"


int main(){

    //Comparing objects sizes
    std::cout << "sizeof(Shape): " << sizeof(Shape) << std::endl;// dynamic: 40, static: 32
    std::cout << "sizeof(Oval): " << sizeof(Oval) << std::endl;// dynamic: 56, static: 48
    std::cout << "sizeof(Circle): " << sizeof(Circle) << std::endl;//dynamic: 56, static: 48
    
    //Slicing
    Circle circle1{3.2,"Circle1"};
    Shape shape = circle1;
    shape.draw(); //Shape::draw()

    return 0;
}