#include <iostream>


void print_age_1();
void print_age_2();

void print_distance_1();
void print_distance_2();



int main(){

    print_age_1();
    print_age_2(); //Same address 

    std::cout << " ******************" << std::endl;

    print_distance_1();
    print_distance_2(); //Different address
   
    return 0;
}