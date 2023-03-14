#include <iostream>

int main(){
    
    //Verbose nullptr check
    std::cout << std::endl;
    std::cout << "Verbose nullptr check : " << std::endl;

    int *p_number {};//initialized to nullptr
    //p_number = new int (400);

    /*
    if(!(p_number == nullptr)) {
        std::cout << "p_number points to a valid address!" << p_number << std::endl;
        std::cout << "*p_number - " << *p_number << std::endl;
    }else {
        std::cout << "p_number points to an Invalid address!" << std::endl;
    }
    */

    if(p_number) {
        std::cout << "p_number points to a valid address : " << p_number << std::endl;
        std::cout << "*p_number - " << *p_number << std::endl;
    }else {
        std::cout << "p_number points to an Invalid address!" << std::endl;
    }

    delete p_number;
    p_number = nullptr;

    //It is OKAY to call delete on a nullptr
    int *p_number1 {}; //nullptr

    delete p_number1; //This won't cause any problems if p_number1 is nullptr


    

    return 0;
}