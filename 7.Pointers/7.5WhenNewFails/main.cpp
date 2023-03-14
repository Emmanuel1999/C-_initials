#include <iostream>

int main(){
    
    /*
    int * data {new int [100000000]};

    for (size_t i = 0; i < 10000000; i++)
    {
        int * data = new int[10000000];
    }
    */

    //exception
    /*
    for (size_t i = 0; i < 100; i++)
    {
        try
        {
            int * data = new int[10000000];
        }
        catch(const std::exception& ex)
        {
            std::cerr <<"Something definitely went wrong, Afi don't ever try this at home oh!" << ex.what() << std::endl;
        }    
    }
    */
    
    //std::nothrow setting
    for (size_t i = 0; i < 100; i++)
    {
        int * data = new(std::nothrow) int[1000000000000];

        if (data != nullptr)
        {
            std::cout << "Data allocated" << std::endl;
        }else
        {
            std::cout << "Data allocation failed" << std::endl;
        }
        
        
    }



    std::cout << std::endl;
    std::cout << "Program is ending well...Argh!" << std::endl;

    return 0;
}