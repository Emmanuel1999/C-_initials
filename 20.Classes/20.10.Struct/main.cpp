#include <iostream>

class Dog {
    public:
        std::string m_name;
};

struct Caty
{
    public:
        std::string m_name;
};

struct Point {
    double x;
    double y;

};

void print_point (const Point& point) {
    std::cout << "Point [ x: " << point.x << ", y: " << point.y << "]" << std::endl;
}

int main(){

    Dog bark;
    Caty meow;

    bark.m_name = "Bingo"; //Private ...Compiler error
    meow.m_name = "Fluffles"; //Public
    std::cout << meow.m_name << std::endl;
    std::cout << bark.m_name << std::endl;
    std::cout << std::endl;


    Point point1;
    point1.x = 34.5;
    point1.y = 43.2;
    print_point(point1);

    point1.x = 0.5;
    point1.y = 431.2;
    print_point(point1);


    return 0;
}