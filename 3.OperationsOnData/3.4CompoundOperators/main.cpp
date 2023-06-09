#include <iostream>

int main(){
    
    int value {45};

    std::cout << "The value is : " << value << std::endl;
    
    std::cout << std::endl;
    value +=5; // Equals value = value + 5

    std::cout << "The value is (after +=) : " << value << std::endl; //50
    std::cout << std::endl;

    value -=5; // Equals value = value - 5
    std::cout << "The value is (after -=) : " << value << std::endl; //45
    std::cout << std::endl;

    value *=2; //Same as value = value * 2
    std::cout << "The value is (after *=) : " << value << std::endl; //90
    std::cout << std::endl;

    value /=3; 
    std::cout << "The value is (after /=) : " << value << std::endl; //30
    std::cout << std::endl;

    value %=11;
    std::cout << "The value is (after %=) : " << value << std::endl; //8
    std::cout << std::endl;

    return 0;
}