#include <iostream>
#include "person.h"


int main(){
    
    Person p1 ("Opatola", "Emmanuel", 23);
    p1.print_info();

    Person p2(p1);
    p2.print_info();

    std::cout << "=====================" << std::endl;

    p1.set_first_name("Oluwafemi");
    p1.print_info();
    p2.print_info();
    
    return 0;
}