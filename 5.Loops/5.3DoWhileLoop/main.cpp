#include <iostream>

int main(){
    
    const int COUNT {10};
    size_t i {0}; //iterator

    do
    {
        std::cout << i << " : I love C++, but this is a drag argh!" << std::endl;
        ++i;// incrementation

    } while (i < COUNT);

    std::cout << "Loop done!" << std::endl;
    

    return 0;
}