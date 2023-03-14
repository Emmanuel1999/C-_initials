#include <iostream>

int main(){
   
    char operation; //+,-,/,*
    double operand1;
    double operand2;
    bool end {false};

    std::cout << "Emmy's Basic Calculator!" << std::endl;

    while ((end==false))
    {
        //Do some processing

        std::cout << "------------------------------------------------" << std::endl;
        std::cout << "What operation  do you need help with ? " << std::endl;
        std::cout << "Addition, Subtraction, Multiplication & Division - is supported... " << std::endl;
        std::cout << "Your operation? ";
        std::cin >> operation;

        if ((operation != '+') &&
            (operation != '-') &&
            (operation != '/') &&
            (operation != '*') )
        {
            std::cout << "operation " << operation << "NOT SUPPORTED!" << std::endl;
            continue;
        }

        std::cout << std::endl;
        std::cout << "Please type in your two operands separated by space & hit enter : " << std::endl;
        std::cin >> operand1 >> operand2;
        std::cout << std::endl;

        switch (operation)
        {
        case  '+':
            std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
            break;
        case  '-':
            std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
            break;
        case  '/':
            std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
            break;
        case  '*':
            std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
            break;
        default:
            std::cout << "Operation not supported..Argh!" << std::endl;
            break;
        }

        std::cout << "Continue? (Y | N) : ";
        char go_on;
        std::cin >> go_on;

        //end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

        //Or using if else statement
        if ((go_on == 'Y') || (go_on == 'y')) {
            end = false;
        }else {
            end = true;
        }
        
    }
    
    std::cout << "Thanks for your patronage!" << std::endl;


   return 0;
}