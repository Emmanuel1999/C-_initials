#include <iostream>
#include<string_view>


class Dog 
{
    public: 
        Dog() = default;
        Dog (std::string_view name_param, std::string_view breed_param, int age_param);
        ~Dog();


    private:
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};


Dog::Dog (std::string_view name_param, std::string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog destructor called for : " << name << std::endl;
    /*
    std::cout << breed << std::endl;
    std::cout << p_age << "         " << *p_age << std::endl;
    */

};

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for : " << name << std::endl;
}

void some_func() {
    Dog * p_dog = new Dog ("Fluffy", "German Sherpherd", 2);
    delete p_dog;
}

int main(){

    some_func();

    std::cout << "Done!" << std::endl;

    return 0;
}