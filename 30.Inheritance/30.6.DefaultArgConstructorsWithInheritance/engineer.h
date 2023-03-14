#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

//private inheritance is done here

class Engineer : public Person
{
    friend std::ostream& operator<<(std::ostream& out, const Engineer& operant); 
    //Has access as a friend to the person class through friendship with the 
    //engineer class and its private. Can only be accessed through the class and can't be modified. 

    public:
        Engineer();
        ~Engineer();

        void build_something(){
            m_full_name = "John Snow"; // OK
            m_age = 23; // OK
            //m_address = "897-78-723"; Compiler error
        }

        int get_contract_count() const {
            return contract_count; 
        }

    private:
        int contract_count {};
};

#endif //ENGINEER_H