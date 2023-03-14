#include <iostream>

namespace{
    double add(double a, double b); //Declaration
}

int main(){
    
    double result = add(10.2,30.1);
    std::cout << "result: " << result << std::endl;

    return 0;
}