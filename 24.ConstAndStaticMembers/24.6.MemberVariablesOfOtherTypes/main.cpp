#include <iostream>
#include "point.h"


int main(){

    std::cout << std::endl;
    std::cout << "Entering main: " << std::endl;

    Point pt1(3.0,3.0);
    std::cout << "distance: " << pt1.length() << std::endl;

    std::cout << std::endl;
    std::cout << "Reading in the integers " << std::endl;

    std::cout << "Point.i1: " << pt1.i1.get_value() << std::endl;
    std::cout << "Point.i2: " << pt1.i2.get_value() << std::endl;
    std::cout << "Point.i3: " << Point::i3.get_value() << std::endl;
    std::cout << "Point.i4: " << Point::i4.get_value() << std::endl;

    std::cout << std::endl;
    std::cout << "====================================" << std::endl;
    pt1.i1.set_value(8);// Works, i1 is not const
    std::cout << "Pt.i1 changed is: " << pt1.i1.get_value() << std::endl;


	//pt1.i2.set_value(10); // Compiler error, i2 is const, can't modify it.
	
	std::cout << "point1.p_i5 (pointer) : " << pt1.p_i5->get_value() << std::endl;
	
	std::cout << "Point::i6 : " << Point::i6.get_value() << std::endl;
	std::cout << "Point::i7 : " << Point::i7.get_value() << std::endl;
	
	Point::i6.set_value(50);
    std::cout << "Pt.i6 changed is: " << pt1.i6.get_value() << std::endl;

	//Point::i7.set_value(60); // Compiler error : i6 is const.
	
	std::cout << std::endl;
	std::cout << "Leaving main" << std::endl;

    return 0;
}