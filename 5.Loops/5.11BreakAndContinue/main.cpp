#include <iostream>

int main(){
    
    //Break and continue : for loop
    
    size_t count {20};
    /*
    for (size_t i = 0; i < count; i++)
    {
        if (i == 5)
        
            continue;
        

        if (i == 10)
        
            break;
            std::cout << "i : " << i << " is I presently...Argh!" << std::endl;
        
        
        std::cout << "Loop done & out!" << std::endl;
    }
    */

    //break & continue : While loop

    /*
    size_t i {};

    while (i < count)
    {
        if(i==5){
            ++i;
            continue;
       }

        if(i==11)
            break;

        std::cout << "i : " << i << std::endl;
        ++i;
    }

    std::cout << "Loop is kinda done! Yeah" << std::endl;
    */
    
    //break & continue : do while loop
    size_t i {};

    do
    {
        if(i==5){
            ++i;
            continue;
       }

        if(i==11)
            break;

        std::cout << "i : " << i << std::endl;
        ++i;
        
    } while (i < count);
    

    return 0;
}