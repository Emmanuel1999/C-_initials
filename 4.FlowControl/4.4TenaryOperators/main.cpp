#include <iostream>

int main(){
    
    int max {};
    int a {35};
    int b {20};

    std::cout << std::endl;
    std::cout << "Using regular if" << std::endl;

    /*
    if (a > b) {
        max = a;
    }else{
        max = b;
    }
    */

    max = (a > b)? a : b; //Tenary operator
   
    std::cout << "Max : " << max << std::endl;

    return 0;
}