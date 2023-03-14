#include <iostream>

template <typename T> const T& maximum(const T& a, const T& b);//Declaration

//template <typename T> T maximum(T a, T b);

int main(){
    
    double a {23.5};
    double b {51.2};

    std::cout << "Out- &a: " << &a << std::endl; //0x111ada
    auto result = maximum (a,b);
    std::cout << "Out- &a: " << &a << std::endl; //0x111ada

    return 0;
}

//Definition
template <typename T> const T& maximum(const T& a, const T& b){
    //++a;//Compiler error
    std::cout << "In - &a: " << &a << std::endl; // 0x111ada
    return (a > b ) ? a : b ;
}

/*
template <typename T> T maximum(T a, T b){
    std::cout << "In - &a: " << &a << std::endl; // 0x111ada
    return (a > b ) ? a : b ;
}
*/