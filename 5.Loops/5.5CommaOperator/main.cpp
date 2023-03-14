#include <iostream>

int main(){
    
    //The comma operator comines two
    //or more expressions into a single expression,
    //where the value of the operation is the value of the right operand.

    int increment {5};
    int number1 {10};
    int number2 {20};
    int number3 {25};

    //Didn't get how C++ arrive at the answers for number 3 especially
    int result = (number3 += ++increment, number1 *= ++increment, number2 - (++increment)); // 10 * (1+5) =60, 20 - (1+5) = 14, 25+6 =31

    std::cout << "number 1 : " << number1 << std::endl; //60
    std::cout << "number 2 : " << number2 << std::endl; //20
    std::cout << "number 3 : " << number3 << std::endl; //33
    std::cout << "result : " << result << std::endl; //33

    return 0;
}