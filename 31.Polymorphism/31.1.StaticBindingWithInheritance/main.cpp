#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"


void draw_circle(const Circle& circle) {
    circle.draw();
}

void draw_oval(const Oval& oval) {
    oval.draw();
}
//More functions as you deal with more shape types. 30? 50? 100? ... Very messy




int main(){


    //26:50:00
    Shape shape1("Shape1");
    //shape1.draw();

    Oval oval1(2.0,3.5,"Oval1");
    //oval1.draw();

    Circle circle1(3.3,"Circle1");
    //circle1.draw();

    //Base pointers
    //Static binding: Binded to shape and not to the individual objects

    Shape * shape_ptr = &shape1;
    //shape_ptr->draw();

    shape_ptr = &oval1;
    //shape_ptr->draw(); // Draw an oval... But doesnt draw an oval but a shape 

    shape_ptr = &circle1;
    //shape_ptr->draw(); //

    //Base references

    Shape& shape_ref = oval1;
    shape_ref.draw();

//Static binding and its the default behavior we get if we have an inheritance 
//hierarchy with the same method spread across each derived class. youre going to
//get the shape version called even if we're managing it with shape_ptr or shape_ref
//is a derived object. Thus, it's really BAD design in C++

    //Drawing shapes
    draw_circle(circle1);
    draw_oval(oval1);

    //Shapes stored in collections 
    Circle circle_collection[]{circle1,Circle(10.0,"Circle2"),Circle(20.0,"Circle3")};
    Oval oval_collection[]{oval1,Oval(22.3,42.1,"Oval2")};
    //More arrays more shape types, 100? Messy hmm hmm

//NB: Static binding will be bad if you're managing alot of data it's unattainable


    return 0;
}