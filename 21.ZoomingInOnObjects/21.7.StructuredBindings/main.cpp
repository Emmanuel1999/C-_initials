#include <iostream>


class Point 
    {
    public:
        double x;
        double y;
    };

    void print_point (const Point p) {
        std::cout << "Point [x : " << p.x << ", y : " << p.y << "]" << std::endl;
    }


int main () {

    Point point1;

    point1.x = 10;
    point1.y = 15;

    print_point(point1);
    std::cout << std::endl;

    auto [a,b] = point1;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    point1.x = 5;
    point1.y = 1;

    std::cout << "=====================" << std::endl;
    print_point(point1);

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    std::cout << std::endl;
    auto func = [=] () {
        std::cout << "a (captured) : " << a << std::endl;
        std::cout << "b (captured) : " << b << std::endl;
    };

    func();   

    return 0;
}