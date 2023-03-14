#include "person.h"

Person::~Person()
{
    delete age; //Make sure you're not loosing memory.
}

Person::Person (const std::string& last_name) : Person(last_name, "") {}

Person::Person(const std::string& last_name_param, const std::string& first_name_param) :
        Person(last_name_param, first_name_param, 1) {}

Person::Person(const std::string& last_name_param, const std::string& first_name_param, int age_param) :
            last_name(last_name_param), first_name(first_name_param), age(new int(age_param)) {}

/*
Person::Person (const Person source_p) : last_name(source_p.get_last_name()), first_name(source_p.get_last_name()), age(source_p.get_age())
//BAADDD!!!
{}
*/

//Memberwise copy : BAD!
/*
Person::Person(const Person& source_p) : last_name(source_p.get_last_name()), first_name(source_p.first_name()), age(source_p.get_age())
{
    std::cout << "Copy constructor called...." << std::endl;
}
*/

//Don't blindly copy printer member variables
/*
Person::Person(const Person& source_p) : last_name(source_p.get_last_name()), first_name(source_p.get_first_name()), age(new int(*(source_p.age())))
{
    std::cout << "Copy constructor called...." << std::endl;
}
*/

//Delegate from the copy constructor
Person::Person(const Person& source_p) : Person(source_p.get_last_name(), source_p.get_first_name(), *(source_p.get_age()))
{
    std::cout << "Copy constructor called... " << std::endl;
}