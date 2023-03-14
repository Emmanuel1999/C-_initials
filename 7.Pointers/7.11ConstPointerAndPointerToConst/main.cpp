#include <iostream>

int main(){
    
    /*
    //A raw variable that can be modified
    std::cout << std::endl;
    std::cout << "Raw variable that can be modified : " << std::endl;

    int number {5}; //Not constant can be changed any how we want
    std::cout << "number : " << number << std::endl;
    std::cout << "&number : " << &number << std::endl;

    //Modify
    number = 12;
    number += 7;

    //Access print out 
    std::cout << "number (after modification): " << number << std::endl;
    std::cout << "&number (after attempt at modification): " << &number << std::endl;//modification 
                                                                                    //doesn't affect 
                                                                                    //addresses
                    
    std::cout << std::endl;
    */

    /*
    //pointer can modify the data and the pointer itself
    int *p_number1 {nullptr};
    int number1 {32};

    p_number1 = &number1;
    std::cout << "Pointer and value pointed to can both be modifiable : " << std::endl;
    std::cout << "p_number1 : " << p_number1 << std::endl; //Address
    std::cout << "*p_number1 : " << *p_number1 << std::endl; //32
    std::cout << "number1 : " << number1 << std::endl; //32

    //Change the value pointed to through the pointer 
    std::cout << std::endl;
    std::cout << "Modifying the value printed to p_number1 through the pointer : " << std::endl;
    *p_number1 = 432;
    std::cout << "p_number1 : " << p_number1 << std::endl; //Address remains the same
    std::cout << "*p_number1 : " << *p_number1 << std::endl; //432
    std::cout << "number1 : " << number1 << std::endl; //432
    
    //Change the pointer itself to point elsewhere
    std::cout << std::endl;
    std::cout << "Changing the pointer to point elsewhere : " << std::endl;
    int number2 {56};
    p_number1 = &number2;
    std::cout << "p_number1 : " << p_number1 << std::endl; //Address
    std::cout << "*p_number1 : " << *p_number1 << std::endl; //56
    std::cout << "number1 : " << number1 << std::endl; //432
    std::cout << "number2 : " << number2 << std::endl; //56
    std::cout << std::endl;
    */

    /*
    //Pointer to const
    //pointer pointing to constant data : you can't modify the data through pointer
    std::cout << "Pointer is modifiable, value pointed to is constant : " << std::endl;
    int number3 {654}; // Although you can omit the const on number3 here and it is still 
                             // going to compile, it is advised to be as explicit as possible in
                             // your code and put the const in front. Make your intents CLEAR.
    const int * p_number3 {&number3}; //Can't modify number3 through p_number3

    std::cout << "p_number3 : " << p_number3 << std::endl;//address
    std::cout << "*p_number3 : " << *p_number3 << std::endl; //654

    std::cout << std::endl;
    std::cout << "Modifying the value pointed to by p_number3 through the pointer (Compiler error) : " << std::endl;
    //*p_number3 = 444;//Compiler error

    //Although we can't change what's pointed to by p_number3
    //we can still change where its pointing

    int number4 {419};
    p_number3 = &number4;

    std::cout << "p_number3 : " << p_number3 << std::endl;//new address
    std::cout << "*p_number3 : " << *p_number3 << std::endl;//419
    std::cout << std::endl;
    */

    //Const keyword applies to the variable name 
    /*
    std::cout << "Const keyword applies to a variable name : " << std::endl;

    int protected_var {666}; //Can make it const to protect it if needed. show this

    //p_protected_var is a pointer to const data, we can't 
    //modify the data through this pointer; regardless of whether
    //the data itself is declared const or not.

    const int * p_protected_var {&protected_var};

    //*p_protected_var = 55; //compiler error
    protected_var = 419;

    std::cout << "protected_var : " << protected_var << std::endl; //419
    std::cout << "p_protected_var : " << p_protected_var << std::endl; //address
    std::cout << "*p_protected_var : " << *p_protected_var << std::endl; //419
    std::cout << std::endl;
    */

    //Both pointer and pointed to value are constant
    /*
    const int number5 {919};
    const int * p_number5 {&number5};
    std::cout << "Pointer is constant, value pointed to is constant : " << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl; //address
    std::cout << "*p_number5 : " << *p_number5 << std::endl; //919

    //Can't modify the pointed value through the pointer
    std::cout << "Changing value pointed to by p_number5 through the pointer (Compiler error) : " << std::endl;
    std::cout << std::endl;
    //*p_number5 = 123; //Error : Trying to assign to read only location

    //Can't change where the pointer is pointing to, the pointer itself becomes constant
    std::cout << "Changing the pointer p_number5 address itself (Compile error) : " << std::endl;
    int number6 {808}; 
    //p_number5 = number6;    //Error : Trying to assign to read only location

    std::cout << std::endl;
    */

    //Pointer is constant (Can't make it point elsewhere)
    //except the pointed value can change

    std::cout << "Pointer is constant, pointed value is variable : " << std::endl;
    int number7 {101};

    int * const p_number7 {&number7};

    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl;

    std::cout << "Changing value pointed to through p_number7 pointer : " << std::endl;
    
    *p_number7 = 456;
    std::cout << "The value pointed to by p_number7 now is : " << *p_number7 << std::endl;
    
    int number8 {2928};
    std::cout << "Changing the address where p_number7 is pointing (Compile Error)." << std::endl;
    //p_number7 = &number8;

    return 0;
}