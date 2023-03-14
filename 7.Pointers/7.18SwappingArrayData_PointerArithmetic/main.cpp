#include <iostream>

int main(){
    
    int arr0 [5] {1,2,3,4,5};
    int arr1 [5] {6,7,8,9,10};

    int * p_arr0 {arr0};
    int * p_arr1 {arr1};

    //Printing arr0
    std::cout << "arr0 : ";
    for (size_t i = 0; i < std::size(arr0); ++i)
    {
        std::cout << *(p_arr0 + i) << "  ";
    }
    std::cout << std::endl;
    
    //Printing arr1
    std::cout << "arr1 : ";
    for (size_t i = 0; i < std::size(arr1); ++i)
    {
        std::cout << *(p_arr1 + i) << "  ";
    }
    std::cout << std::endl;

    //Swapping data the hard way
    /*
    int temp [5];

    //Move data from arr1 to temp
    std::cout << std::endl;
    for (size_t i = 0; i < std::size(arr1); ++i)
    {
        temp[i] = arr1[i];
        std::cout << "temp : " << temp[i] << "  ";
    }
    std::cout << std::endl;

    //Move data from arr0 to arr1
    for (size_t i = 0; i < std::size(arr0); ++i)
    {
        arr1 [i] = arr0 [i];
        std::cout << "arr1 : " << arr1[i] << "  ";
    }
    std::cout << std::endl;
    */

    /*
    int * temp {nullptr};

    temp = arr1;
    arr1 = arr0;
    */

    int* temp{nullptr};
    
    temp = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = temp;

    //Print arr0
    std::cout << "arr0 : ";
    for (size_t i = 0; i < std::size(arr0); ++i)
    {
        std::cout << *(p_arr0 + i) << "  ";
    }
    std::cout << std::endl;

    //print arr1
    std::cout << "arr1 : ";
    for (size_t i = 0; i < std::size(arr1); ++i)
    {
        std::cout << *(p_arr1 + i) << "  ";
    }
    std::cout << std::endl;

    return 0;
}