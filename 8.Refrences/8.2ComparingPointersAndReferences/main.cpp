#include <iostream>

int main(){

    	//Declare pointer and reference

    double double_value {12.34};
    double& ref_double_value {double_value}; // Reference to double_value
    double* p_double_value {&double_value}; //Pointer to double_value
	
	//Reading
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;
	
	//Writting through pointer
	*p_double_value = 15.44;
	
    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;
	
	//Writting through reference
	ref_double_value = 18.44;
	
    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;
    std::cout << std::endl;

    double some_other_double {99.9};
    ref_double_value = some_other_double;

    //Make the reference reference somwthing else
     std::cout << std::endl;
    std::cout << "Making the reference reference something else..." << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;
    
    //Make the pointer point somewhere else
    p_double_value = &some_other_double;
    std::cout << std::endl;
    std::cout << "Making the pointer point somewhere else ...." << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;

    *p_double_value = 454;

    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;

    return 0;
}