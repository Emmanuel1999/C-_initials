#include <iostream>

int main(){
    
    int bag_of_values [] {1,2,3,4,5,6,7,8,9,10};  // This is a collection of integers
    // The variable value will be assigned a value from the values array on each iteration

    /*
    for (size_t i {}; i < 10; ++i) {
        std::cout << "Value (without range) : " << bag_of_values[i] << std::endl;
    }
    */

    /*
    for (int value : bag_of_values){ //Value contains a current copy of the entire bag
        std::cout << "Value (with range) : " << value << std::endl;
    }
    */

    //specifying the collection in place
    /*
    for (int value : {1,2,3,4,5,6,7,8,9,10,11,12}) {
        std::cout << "Value (with collection) : " << value << std::endl;
    }
    */

    //Auto range-based deduction
    for (auto value : bag_of_values) {
        std::cout << "Value (auto deduction) : " << value << std::endl;
    }

    return 0;
}