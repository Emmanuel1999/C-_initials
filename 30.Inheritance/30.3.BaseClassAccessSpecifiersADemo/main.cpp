#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main(){
    
    Person person1("Dolido Ganaya", 23, "344, Akanogo Str, Ijoko rd, Akure, Ondo state");   
    std::cout << "Person1: " << person1 << std::endl;

    std::cout << "****************************************" << std::endl;
    
    Player player;
    player.m_full_name = "Emmy Don"; //Public Inheritance
    //player.m_age = 55; Compiler error -- attempting to access a protected class from the outside
    //player.m_address = "Dimmy str, dopemu B/Stop Woli" Compiler error -- attempting to access private member from the outside / anywhere
    std::cout << player << std::endl;

    std::cout << "********************" << std::endl;
    Nurse nurse1;
    //nurse1.m_full_name = "Problemo Scoto";//Compiler error--- Protected inheritance
    //nurse1.m_age = 24; //Compiler error
    std::cout << nurse1 << std::endl;

    std::cout << std::endl;
    std::cout << "******************************" << std::endl;
    Engineer engineer;
    //engineer.m_full_name = "Educated guess"; //Compiler error
    //engineer.m_age = 55; //Compiler error
    //engineer.m_address = "3524 234 4234"; //Compiler error

    return 0;
}