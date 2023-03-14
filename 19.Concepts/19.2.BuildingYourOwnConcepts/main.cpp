#include <iostream>
#include <type_traits>
#include <concepts>

//Syntax1
/*
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
requires MyIntegral<T>
T add(T a, T b) {
    return a + b;
}
*/

//Syntax2
/*
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
T add(T a, T b) requires MyIntegral<T> {
    return a + b;
}
*/

//Syntax3
/*
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

MyIntegral auto add (MyIntegral auto a, MyIntegral auto b)  
{
    return a + b; 
}
*/

template <typename T>
concept Multipliable = requires (T a, T b) 
{
    a * b; // Ensure the syntax is valid
};

template <typename T>
concept Incrementable = requires (T a)
{
    a++;
    a+=1;
    ++a;
};

template <typename T>
requires Incrementable<T>
T add(T a, T b) {
    return a + b;
}


int main(){
    
    double x {32};
    double y {44};

    //std::string x {"Hello"};
    //std::string y {"There"};

    add(x,y);
    
    std::cout << "Done!" << std::endl;
    
    return 0;
}