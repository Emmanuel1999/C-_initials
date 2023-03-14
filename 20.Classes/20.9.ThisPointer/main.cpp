#include <iostream>

class Dog
{
private:
    std::string name;
    std::string breed;
    int * p_age {nullptr};
public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

    void print_info(){
        std::cout << "Dog (" << this << ") : [ name : " << name << ", breed : " << breed << 
        ", age : " << *p_age << "]" << std::endl;
    }

    //Setters
    //Chained calls using pointers
    /*
    Dog* set_dog_name(std::string_view name)
    {
        //name = name; //This does nothing. Not advisable can be confusing better to use :
        this->name = name; //much better;
        return this;
    }

    Dog* set_dog_breed(std::string_view breed)
    {
        this->breed = breed;
        return this;
    }

    Dog* set_dog_age(int age)
    {
        *(this->p_age) = age;
        return this;
    }*/

    //Chained calls using references
    Dog& set_dog_name(std::string_view name)
    {
        //name = name; //This does nothing. Not advisable can be confusing better to use :
        this->name = name; //much better;
        return *this;
    }

    Dog& set_dog_breed(std::string_view breed)
    {
        this->breed = breed;
        return *this;
    }

    Dog& set_dog_age(int age)
    {
        *(this->p_age) = age;
        return *this;
    }

};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << " at " << this << std::endl;

}
Dog::~Dog ()
{
    delete p_age;
    std::cout << "Dog destructor called for " << name << " at " << this << std::endl;
}

int main () {

    Dog dog1 ("Poppy", "Shepherd", 2); //Constructor
    dog1.print_info();

    /*
    dog1.set_dog_name("Pumba");
    dog1.set_dog_breed("Jumbo");
    dog1.set_dog_age(3);
    dog1.print_info();
    */
   
    //Chained calls using pointer
    //dog1.set_dog_name("Pumba")->set_dog_breed("Rot Terrier")->set_dog_age(4);
    
    
    //Chained calls using references
    dog1.set_dog_name("Pumba").set_dog_breed("Rot Terrier").set_dog_age(7);
    
    dog1.print_info();

    std::cout << "Worked shit out... " << std::endl;
    //Destructor
    return 0;
}