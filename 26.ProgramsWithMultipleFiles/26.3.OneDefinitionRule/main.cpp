#include <iostream>
#include "person.h"

//Variable: Declaration & definition

double weight{};
double add(double a, double b);

struct Point
{
    double m_x{};
    double m_y{};
};

int main(){
    
    Person pers1("John Cash", 34);
    pers1.print_info();  

    return 0;
}

/*
double add(double a, double b){
    return a + b;
}
*/

