#include <iostream>
#include <cstring>
#include <string_view>

int main(){
    
    //Showing the problem 
    /*
    std::string str1 {"Hello"};
    std::string str2 {str1};
    std::string str3 {str1};

    std::cout << "address of str1 : " << &str1 << std::endl;
    std::cout << "address of str2 : " << &str2 << std::endl;
    std::cout << "address of str3 : " << &str3 << std::endl; 
    */

    //Using string_view
    /*
    std::string_view sv {"Hellooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"};
    std::string_view sv1 {sv};
    std::string_view sv2 {sv1};

    std::cout << "sizeof string_view : " << sizeof(std::string_view) << std::endl;
    std::cout << "sizeof sv1 : " << sizeof(sv1) << std::endl;
    std::cout << std::endl;
    std::cout << "sv : " << sv << std::endl;
    std::cout << "sv1 : " << sv1 << std::endl;
    std::cout << "sv2 : " << sv2 << std::endl;
    */

    //Constructing string_view's
    /*
    std::string str3 {"Regular std::string"};
    const char * c_string {"Regular C_string"};
    const char char_array [] {"Character array"}; //Null terminated
    char char_array2 [] {'H','u','g','e'}; //Non null terminated char array

    std::string_view sv3 {"String literal"};
    std::string_view sv4 {sv3};
    std::string_view sv5 {c_string};
    std::string_view sv6 {char_array};
    std::string_view sv7 {sv3};
    std::string_view sv8 {char_array2,std::size(char_array2)};//Non null terminated char array
                                                             //Need to pass in size info
                                
    std::cout << "sv3 : " << sv3 << std::endl;
    std::cout << "sv4 : " << sv4 << std::endl;
    std::cout << "sv5 : " << sv5 << std::endl;
    std::cout << "sv6 : " << sv6 << std::endl;
    std::cout << "sv7(Constructed from other string_view) : " << sv7 << std::endl;
    std::cout << "Non null terminated view string with std::string_view : " << sv8 << std::endl;
    */

    //Changes to the original string are reflected in the string_view
    /*
    char word [] {"Dog"};
    std::string_view sv9 {word};

    std::cout << "word : " << sv9 << std::endl;

    std::cout << "Changing data.... " << std::endl;
    //Change the data
    word [2] = 't';
    std::cout << std::endl;
    std::cout << "New word: " << sv9 << std::endl;
    */

    //Changing the view window : SHRINKING
    /*
    const char * c_str1 {"The animals have left this region"};
    std::string_view sv10 {c_str1};

    std::cout << "sv10 : " << sv10 << std::endl;
    std::cout << "---------------" << std::endl;
    
    sv10.remove_prefix(4); //Removes 'the'
    //Prints : animals have left the region
    std::cout << "View with removed prefix (4) : " << sv10 << std::endl;
    std::cout << std::endl;

    sv10.remove_suffix(10); //Removes "the region"
    //Prints : animals have left
    std::cout << "View with removed suffix (10) : " << sv10 << std::endl;
    std::cout << std::endl;

    //Changing the view doesn't change the viewed string: 
    std::cout << "Original sv10 viewed string : " << c_str1 << std::endl;
    */

    //String_view shouldn't outlive whatever it's viewing
    /*
    std::string_view sv11;

    {
        std::string str4 {"Hello there!"};
        sv11 = str4;
        std::cout << "INSIDE ------ sv11 is viewing : " << sv11 << std::endl;


        //Str4 goes out of scope here!
    }
    std::cout << "OUTSIDE------ sv11 is viewing : " << sv11 << std::endl;
    */

    //data
    /*
    std::string_view sv13 {"Ticket"};
    std::cout << "sv13 : " << sv13 << std::endl;
    std::cout << "std::strlen(sv13.data()) : " << std::strlen(sv13.data()) << std::endl;
    */

    //Dont use data on a modified view (through remove_prefix or remove_suffix)
    /*
    std::string_view sv14 {"Ticket"};
    sv14.remove_prefix(2);
    sv14.remove_suffix(2);

    //Length info is lost when you modify the view
    std::cout << sv14 << " has " << std::strlen(sv14.data()) << " character(s). " << std::endl;//ck
    std::cout << "sv14.data() is : " << sv14.data() << std::endl;//cket
    std::cout << "sv14 : " << sv14 << std::endl;//ck
    */

    //Dont view non null terminated strings
    /*
    char char_array3 [] {'H','e','l','l','o'};
    std::string_view sv15 {char_array3,std::size(char_array3)};

    std::cout << sv15 << " has " << std::strlen(sv15.data()) << " character(s)." << std::endl;
    std::cout << "sv15.data() is : " << sv15.data() << std::endl;//Hello + gabage
    std::cout << "sv15 : " << sv15 << std::endl;//Hello
    */

    //std::string behaviours

    std::string_view sv16 {"There is a huge forest in that area."};

    std::cout << "sv16 is " << sv16.length() << " character(s) long." << std::endl;//36
    std::cout << "The front character is : " << sv16.front() << std::endl;//T
    std::cout << "The back character is : " << sv16.back() << std::endl;//.
    std::cout << "Substring : " << sv16.substr(0,22) << std::endl;//There is a huge forest

    return 0;
}