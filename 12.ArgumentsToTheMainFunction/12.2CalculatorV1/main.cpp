#include <iostream>

int main(){
    
    double first_num {12.34};
    double second_num {56.78};
    char c {'+'};

    switch (c)
    {
        case '+':
            std::cout << first_num << " + " << second_num << " = " << first_num + second_num << std::endl;
            break;
        
        case '-':
            std::cout << first_num << " - " << second_num << " = " << first_num - second_num << std::endl;
            break;
        
        case '/':
            std::cout << first_num << " / " << second_num << " = " << first_num / second_num << std::endl;
            break;
        
        case '*':
            std::cout << first_num << " * " << second_num << " = " << first_num * second_num << std::endl;
            break;
        

    }


    
    return 0;
}