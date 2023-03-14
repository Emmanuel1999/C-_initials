#include <iostream>

//No linkage
void some_func(){
    int age{43}; //No linkage
    std::cout << "age: " << age << " &age: " << &age << std::endl;
}

const double distance{435.2}; //Internal linkage
int item_count{6}; //External linkage

extern void print_distance();
extern void print_item_count();

int main(){
    
    std::cout << "distance(main) : " << distance << "  &distance : " << &distance <<std::endl;
    std::cout << "-----" << std::endl;

    print_distance();

    std::cout << std::endl;
    std::cout << "*******************" << std::endl;
    std::cout << std::endl;

    std::cout << "item_count(main) : " << item_count << " &item_count : "
        << &item_count << std::endl;

    std::cout << "-----" << std::endl;
    print_item_count();

    some_func();
    
    return 0;
}