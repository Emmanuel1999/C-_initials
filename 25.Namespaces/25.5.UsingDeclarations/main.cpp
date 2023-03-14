#include <iostream>
#include "point.h"
#include "cylinder.h"
#include "line.h"
#include "operations.h"

using Geom::Point; //Bringing in the name from the namespace;
using namespace Geom;

double add(double a, double b) {
    std::cout << "::add" << std::endl;
    return a + b + 0.555;
}

using Math::add;
using namespace Math;

int main(){

    Point pt1(10,25);
    Point pt2(3.5,5.6);
    pt1.print_info();
    pt2.print_info();

    std::cout << "*******************************" << std::endl;

    Line ln1(pt1,pt2);
    ln1.print_info();
    std::cout << std::endl;
    
    std::cout << "********************************" << std::endl;
    Cylinder cyln1(1.4,10);
    std::cout << "cyln1.volume: " << cyln1.volume() << std::endl;
    std::cout << "*****************************" << std::endl;

    Math_weighted::add(10,20);
    std::cout << "***********************" << std::endl;
    
    //using std::cout;
    //using std::endl;
    using namespace std; //NOT RECOMMENDED!

    cout << "Hello World!" << endl;

 
    



    return 0;
}