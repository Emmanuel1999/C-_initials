#include <iostream>

int main(){
    
    //Declare an array
    char message [5] {'H','e','l','l','o',};

    /*
    //print out the array through looping
    std::cout << "Message : " ;
    for (auto c : message) {
        std::cout << c ;
    }
    std::cout << std::endl;

    //change characters in an array
    message[1] = 'a';
    //print out the array through looping
    std::cout << "Message : " ;
    for (auto c : message) {
        std::cout << c ;
    }
    std::cout << std::endl;
    */

    //Will probably print garbage after array
    //std::cout << "message : " << message << std::endl;

    //If a char array is null terminated. Its a called C-string
    char message1 [] {'H','e','l','l','o','\0'};// The null terminator here informs the compiler when to terminate.
    std::cout << "Message1 : " << message1 << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;
    std::cout << std::endl;

    char message2 [6] {'H','e','l','l','o'};// the 6 declared informs the comiler when to termminate also.
    std::cout << "Message2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;
    std::cout << std::endl;

    char message3 [] {'H','e','l','l','o'}; //Bad method! Not a C-string, no null character.
    std::cout << "Message3 (Bad method, Argh!): " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;
    std::cout << std::endl;


    //string literal

    char message4 [] {"Hello World, more civilized method of storing string."};
    std::cout << "Message4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;
    std::cout << std::endl;

    //Can't safely print out arrays other than those of characters
    int numbers [] {1,2,3,4,5};
    std::cout << "numbers : " << numbers << std::endl;

    return 0;
}