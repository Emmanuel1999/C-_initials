#include <iostream>

int main(){
    
    int condition {0};

    int my_var {10};

    switch (int data{7}; condition) {
        //int x {9}; //Ain't gonna run
        int x;
    case 0:

        //int y {5};
        int y;
        x = 6;
        x++;
        //z = 6; //not initialized 
        std::cout << "x : " << x << std::endl;
        std::cout << "Statement1 : " << std::endl;
        std::cout << "Statement2 : " << std::endl;

        break;

    case 1 : 
        int z;
        my_var++;
        y = 5;
        std::cout << "y : " << y << std::endl;
        std::cout << "Statement3" << std::endl;
        std::cout << "Statement4" << std::endl;
        break;
    
    default:
        int u;
        z = 10;
        std::cout << "Statement5" << std::endl;
        std::cout << "Statement6" << std::endl;
        break;

    }

    std::cout << "Moving on..." << std::endl;

    return 0;
}