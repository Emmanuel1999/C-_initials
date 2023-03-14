#include <iostream>

int main(){
    
     for (size_t i{0} , x {5}, y{22}, z{19} ; z < 315 ; ++i , x+=5 , y-=1, z+=x+y){
        std::cout << "i: " << i << ", x : " << x << ", y : " << y  << ", z : " << z << std::endl;

    }
   

    return 0;
}