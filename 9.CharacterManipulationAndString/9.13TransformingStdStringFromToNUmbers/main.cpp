#include <iostream>
#include <string>

int main(){

    //Number to string : the std::string function
    /*
    float float_var {22.5f};
    double double_var {1.34523e5};
    int int_var {332};

    std::string float_str {std::to_string(float_var)};
    std::string double_str {std::to_string(double_var)};
    std::string int_str {std::to_string(int_var)};

    std::cout << "size of float_var : " << float_str.size() << std::endl; //9
    std::cout << "float_var : " << float_var << std::endl;//22.5
    std::cout << "float_str : " << float_str << std::endl;//22.500000
    std::cout << "double_var : " << double_var << std::endl;//134523
    std::cout << "int_var : " << int_var << std::endl;//332
    */

    //std::string to number (integral types)
    //int, long, long long
    //std::stoi, std::stol, std::stoll
    /*
    std::string num_str {"34.567"}; //Could be negative 

    int int_var = std::stoi(num_str);
    std::cout << "int_var : " << int_var << std::endl;//34
    std::cout << "sizeof(int_var) : " << sizeof(int_var) << std::endl;//4

    long long_var = std::stol(num_str);
    std::cout << "long_var : " << long_var << std::endl;//34
    std::cout << "sizeof(long_var) : " << sizeof(long_var) << std::endl;//4

    long long long_long_var = std::stoll(num_str);
    std::cout << "long_long_var : " << long_long_var << std::endl;//34
    std::cout << "sizeof(long_long_var) : " << sizeof(long_long_var) << std::endl;//8
    */

    //unsigned long, unsigned long long
    //std::stoul, std::stoull
    //Underflows when the  std::string contains a negative number
    /*
    std::string num_str = "34.567";
    //std::string number_str = "-34.567"; // Resulting unsigned long and long long underflow
	    						// and become huge numbers of their type

    std::cout << std::endl;
    std::cout << "Unsigned long, unsigned long long ..." << std::endl;

    unsigned long ul_var = std::stoul(num_str);
    std::cout << "ul_var : " << ul_var << std::endl;//34
    std::cout << "sizeof(ul_var) : " << sizeof(ul_var) << std::endl;//4

    unsigned long long ull_var = std::stoull(num_str);
    std::cout << "ull_var : " << ull_var << std::endl;//34
    std::cout << "sizeof(ull_var) : " << sizeof(ull_var) << std::endl;//8
    */

    //float, double, long double:
    //std::stof, std::stod, std::stold

    std::string num_str = "34.567";
    
    float float_var = std::stof(num_str);
    std::cout << "float_var : " << float_var << std::endl; //34.567
    std::cout << "sizeof(float_var) : " << sizeof(float_var) << std::endl;//4

    double double_var = std::stod(num_str);
    std::cout << "double_var : " << double_var << std::endl;//34.567
    std::cout << "sizeof(double_var) : " << sizeof(double_var) << std::endl;//8

    long double long_double_var = std::stold(num_str);
    std::cout << "long_double_var : " << long_double_var << std::endl;//34.567
    std::cout << "sizeof(long_double_var) : " << sizeof(long_double_var) << std::endl;//16 


    return 0;
}