#include <iostream>
#include "point.h"
#include "number.h"

double sum(double a, double b) {
    return a + b;
}

void use_point (const Point& p) {
    std::cout << "Printing the point from use_point function: " << p << std::endl;
}

int main(){
    
    Number num1(32);
    Number num2(12);

    /*
    double result = sum(static_cast<double>(num1), static_cast<double>(num2));
    std::cout << "result: " << result << std::endl;
    */

    use_point(static_cast<Point>(num1));


    return 0;
}