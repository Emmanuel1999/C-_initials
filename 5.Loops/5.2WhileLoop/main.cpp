#include <iostream>

int main(){
    
    //Print I love C++ 10 times - the bad way
    /*
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    
    */

   const size_t COUNT {10}; // Control
   size_t i {0}; // Iterator declared
   while (i < COUNT)
   { //Test
        std::cout << i << " : I love C++" << std::endl;
        ++i; // Incrementation
   }
   std::cout << "Loop done!" << std::endl;

   
   

    return 0;
}