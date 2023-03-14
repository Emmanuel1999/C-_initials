#include <iostream>

int main(){
    
    const size_t COUNT {10};

    //For loops

    /*
    std::cout << "Incrementing for Loops!" << std::endl;
    for (size_t i {}; i < COUNT; ++i) {
        std::cout << "i : " << i << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Decrementing for Loops!" << std::endl;
    for (size_t i {COUNT}; i > 0; --i) {
        std::cout << "i : " << i << std::endl;
        std::cout << std::endl;
    }
    */

    //Range based for loops can't be made to run in reverse order

    //While Loop
    /*
    std::cout << "Incrementing with while Loop!" << std::endl;
    size_t i {0};
    while (i <= COUNT)
    {
        std::cout << "i : " << i << std::endl;
        ++i;
        std::cout << std::endl;
    }
    
    std::cout << "Decrementing with While Loop!" << std::endl;
    i = COUNT;
    while (i > 0)
    {
        std::cout << "i : " << i << std::endl;
        --i;
        std::cout << std::endl;
    }
    */

    //Do while loop
    /*
	//Incrementing do while
    std::cout << std::endl;
	std::cout << "Incrementing do while" << std::endl;
    size_t i = 0;
    
    do {
        std::cout << "i : " << i << std::endl;
        ++i;
        
    }while ( i < COUNT);
    
    
    //Decrementing do while
	std::cout << std::endl;
	std::cout << "Decrementing do while" << std::endl;
    i = COUNT;
    
    do {
        std::cout << "i : " << i << std::endl;
        --i;
    }while ( i > 0);
    */


   //Infinite loop
    //Decrementing do while
	std::cout << std::endl;
	std::cout << "Decrementing do while" << std::endl;
    unsigned int i = COUNT;
    
    do {
        std::cout << "i : " << i << std::endl;
        --i;
    }while ( i >= 0);


    return 0;
}