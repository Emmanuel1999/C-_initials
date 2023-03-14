#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){

    /*
    Person person1("John Cashinow", 45, "Winterfell Model, aspergilus modurandi");
    std::cout << "person1: " << person1 << std::endl;

    std::cout << "************************************" << std::endl;
    Engineer engineer1("Jerome Banks", 53, "Jimono suke sagaanath", 42);
    std::cout << "engineer1: " << engineer1 << std::endl;
    std::cout << std::endl;
    */

    std::cout << "---------------------" << std::endl;
    CivilEngineer civileng1("Jannace Jimbau", 23, "13dmsafoe str alajakule", 31, "Road strength");
    std::cout << "civileng1: " << civileng1 << std::endl;
     
    return 0;
}