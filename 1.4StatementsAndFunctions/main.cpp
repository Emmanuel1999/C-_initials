#include <iostream>

int addNmubers(int first_param, int second_param) {
    int result = first_param + second_param;
    return result;
}

int multiplyNumbers(int first_param, int second_param){
    int result = first_param * second_param;
    return result;
}

int main(){

    int first_number {13}; //Statement
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl;//13
    std::cout << "Second number : " << second_number << std::endl; //7

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; //20

    sum = addNmubers(25,7);
    std::cout << "Sum : " << sum << std::endl; //32

    sum = addNmubers(30,54);
    std::cout << "Sum : " << sum << std::endl;

    std::cout <<"Sum : " << addNmubers(3,44) << std::endl;
    
    std::cout << "Multiplication : " << multiplyNumbers(3,5) << std::endl;
    
    return 0;
}