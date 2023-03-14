#include <iostream>

int main(){
    
    /*
    int *p_number {new int {67}}; //Points to some address, lets call that address1

    //Should delete and reset here

    int number {55}; // stack variable

    p_number = &number; //p_number points to address2 but address1 is still in
                        //our program. But our program has lost access to that 
                        //address. Memory has been leaked.

    std::cout << std::endl;
    */

    //Double allocation
    /*
    int *p_number1 {new int {66}};
    //Use the pointer
    //Supposed to delete and reset here

    p_number1 = new int {44}; // Memory with 66 has been leaked.
    delete p_number1;
    p_number1 = nullptr;
    */

    //Nested scopes with dynamically allocated memory
    {
        int *p_number2 {new int {32}};

        //Use the dynamic memory
        //Supposed to delete and reset here

    }
    //Memory with int {32} has been leaked.


    std::cout << std::endl;
    std::cout << "Program reached the end at least Argh!" << std::endl;
    return 0;
}