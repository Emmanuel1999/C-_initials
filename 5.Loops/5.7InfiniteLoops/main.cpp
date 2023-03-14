#include <iostream>

int main(){
    
    //Infinite Loop: for loop
    /*
    for (size_t i {}; true; ++i) {
        std::cout << " I love my life! " << i << std::endl;
    }
    */
   
    //Infinite loop : while loop
    /*
    size_t i{0};
    while(true){
        std::cout << i  << " : I love C++" << std::endl;
        ++i;
    }
    */

    //Infinite loop : do while loop

    size_t i{0};

    do{
        std::cout << i  << " : I love C++ & money!" << std::endl;
        ++i;
    }while(true);
    
    return 0;
}