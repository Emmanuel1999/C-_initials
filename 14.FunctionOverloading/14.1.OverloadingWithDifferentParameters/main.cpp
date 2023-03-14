#include <iostream>

int max (int a, int b)
{
    std::cout << "int overload called: " << std::endl;
    return (a>b) ? a : b;
}

double max (double a, double b)
{
    std::cout << "double overload called: " << std::endl;
    return (a>b) ? a : b;
}

double max (int a, double b)
{
    std::cout << "(int, double) overload called: " << std::endl;
    return (a>b) ? a : b;
}

double max (double a, int b)
{
    std::cout << "(double, int) overload called: " << std::endl;
    return (a>b) ? a : b;
}

double max (double a, int b, int c)
{
    std::cout << "(double, int, int) overload called: " << std::endl;
    return a;
}

std::string_view max (std::string_view a, std::string_view b)
{
    std::cout << "(string_view, string_view) overload called: " << std::endl;
    return (a>b) ? a : b;
}

int main(){

    int x{6};
    int y{5};

    double a{5.9};
    double b{6.4};

    auto result = max(b,x,y);

    max("Hello", "World");
    
    
    return 0;
}