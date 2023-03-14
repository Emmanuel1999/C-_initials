#include <iostream>
#include "compare.h" // Preprocessor
#include "operations.h"


int main(){
    
    int maximum = max (34,60);
    std::cout << "maximum : " << maximum << std::endl;

    int minimum = min (34,54);
    std::cout << "minimum : " << minimum << std::endl;

    std::cout << std::endl;
    int x {4};
    int y {9};
    int result = incr_mult (x,y);
    std::cout << "result : " << result << std::endl;

    return 0;
}

