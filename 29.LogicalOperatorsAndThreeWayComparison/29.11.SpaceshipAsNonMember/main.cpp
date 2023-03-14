#include <iostream>
#include "number.h"

class Point
{
public:
    Point(double x, double y) : m_x{x}, m_y{y} {};

    //Type conversion operator from Number to Point 
    operator Number() const {
        std::cout << "Converting: " << m_x << std::endl;
        return Number(static_cast<int>(m_x));
    }

private:
    double m_x{};
    double m_y{};

};


int main(){
    
    Point pt1{20,20};
    Point pt2{40,40};

    bool result = (pt1 == pt2);
    std::cout << std::boolalpha;
    std::cout << "pt1 > pt2: " << result << std::endl;
    
    return 0;
}