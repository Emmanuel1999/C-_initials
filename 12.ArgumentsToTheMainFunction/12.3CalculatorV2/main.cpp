#include <iostream>
#include <cstdlib>
#include <cstring>



int main(int argc, char ** argv){
    
    //Check the number of parameters

    if (argc != 4)
    {
        std::cerr << "Program can only be called with 3 arguments like : " << std::endl;
        std::cerr << "rooster a + b" << std::endl;
        std::cerr << "You called with : ";

        for (int i {0}; i < argc; ++i) 
        {
            std::cout << "  " << argv[i] ;
        }
        std::cout << std::endl;
        
    return 0;
    }

    //Grab the operands
    double first_num {atof(argv[1])};
    double sec_num {atof(argv[3])};

    if((first_num == 0.0) || (sec_num == 0.0))
    {
        std::cout << "Please use valid numbers (different from 0's for first & second number : " << std::endl;
        return 0;
    }


    //Grab the operation
    const char * operation {argv[2]};
    char c;

    if( (std::strlen(operation) == 1) &&
            ((operation[0] == '+') ||
            (operation[0] == '-') ||
            (operation[0] == 'x') || // x is for multiplication. * is interpreted
									 // by the shell and disturbing things.
            (operation[0] == '/'))) {
                
                c = operation[0];
            }else{
                
                std::cerr << operation << " is not a valid operation." << std::endl;


                return 0;
    }
    std::cout << std::endl;


    //Do the operation
    switch(c){
        case '+':
        std::cout << first_num << "+" << sec_num << "=" 
                << first_num + sec_num<< std::endl;
        break;
        
        case '-':
        std::cout << first_num << "-" << sec_num << "=" 
                << first_num - sec_num << std::endl;
        break;
        
        case 'x':
        std::cout << first_num << "*" << sec_num << "=" 
                << first_num * sec_num << std::endl;
        break;
        
        case '/':
        std::cout << first_num << "/" << sec_num << "=" 
                << first_num / sec_num << std::endl;
        break;
    }
 

    return 0;
}