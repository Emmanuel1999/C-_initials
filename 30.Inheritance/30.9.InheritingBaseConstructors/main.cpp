#include <iostream>
#include "person.h"
#include "engineer.h"

int main(){

    Engineer eng1("Emmanuel Opatola", 24, "64, Baale str, Ijeododo Lagos", 17);
    std::cout << "eng1: " << eng1 << std::endl;

    return 0;
}