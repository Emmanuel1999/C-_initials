#include <iostream>

template <typename T> T maximum(T a, T b); //Declaration

int main(){

    double a {43.5};
    double b {52.4};

    auto result = maximum (a,b);    
    
    return 0;
}

//Definition
template <typename T> T maximum(T a, T b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b ) ? a : b ;
}