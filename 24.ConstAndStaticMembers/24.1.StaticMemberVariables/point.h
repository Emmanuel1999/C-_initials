#ifndef POINT_H
#define POINT_H

#include <iostream> //Included to get access to size_t

class Point{
    private:
    double m_x;
    double m_y;
    static size_t m_point_count;

    public:
    //Constructors
    Point(double x, double y);
    Point(double xy_coord); //Point constructor
    Point();        //Default constructor
    Point(const Point& point); //Point copy constructor
    ~Point();       //point Destructor
    double length() const; //Function to calculate distance from the point(0,0)

    size_t get_point_count() const{
        return m_point_count;
    }

    void print_info() const{
        std::cout << "Point [&m_x: " << &m_x << ", &m_y: " << &m_y << "]" << std::endl; 
    }

};

#endif //POINT_H