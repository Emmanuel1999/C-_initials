#include <iostream>

int global_highway {32};

int main(){
    
    bool green {true};    

    global_highway++;//33

    if(green) {
        global_highway++;//34
        int if_scope{99};
        std::cout << "Light is green " << if_scope <<  " on the move by global highway " 
        << global_highway << "." << std::endl; 
    }else{
        //if_scope++; //Compiler error
        global_highway++; //34
        std::cout << "Light ain't green yo, you better STOP! check the global highway " 
        << global_highway << "." << std::endl; 
    }

    //if_scope++;//Compiler error
    std::cout << "Global Highway : " << global_highway << std::endl;

    return 0;
}