#include <iostream>

int main(){
    
    //print I love C++ 10 times 
    // The bad way
    /*
    std::cout << "I love C++ " << std::endl;
    std::cout << "I love C++ " << std::endl;
    std::cout << "I love C++ " << std::endl;
    std::cout << "I love C++ " << std::endl;
    std::cout << "I love C++ " << std::endl;
    std::cout << "I love C++ " << std::endl;
    std::cout << "I love C++ " << std::endl;
    std::cout << "I love C++ " << std::endl;
    std::cout << "I love C++ " << std::endl;
    std::cout << "I love C++ " << std::endl;
    */

    //The good way
    /*
    for (unsigned int i{0}; i < 10; i++)
    {
        //Whatever the loop should say
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done here!" << std::endl;

    */
   //Use size_t : a representation of some unsigned int for positive numbers [sizes]
   
   /*
   for (size_t i{0}; i < 10; i++)
   {
        std::cout << i << " : I love C++" << std::endl;
   }
    std::cout << "Loop done here!" << std::endl;
    std::cout << std::endl;
    */
   /*
    //sizeof(size_t)
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    */
   /*
    //Scope of the iterator
    std::cout << std::endl;

    for (size_t i {0}; i < 10; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done here!" << std::endl;
    //std::cout << i << " : I love C++" << std::endl; Compiler error : it's not in scope!
    std::cout << std::endl;
    */

   //Iterator declared outside the loop
   /*
   size_t i {0}; //iterator declared outside

   for (i; i < 10; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done here!" << std::endl;
    std::cout << i << " : I love C++" << std::endl;
    */

   //Leave out the declaration part completely
   /*
   size_t i {0}; //iterator declared outside

   for ( ; i < 10; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done here!" << std::endl;
    std::cout << i << " : I love C++" << std::endl;
    */

   //Don't Hard code values : BAD BAD Method!

    const size_t COUNT {10};

    for (size_t i = 0; i < COUNT; i++)
    {
       std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done here!" << std::endl;


    return 0;
}