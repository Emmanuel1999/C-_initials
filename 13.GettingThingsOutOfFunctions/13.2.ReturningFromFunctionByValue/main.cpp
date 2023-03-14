#include <iostream>
#include <string>

int sum (int a, int b)
{
    int result = a + b;
    std::cout << "In :&result(int) : " << &result << std::endl;
    return result;
}

std::string add_strings(std::string str1, std::string str2)
{
    std::string result_str = str1 + str2;
    std::cout << "In :&result(std::string) : " << &result_str << std::endl;
    return result_str;
}

int main(){
    
    //Different address with the function declaration
    /*
    int x{4};
    int y{7};
    int result = sum(x,y);
    std::cout << "Out :&result(int) : " << &result << std::endl;
    std::cout << "result : " << result << std::endl;
    */

    //Same address with the function declaration.
    
    std::string in_str1 {"Hello"};
    std::string in_str2 {" World!"};

    std::string result_str = add_strings(in_str1,in_str2);
    std::cout << "Out : &result(std::string) : " << &result_str << std::endl;
    std::cout << "result : " << result_str << std::endl;
    
    //NB: Dont make your code rely on your functions returning by value, 
    //because if your compiler sees that it can do a better job than you
    //it's going to optimize your value to return by reference and not be making copies.
    //So, DON'T MAKE YOUR CODE RELY ON RETURNING BY VALUE, and be aware of the optimization by
    //the compiler can do behind your back.


    return 0;
}