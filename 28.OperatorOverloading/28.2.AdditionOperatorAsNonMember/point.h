#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    friend Point operator+ (const Point& left, const Point& right);
    public:
        Point() = default;
        Point(double x, double y) : m_x(x), m_y(y) {}
        ~Point() = default;
        
        void print_info() {
            std::cout << "Point [x: " << m_x << ", y: " << m_y << "]" << std::endl;
        } 

    private: 
        double m_x{};
        double m_y{};
    private:
        double length() const; //Function to calculate the distance from point (0,0)
    
};

#endif //POINT_H