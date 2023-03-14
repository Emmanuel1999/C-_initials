#include <iostream>

int main(){
    
    int arr0 [5] {11,22,33,44,55};
    int arr1 [5] {12,22,32,42,52};
    int * p_arr0 {arr0};
    int * p_arr1 {arr1};

    //Print arr0
    std::cout << "arr0 : ";
    for (size_t i = 0; i < std::size(arr0); ++i) //advisable for showing arrays with space
    {
        std::cout << p_arr0[i] << "    ";
    }
    std::cout << std::endl;


    //Print arr1
    std::cout << "arr1 : ";
    for (size_t i = 0; i < std::size(arr1); ++i) //advisable for showing arrays with space
    {
        std::cout << p_arr1[i] << "    ";
    }
    std::cout << std::endl;

    //Swapping data the hard way
    /*
    int temp[5];

    //move data from arr1 into temp
    for (size_t i = 0; i < std::size(arr1); ++i) 
    {
        temp[i] = arr1[i];
        std::cout << "temp: " << temp[i] << std::endl;
    }
    std::cout << std::endl;

    //move data from arr0 to arr1
    for (size_t i = 0; i < std::size(arr0); ++i) 
    {
        arr1[i] = arr0[i];
        std::cout << "arr1: " << arr1[i] << std::endl;
    }
    
    //move data from temp to arr0
    std::cout << std::endl;
    for (size_t i = 0; i < std::size(temp); ++i) 
    {
        arr0[i] = temp[i];
        std::cout << "arr0: " << arr0[i] << std::endl;
    }
    */

    /* 
    int * temp {nullptr};

    temp = arr1;
    arr1 = arr0;
    */

    int * temp {nullptr};

    temp = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = temp;

    //print arr0 
    std::cout << "arr0 : " ;
    for (size_t i = 0; i < std::size(arr0); ++i)
    {
        std::cout << p_arr0 [i] << "   ";
    }
    std::cout << std::endl;
    
    //print arr1
    std::cout << "arr1 : " ;
    for (size_t i = 0; i < std::size(arr1); ++i)
    {
        std::cout << p_arr1 [i] << "   ";
    }
    std::cout << std::endl;

    return 0;
}