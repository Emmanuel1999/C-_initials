#include <iostream>

int main(){
    
    int scores [10] {21,22,23,24,25,26,27,28,29,30};

    //Array index notation
    //int * pointer1 {&scores[0]};
    //int * pointer2 {&scores[8]};

    //Pointer arithmetic notation
    int * pointer1 {scores + 0};
    int * pointer2 {scores + 8};

    std::cout << "pointer2 - pointer1 : " << pointer2 - pointer1 << std::endl; //8
    std::cout << "pointer1 - pointer2 : " << pointer1 - pointer2 << std::endl; //-8

    std::ptrdiff_t pos_diff = pointer2 - pointer1;
    std::ptrdiff_t neg_diff = pointer1 - pointer2;
    std::cout << "pointer2 - pointer1 : " << pos_diff << std::endl; //8
    std::cout << "pointer1 - pointer2 : " << neg_diff << std::endl; //-8
    std::cout << "sizeof(std::ptrdiff_t) : " << sizeof(std::ptrdiff_t) << std::endl;//8
    
    
    return 0;
}