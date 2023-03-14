#include <iostream>
#include "parent.h"
#include "child.h"

int main(){

    Child child(13);
    child.print_var(); //Calls the method in Child
    child.Parent::print_var(); //Calls the Parent, value in Parent
                //contains junk or whatever in class initialization we did.

    std::cout << "------------------------------" << std::endl;
    child.show_values(); 

    return 0;
}