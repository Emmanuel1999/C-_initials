#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog {
    private:
        std::string dog_name {"Duffy"};
    
    public:
        explicit Dog(std::string name_param);
        Dog() = default;
        ~Dog();

        std::string get_name() const {
            return dog_name;
        }

        void set_name (const std::string& name) {
            dog_name = name;
        }

        void print_info() const {
            std::cout << "Dog [name: " << dog_name << " ]" << std::endl;
        }
};

#endif //DOG_H