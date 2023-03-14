#include <iostream>

int main(){
    
    char operation; //+,-,/,* 
    double operand1;
    double operand2;
    bool end {false};

    std::cout << "Welcome to Emmy's Awesome Calculator!" << std::endl;

    while ((end == false))
    {
        //do some processing
        std::cout << "-----------------------------------------------" << std::endl;
        std::cout << "What operation would you need help with? " << std::endl;
        std::cout << "(Addition, Subtraction, Multiplication & Division are supported) " << std::endl;
        std::cout << "Your operation : ";
        std::cin >> operation;

        std::cout << std::endl;
        std::cout << "Please type in your two operands separated by a space and click enter : " << std::endl;
        std::cin >> operand1 >> operand2;
        std::cout << std::endl;

        switch (operation)
        {
        case '+':
            std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
            break;
        case '-':
            std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
            break;
        case '*':
            std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
            break;
        case '/':
            std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
            break;

        default:
            std::cout << "Operation not supported.... Argh!" << std::endl;
            break;
        }

        std::cout << "Continue? (Y | N) : ";
        
        char go_on;
        std::cin >> go_on;

        //end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

        
        //You could also write the previous statement using if else
        if((go_on == 'Y') || (go_on == 'y')){
            end = false;
        }else{
            end = true;
        }

    }

    std::cout << "Done my part, Chao!" << std::endl;
    

    return 0;
}