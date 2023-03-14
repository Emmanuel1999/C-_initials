#include <iostream>

int main(){
    
    
    int  count {100000};

    size_t i {}; //Iterator
    /*
    for ( i ; i < count; ++i) {
        std::cout << "i : " << i << std::endl;
    } 

    std::cout << "So done... Aargh!" << std::endl;
    */

    while(i < count){
        std::cout << "i : " << i << std::endl; 
        ++i;     
   }
   std::cout << "Done!" << std::endl;

    return 0;
}