#include <iostream>

int main(){
    
    //How we've used pointers so far
    /*
    int number {22}; //Stack memory

    int *p_number = &number;
    
    std::cout << std::endl;
    std::cout << "Declaring pointer and assigning address : " << std::endl;
    std::cout << "number : " << number << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;

    int* p_number1; //Uninitialized pointer, contains junk address. DANGER!
    int number1 {13};
    p_number1 = &number1; //Make it point to a valid address
    
    std::cout << std::endl;
    std::cout << "Uninitialized pointer : " << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    */

    //BAD Method Aargh!
    /*
    //Writing into uninitialized pointer through deference 
    int *p_number2; //contains junk address, could be anything
    std::cout << "Tryin to print 55! " << std::endl;
    *p_number2 = 55; //Writing into junk address is very bad.
    std::cout << std::endl;
    std::cout << "Writing into uninitialized pointer through deference : " << std::endl;
    std::cout << "p_number2 : " << p_number2 << std::endl;
    std::cout << "*p_number2 : " << *p_number2 << std::endl;
    */
    
    //Initializing pointer to null
    /*
    //int *p_number3 {nullptr}; //Also works
    int *p_number3 {}; // initializing pointer with equilvalent of 0 : nullptr
                       // A pointer pointing nowhere
    std::cout << "Writing into nullptr memory which is BAD! " << std::endl;
    //*p_number3 = 33; //Writing into a pointer that's pointing nowhere : BAD, CRASH!
    std::cout << "So done being crashed!" << std::endl;

    std::cout << std::endl;
    std::cout << "Reading and writing through nullptr : " << std::endl;
    //std::cout << "p_number3 : " << p_number3 << std::endl;
    //std::cout << "*p_number3 : " << *p_number3 << std::endl; //Reading for nullptr : BAD, CRASH!
    */

    //Dynamic Heap memory
    /*
    int *p_number4 {nullptr};
    p_number4 = new int;    //Dynamically allocate space for a single int on the heap
                            //This memory belongs to our program from now on. The system 
                            //can't use it for anything else until we return it. 
                            //After this line executes, we'll have a valid memory location
                            //allocated. The size of the allocated memory would be such
                            //that it can store the type pointed to by the pointer

    *p_number4 = 77; //Writing into dynamically allocated memory
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory : " << std::endl;
    std::cout << "*p_number4 : " << *p_number4 << std::endl;

    //Return memory to OS
    delete p_number4;
    p_number4 = nullptr;
    */

    //It is also possible to initialize the pointer with a valid 
    //address upon declaration.
    int *p_number5 {new int}; //Memory location contains junk value
    int *p_number6 { new int (22)}; //use direct initialization
    int *p_number7 { new int {23}}; //use uniform initialization

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration : " << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl; //Junk value

    std::cout << std::endl;
    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl;

    std::cout << std::endl;
    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl;

    //Remembering to release the memory
    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    //Can reuse pointers
    p_number5 = new int(120);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;

    delete p_number5;
    p_number5 = nullptr;
    std::cout << std::endl;

    //Calling delete twice is BAD!
    p_number5 = new int(404);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;

    delete p_number5;
    //delete p_number5;//Compiler error... CRASHED program!

    std::cout << "Program is ending well!" << std::endl;
    
    return 0;
}