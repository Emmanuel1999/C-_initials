#include <iostream>
#include <concepts>

template <typename T>
concept Tinytype = requires (T t)
{
    sizeof(T) <= 4; //Simple requirement : Only enforces syntax
    requires sizeof(T) <= 4; //Nested requirement
};

//Compound requirement
template <typename T>
concept Addable = requires (T a, T b)
{
    //noexcept is optional
    {a + b} -> std::convertible_to<int>; //Compound requirement
    //Checks if a + b is a valid syntax, doesn't throw exceptions(optional), and the result
    // is convertible to int
};


Addable auto add (Addable auto a, Addable auto b)
{
    return a + b;
}

int main(){
    
    double c {43};
    double d {2};

    //std::string c{"Hello"};
    //std::string d{"There"};

    auto result = add(c,d);
    std::cout << "result : " << result << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl;


    return 0;
}