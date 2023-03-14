#include <iostream>

//Global namespace
double add(double a, double b) {
    return a+b;
}

namespace My_thing{
    double add(double a, double b) {
        return a + b - 1;
    }

    void do_sth() {
        double result = ::add(10,100);
        std::cout << "result: " << result << std::endl;
    }
}

int main(){
    
    My_thing::do_sth();
    

    return 0;
}