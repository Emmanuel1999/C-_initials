#include <iostream>

int main(){

    int value {5};

    //Increment by one
    value = value + 1; //6
    std::cout << "Value is : " << value << std::endl; //6

    value = 5; // Reset value to 5

    //Decrement by one

    value = value - 1; //4

    std::cout << "Value is : " << value << std::endl; //4

    // ------------------------------------------------

    std::cout << "============= Postfix increment and decrement ====================" << std::endl;
    //Increment with postfix
    //Reset value to 5;
    value = 5;

    std::cout << "Value is (incrementing) : " << value++ << std::endl; //5
    std::cout << "Value is : " << value << std::endl;//6

    std::cout << std::endl;

    //Decrement with postfix

    value = 5; // Reset value to 5
    std::cout << "Value is (decrementing) : " << value-- << std::endl; //5
    std::cout << "Value is : " << value << std::endl;//4

    // ------------------------------------------------

    std::cout << "============= Prefix increment and decrement ====================" << std::endl;

    //Increment with Prefix
    value = 5; // Reset value to 5
    
    ++value;
    std::cout << "Value is (++prefix) : " << value << std::endl; //6

    value = 5; // Reset value to 5
    std::cout << "Value is (++prefix in place) : " << ++value << std::endl; //6
    std::cout << std::endl;

    //Decrement with prefix
    value = 5; // Reset value to 5
    
    --value;
    std::cout << "Value is (--prefix) : " << value << std::endl; //4

    value = 5; // Reset value to 5
    std::cout << "Value is (--prefix in place) : " << --value << std::endl; //4
    std::cout << std::endl;

   return 0;
}