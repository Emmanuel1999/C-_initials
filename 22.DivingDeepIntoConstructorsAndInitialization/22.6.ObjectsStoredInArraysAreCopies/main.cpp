#include <iostream>
#include "person.h"

int main(){
    
    Person Per1 {"Jon","Snow", 45};
    Person Per2 {"Gunt", "Athlar", 50};
    Person Per3 {"Jimka", "Grow", 34};
    Per1.print_info();
    Per2.print_info();
    Per3.print_info();

    std::cout << "=======================" << std::endl;
    std::cout << std::endl;

    Person students [] {Per1,Per2,Per3};
    for (size_t i = 0; i < std::size(students); ++i)
    {
        students[i].print_info();
    }

    std::cout << std::endl;
    for(Person& p: students){
        p.print_info();
    }

    return 0;
}