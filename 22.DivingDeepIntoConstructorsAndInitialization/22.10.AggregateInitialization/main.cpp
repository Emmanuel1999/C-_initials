#include <iostream>

struct Point
{
    double x;
    double y;
};

void print_point(const Point& p) {
    std::cout << "Point [x:" << p.x << ", y: " << p.y << "]" << std::endl;
}

int main(){
    
    Point pt1{21.5};
    print_point(pt1);

    int scores [] {22,21,23,56,65,77,87,89};
    
    
    
    return 0;
}