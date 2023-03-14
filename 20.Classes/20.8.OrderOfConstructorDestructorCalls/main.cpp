#include <iostream>
#include <string_view>

class Dog{
    public : 
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int  age_param);
        ~Dog();

    private : 
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};
Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for : " << name << std::endl;
}

void some_func(){
    Dog* p_dog = new Dog("Fluffy","Shepherd",2);

    delete p_dog;// Causes for the destructor of Dog to be called
}



int main(){ 

    Dog dog1 ("Doggy1", "Shepherd", 2);
    Dog dog2 ("Doggy2", "Shepherd", 4);
    Dog dog3 ("Doggy3", "Shepherd", 6);
    Dog dog4 ("Doggy4", "Shepherd", 8);

    std::cout << std::endl;
    std::cout << "Done!" << std::endl;

    return 0;
}