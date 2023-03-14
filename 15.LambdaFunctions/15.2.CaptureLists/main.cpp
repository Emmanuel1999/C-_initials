#include <iostream>

int main(){
    
    //Capture List
    /*
    double a {24.3};
    double b {32.2};

    auto func = [a,b] () {
        std::cout << "a + b : " << a+b << std::endl;
    };
    func();
    */

    //Capturing by value
    /*
    int c {42};
    auto func = [c] () {
        std::cout << "Inner value : " << c << " &inner : " << &c << std::endl;
        std::cout << std::endl;
    };

    for (size_t i = 0; i < 5; ++i)
    {
        std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
        func();
        ++c;
    }
    */

    //Capture by reference
    int c {42};
    auto func = [&c] () {
        std::cout << "Inner value : " << c << " &inner : " << &c << std::endl;
        std::cout << std::endl;
    };

    for (size_t i = 0; i < 5; ++i)
    {
        std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
        func();
        ++c;
    }    




    return 0;
}