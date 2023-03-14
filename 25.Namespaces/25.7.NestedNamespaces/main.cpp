#include <iostream>

namespace Hello{
    unsigned int age{23};

    namespace World
    {
        int local_var{44};

        void say_sth() {
            std::cout << "Hello there! " << std::endl;
            std::cout << "The age is: " << age << std::endl; 
        }
    } // namespace World

    void do_sth(){
        //Here we don't have direct access to local_var, we have to
        //go through the namespace
        std::cout << "Using local_var: " << World::local_var << std::endl;

    }
    
}

int main(){

    //Hello::World::say_sth(); //23
    Hello::do_sth();//44

    return 0;

}