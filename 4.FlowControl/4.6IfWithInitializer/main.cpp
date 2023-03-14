#include <iostream>

int main(){
   
    bool come {true};

    if (int speed {10}; come) {
        std::cout << "Speed : " << speed << std::endl;

        if(speed < 50) {
            std::cout << "Hey, alaye hurry up!"  << std::endl;
        }else {
            std::cout << "Dude slow down, don't die yet" << std::endl;
        }
    }else{
        std::cout << "Speeding?" << std::endl;
        std::cout << "Stop!" << std::endl;
    }
    std::cout << "Out of the block! still speeding I see...Argh!" << std::endl;

    return 0;
}