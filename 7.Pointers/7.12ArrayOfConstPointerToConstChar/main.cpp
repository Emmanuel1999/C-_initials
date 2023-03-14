#include <iostream>

int main(){
    
    const char * const students [] {
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"
    };

    //Print out the students 
    std::cout << "Printing out the students : " << std::endl;
    for (const char * student : students) 
    {
        std::cout << student << std::endl;
    }

    //*students [0] = 'k'; //Compiler error

    //Can swap for new student tho
    const char * new_student {"God is great!"};
    //students [0] = new_student; //Compile error

    //Print out the students 
    std::cout << "Printing out the students : " << std::endl;
    for (const char * student : students) 
    {
        std::cout << student << std::endl;
    }    

    return 0;
}