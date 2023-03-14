#include <iostream>

int main(){
    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "Value 1 : " << value1 << std::endl;
    std::cout << "Value 2 : " << value2 << std::endl;
    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;


    unsigned int value3 {33};
    //unsigned int value4 {-35}; //compiler error

    //Short and Long
    short short_var {-32768}; //2 bytes
    short int short_int {4555};
    signed short signed_short {133};
    signed short int signed_short_int {-221};
    unsigned short int unsigned_short_int {221};

    std::cout << "Short variable : " << short_var << " , size : " << sizeof (short) << " bytes" << std::endl; 
    std::cout << "Short int : " << short_int << " , size : " << sizeof (short int) << " bytes" << std::endl;
    std::cout << "Signed short : " << signed_short << " , size : " << sizeof (signed short) << " bytes" << std::endl;
    std::cout << "Signed short int : " << signed_short_int << " , size : " << sizeof (signed short int) << " bytes" << std::endl;
    std::cout << "Unsigned short int : " << unsigned_short_int << " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;
    std::cout << "......................" << std::endl;

    int int_var {3245}; //4 bytes
    signed signed_var {31};
    signed int signed_int {22};
    unsigned int unsigned_int {332};

    std::cout << "Int variable : " << int_var << " , size : " << sizeof (int) << " bytes" << std::endl; 
    std::cout << "Signed variable : " << signed_var << " , size : " << sizeof (signed) << " bytes" << std::endl;
    std::cout << "Signed int : " << signed_int << " , size : " << sizeof (signed int) << " bytes" << std::endl;
    std::cout << "Unsigned int : " << unsigned_int << " , size : " << sizeof (unsigned int) << " bytes" << std::endl;
    std::cout << "............................." << std::endl;


    long long_var {8888}; // 4 or 8 Bytes
    long int long_int{32};
    signed long signed_long {32};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    std::cout << "Long variable : " << long_var << " , size : " << sizeof (long) << " bytes" << std::endl;
    std::cout << "Long int : " << long_int << " , size : " << sizeof (long int) << " bytes" << std::endl;
    std::cout << "Signed long : " << signed_long << " , size : " << sizeof (signed long) << " bytes" << std::endl;
    std::cout << "Signed long int : " << signed_long_int << " , size : " << sizeof (signed long int) << " bytes" << std::endl;
    std::cout << "Unsigned long int : " << unsigned_long_int << " , size : " << sizeof (unsigned long int) << " bytes" << std::endl;
    std::cout << "..................................." << std::endl;

    long long long_long {8888}; //8 Bytes
    long long int long_long_int {4444};
    signed long long signed_long_long {43};
    signed long long int signed_long_long_int {23};
    unsigned long long int unsigned_long_long_int {43};

    std::cout << "Long long : " << long_long << " , size : " << sizeof (long long) << " bytes" << std::endl;
    std::cout << "Long long int : " << long_long_int << " , size : " << sizeof (long long int) << " bytes" << std::endl;
    std::cout << "Signed long long : " << signed_long_long << " , size : " << sizeof (signed long long) << " bytes" << std::endl;
    std::cout << "Signed long long int : " << signed_long_long_int << " , size : " << sizeof (signed long long int) << " bytes" << std::endl;
    std::cout << "Unsigned long long int : " << unsigned_long_long_int << " , size : " << sizeof (unsigned long long int) << " bytes" << std::endl;

    return 0;    
}