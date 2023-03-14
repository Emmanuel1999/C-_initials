#include <iostream>

int main(){
    
    int number1 {45};
    int number2 {60};

    std::cout << "number 1 : " << number1 << std::endl;
    std::cout << "number 2 : " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha; // Make the bool show true/false instead of 1/0
    //stressing the need for parenthesis ()

    std::cout << "number 1 < number 2 : " << (number1 < number2) << std::endl;//< lesser than
    std::cout << "number 1 <= number 2 : " << (number1 <= number2) << std::endl;//<= lesser than or equal to
    std::cout << "number 1 > number 2 : " << (number1 > number2) << std::endl;//> greater than
    std::cout << "number 1 >= number 2 : " << (number1 >= number2) << std::endl;//>= greater than or equal to
    std::cout << "number 1 == number 2 : " << (number1 == number2) << std::endl;// == Is equal
    std::cout << "number 1 != number 2 : " << (number1 != number2) << std::endl;// != NOT eual

    std::cout << std::endl;
    std::cout << "---store comparison result and use it later----" << std::endl;

    bool result = (number1 == number2);
    std::cout << number1 << " == " << number2 << " : " << result << std::endl;

    return 0;
}