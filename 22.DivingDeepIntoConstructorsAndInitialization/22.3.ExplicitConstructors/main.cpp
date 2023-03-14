#include <iostream>
#include "square.h"

//Is square1 > to square2 ? true/false
bool compare (const Square& square1, const Square& square2){
    return (square1.surface() > square2.surface()) ? true : false;
}

int main(){
    
    Square sq1 (100.0);
    Square sq2 (50.0);

    std::cout << std::boolalpha;
    std::cout << "sq1 > sq2 : " << compare(sq1,sq2) << std::endl; //true

    //Implicit conversions
    //std::cout << "sq1 > 43.2 : " << compare(sq1.43.2) << std::endl;
    
    return 0;
}