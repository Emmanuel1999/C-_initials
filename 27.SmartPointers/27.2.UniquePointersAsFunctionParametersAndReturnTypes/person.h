#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <memory>

class Dog;
class Person 
{
    private:
        int m_age;
        std::string m_name;
    
    public:
        Person(std::string name);
        ~Person();

        void adopt_dog(std::unique_ptr<Dog> dog);
};

#endif //PERSON_H