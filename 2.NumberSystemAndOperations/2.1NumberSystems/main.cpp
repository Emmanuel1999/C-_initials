#include <iostream>

int main(){
    int number1 = 15; //decimal
    int number2 = 017; //octal
    int number3 = 0x0F; //hexadecimal
    int number4 = 0b00001111; //binary
    
    std::cout << "Number 1 : " << number1 << std::endl;
    std::cout << "Number 2 : " << number2 << std::endl;
    std::cout << "Number 3 : " << number3 << std::endl;
    std::cout << "Number 4 : " << number4 << std::endl;


    return 0;
}