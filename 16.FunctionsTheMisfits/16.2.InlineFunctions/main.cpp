#include <iostream>

inline int max(int a, int b){
    if(a> b){
        return a;
    }else{
        return b;
    }
}


int main(){
    
    int a{43};
    int b{8};

    //std::cout << "max : " << max(a,b) << std::endl;  //43

    //What the compiler might do to your inline function

    std::cout << "Max : " ;
    if(a> b){
        std::cout << "a : " << a << std::endl;
    }else{
        std::cout << "b : " << b << std::endl;
    }

    return 0;
}