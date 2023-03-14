#include <iostream>
#include <iomanip>

int main(){

    //Declare and initialize the variables
    float number1 {1.1235678901234567890f}; //Precision = 7
    double number2 {1.12345678901234567890}; //Precision = 17 
    long double number3 {1.12345678901234567890L};

    //Print out the sizes 
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    //Precision
    std::cout << std::setprecision(20); //Control precision from std::cout.
    std::cout << "number 1 is : " << number1 << std::endl; //7 digits
    std::cout << "number 2 is : " << number2 << std::endl; //around 15 digits
    std::cout << "number 3 is : " << number3 << std::endl; //15+ digits

    //float problems : Too limited precision for a lot of applications
    float number4 {123400721.0f};    // Error narrowing conversion

    std::cout << "Number 4 : " << number4 << std::endl;
    std::cout << "........................." << std::endl;

    //Scientific notation
    //For really large or small numbers its advisable to use this

    double number5 {123400721};
    double number6 {1.23400721e8};
    double number7 {1.234e8}; //Can omit the remaining numbers for simplicity if application allows.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)

    std::cout << "number 5 : " << number5 << std::endl;
    std::cout << "number 6 : " << number6 << std::endl;
    std::cout << "number 7 : " << number7 << std::endl;
    std::cout << "number 8 : " << number8 << std::endl;
    std::cout << "number 9 : " << number9 << std::endl;
    
    //Infinity and NaN
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;

    double number10 {5.9};
    double number11 {}; //initialize to 0.
    double number12 {}; //initialize to 0.

    //Infinity 
    double result {number10 / number11};

    std::cout << number10 << " / " << number11 << " yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields "  << result + number10 << std::endl;

    //NaN

    result = number11 / number12;
    
    std::cout << number11 << " / " << number12 << " = " << result << std::endl;


    return 0;
}