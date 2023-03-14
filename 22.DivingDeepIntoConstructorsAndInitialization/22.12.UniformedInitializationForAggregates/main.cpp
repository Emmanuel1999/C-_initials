#include <iostream>
#include <string>

class Point{
    private:
    double m_x;
    double m_y;

public:
    Point(double x, double y) : m_x{x},m_y{y}{
        std::cout << "Point constructor called" << std::endl;
    }
    
};

struct Person
{
    std::string m_name;
    unsigned int m_age;
};


int main(){

    Point pt1{20.2,12.4}; //Uniform initialization : () or {}

    //Struct - {}
    Person pers1 {"Daniel", 34};

    //Struct - ()
    Person pers2 {"Rehoboth", 34};

    int students[] (1,2,3,4,5,6,7,8);   
    
    return 0;
}