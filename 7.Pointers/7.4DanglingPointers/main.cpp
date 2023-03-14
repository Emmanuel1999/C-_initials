#include <iostream>

int main(){

    //Case 1 : Uninitialized pointer
    /*
    int * p_number; //Dangling uninitialized pointer

    std::cout << std::endl;
    std::cout << "Case 1: Uninitialized pointer. " << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl; //CRASH; So BAD!
    */

    //Case 2 : deleted pointer
    /*
    std::cout << std::endl;
    std::cout << "Case 2 : Deleted pointer : " << std::endl;
    int *p_number1 {new int(64)}; 

    std::cout << "*p_number1 (before delete) : " << *p_number1 << std::endl;

    delete p_number1;

    std::cout << "*p_number1 (after delete) : " << *p_number1 << std::endl; //Expect garbage!
    */

    //Case 3: Multiple pointers pointing to the same address
    /*
    std::cout << std::endl;
    std::cout << "Case 3 : Multiple pointers pointing to the same address : " << std::endl;

    int *p_number3 {new int{24}};
    int *p_number4  {p_number3};

    std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

    //Deleting p_number3
    //delete p_number3;

    //p_number4 points to deleted memory. Dereferencing it will lead to
    //undefined behaviour : crash/garbage or sth like it

    std::cout << "p_number4(after deleting p_number3) - " << p_number4 << " - " << *p_number4 << std::endl;
    */

    //Solution 1 : Initialize your pointers immediately upon declaration 
    /*
    std::cout << std::endl;
    std::cout << "Solution 1 : " << std::endl;
    int *p_number5 {nullptr};
    int *p_number6 {new int{56}};

    //Check for nullptr before use
    if (p_number6 != nullptr){
        std::cout << "*p_number6 : " << *p_number6 << std::endl;
    }else{
        std::cout << "Invalid address Argh!" << std::endl;
    }
    */

    //Solution 2 : Immediately after calling delete on a pointer,
    //always remember to reset it to nullptr, to emphasize its
    //not pointing to anywhere.

    /*
    std::cout << std::endl;
    std::cout << "Solution 2 : " << std::endl;
    int *p_number7 {new int{100}};

    //Use the pointer however you want
    std::cout << "*p_number7 - " << *p_number7 << " - " << p_number7 << std::endl;  

    delete p_number7;
    p_number7 = nullptr; //Reset the pointer

    //Check for nullptr use
    if (p_number7 != nullptr){
        std::cout << "*p_number7 : " << *p_number7 << std::endl;
    }else{
        std::cout << "Invalid address Argh!" << std::endl;
    }
    */

    //Solution 3 : For multiple pointers pointing to the same address,
    //Make sure there's one clear pointer (master pointer) that owns the 
    //memory (responsible for releasing when necessary), other pointers
    // should only be able to dereference when the master pointer is 

    std::cout << std::endl;
    std::cout << "Solution 3 : " << std::endl;
    int *p_number8 {new int {500}}; //Assuming p_number8 is the master pointer
    int *p_number9 {p_number8};

    //Dereference the pointers and use them
    std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << std::endl;

    if(! (p_number8 == nullptr)) { //Only use slave pointers when master is valid
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    }

    delete p_number8; //Release the memory 
    p_number8 = nullptr;

    if(! (p_number8 == nullptr)) { //Only use slave pointers when master is valid
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    }else{
        std::cerr << "WARNING! Trying to use an invalid pointer." << std::endl;
    }


    std::cout << "Hurrah! Program ending well Argh!" << std::endl;

    return 0;
}