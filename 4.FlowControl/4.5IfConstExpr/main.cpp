#include <iostream>

int main(){
    
    constexpr bool condition {true};

    if constexpr (condition) {
        std::cout << "Condition is true.... Argh!" << std::endl;
    }else {
        std::cout << "Condition is false.... Argh!" << std::endl;
    }

    return 0;
}