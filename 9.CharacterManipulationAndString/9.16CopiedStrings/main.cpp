#include <iostream>
#include <string>

int main(){
    
    std::string message {"Hello World!Hello World!Hello World!Hello World!Hello World!Hello World!Hello World!Hello World!Hello World!Hello World!"};
    std::string & message_copy {message};

    char * p1 = message.data();
    char * p2 = message_copy.data();

    std::cout << "&message[0] : " << (void*)p1 << std::endl;
    std::cout << "&message_copy[0] : " << (void*)p2 << std::endl;

    //NB- Personally I don't get this yet    


    return 0;
}