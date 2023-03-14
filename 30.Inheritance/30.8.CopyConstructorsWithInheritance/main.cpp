#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){


    /*
    Engineer engineer1("Jerome Banks", 53, "Jimono suke sagaanath", 42);

    std::cout << "--------------------------------------" << std::endl;

    Engineer engineer2(engineer1);
    std::cout << "engineer2: " << engineer2 << std::endl;
    */

    CivilEngineer civeng1("Jerome Banks", 53, "Jimono suke sagaanath", 42, "Road Strength");

    std::cout << "--------------------------------------" << std::endl;

    CivilEngineer civeng2(civeng1);
    std::cout << "Civeng2: " << civeng2 << std::endl;
    


    return 0;
}