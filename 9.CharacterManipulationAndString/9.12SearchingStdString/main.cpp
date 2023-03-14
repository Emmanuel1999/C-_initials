#include <iostream>
#include <string>

int main(){
    
    //Find(1)
    //std::string::find()
    //size_type find (const basic_string& str, size_type pos = 0) const
    //Finds the starting index where the str substring is found in string
    //where we call the method 
    /*
    std::string str1 {"Water was poured in the heater"};
    std::string search_for {"ter"};

    size_t found_pos = str1.find(search_for);
    std::cout << "Find (ter) : index [" << found_pos << "]" << std::endl;

    //Find red
    search_for = "red";
    found_pos = str1.find(search_for);
    std::cout << "Find (red) : index [" << found_pos << "]" << std::endl;

    //Find something that isn't there
    search_for = "chicken";
    found_pos = str1.find(search_for);
    std::cout << "Find (chicken) : index [" << found_pos << "]" << std::endl;

    //std::string::npos
    std::cout << "npos : " << std::string::npos << std::endl;

    size_t large = -1;
    std::cout << "large : " << large << std::endl;
    */

    //Using std::string::npos to check if search was successful or failed
    /*
    std::string str1 {"Water was poured in the heater"};
    std::string search_for {"red"};

    size_t found_pos = str1.find(search_for);
    if (found_pos == std::string::npos) 
    {
        std::cout << "Could not find the string 'red' : " << std::endl;
    }else{
        std::cout << "'red' found at starting position : " << found_pos << std::endl;
    }

    //Search for chicken and check result against std::string::npos
    std::cout << std::endl;
    search_for = "chicken";
    found_pos = str1.find(search_for);

    if (found_pos == std::string::npos) 
    {
        std::cout << "Could not find the string 'chicken' : " << std::endl;
    }else{
        std::cout << "'chicken' found at starting position : " << found_pos << std::endl;
    }
    */

    //Find(2)
    //Can specify the position where we want the search to start
    //Using the second parameter of the method
    /*
    std::string str1 {"Water was poured in the heater"};
    std::string search_for {"ter"};

    size_t found_pos = str1.find(search_for);
    std::cout << "ter found at location : " << found_pos << std::endl;//2

    found_pos = str1.find(search_for,0);
    std::cout << "ter found at location : " << found_pos << std::endl;//2

    found_pos = str1.find(search_for,10);
    std::cout << "ter found at location : " << found_pos << std::endl;//27
    */

    //Find(3)
    //size_type find (const charT* s, size_type pos = 0) const
    //Finds the first substring equal to the character string pointed by s
    //pos : the position where we start searching in the std::string

    std::string str2 = "beer is packaged by her in beer cans around here.";
    const char* c_str2 = {"her"};

    size_t found_pos = str2.find(c_str2,2);
    if(found_pos != std::string::npos)
    {
        std::cout << c_str2 << " found at position : " << found_pos << std::endl;
    }else{
        std::cout << "Could not find the string" << (c_str2) << std::endl;
    }

    
    return 0;
}