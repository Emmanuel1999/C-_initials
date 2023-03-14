#include <iostream>
#include <string>

void max_str(const std::string& input1, const std::string input2, std::string& output)
{
    if(input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

void max_int (int input1, int input2, int& output) 
{
    if(input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

void max_double (double input1, double input2, double* output)
{
    if(input1 > input2){
        *output = input1;
    }else{
        *output = input2;
    }
}

int main(){
    
    /*
    std::string out_str;
    std::string str1 ("Cassablanca");
    std::string str2 ("Belleuve");

    max_str(str1, str2, out_str);
    std::cout << "max_str : " << out_str << std::endl;
    */

    /*
    int out_int;
    int in1{34};
    int in2{232};

    max_int(in1, in2, out_int);
    std::cout << "max_int : " << out_int << std::endl;
    */

    double out_double;
    double doub1 {312.43};
    double doub2 {56.67};

    max_double(doub1, doub2, &out_double);
    std::cout << "max_double : " << out_double << std::endl;


    return 0;
}