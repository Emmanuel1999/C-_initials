#include <iostream>
#include "person.h"

//Declaration and definition
double weight;

//Functions : declaration & definition
/*
double add(double a, double b) {
    return a+b;
}
*/

//Declaration
double add(double a, double b);

//Declaration & definition
struct Point
{
    double m_x;
    double m_y;
};


int main(){
    
    weight = 5; //Assignment
    std::cout << "weight: " << weight << std::endl;

    double result = add(10,24.3);
    std::cout << "result: " << result << std::endl;
    std::cout << "*****************************" << std::endl;

    Person pers1("John Cashinow", 32);
    pers1.print_info();

    
    return 0;
}

/*
//Definition
double add(double a, double b){
    return a + b;
}
*/


