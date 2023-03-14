#include <iostream>

int main(){
    
    for (double multi{4}; auto i :{1,2,3,4,5,6,7,8,9,10})
    {
        std::cout << "result : " << (i * multi) << std::endl;
    }


    return 0;
}