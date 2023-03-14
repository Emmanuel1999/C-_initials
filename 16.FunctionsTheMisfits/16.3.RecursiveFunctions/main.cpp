#include <iostream>

size_t sum_upto_zero (size_t value) {
    if (value != 0)
    {
        return value + sum_upto_zero(value-1);
    }
    
    return 0;
}

int main(){
    
    std::cout << "result : " << sum_upto_zero(5) << std::endl;

    return 0;
}