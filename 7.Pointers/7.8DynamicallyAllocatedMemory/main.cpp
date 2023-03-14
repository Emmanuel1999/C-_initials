#include <iostream>

int main(){
    
    const size_t size {10};

    //Different ways to declare an array
    //dynamically and how they're initialized

    double *p_salaries {new double [size]}; //salaries array contains junk value
    int *p_students {new (std::nothrow) int[size] {}}; //initialized to 0;
    double *p_scores {new (std::nothrow) double[size] {1,2,3,4,5}}; //Allocating memory space 
                                                                    //for an array of size double
                                                                    //vars. First 5 will be initialized
                                                                    //with 1,2,3,4,5 and the rest will
                                                                    //be 0's.
    
    //nullptr check and use the allocated array
    if(p_scores){
        std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << std::endl;
        std::cout << "successfully allocated memory for scores!" << std::endl;

        //print out elements. Can use regular array access notation, or pointer arithmetic
        for (size_t i = 0; i < size; i++)
        {
            std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
        
    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete [] p_scores;
    p_scores = nullptr;

    //Static array vs Dynamic array
    std::cout << "======================================" << std::endl;

    int scores [] {1,2,3,4,5,6,7,8,9,10}; //Lives on the stack (static)

    std::cout << "scores size : " << std::size(scores) << std::endl; 
    for (auto s : scores) {
        std::cout << "Value : " << s << std::endl;
    }

    int *p_scores1 = new int [10] {1,2,3,4,5,6,7,8,9,10}; //Lives on the heap(dynamic)
    //std::cout << "p_scores1 size : " << std::size(p_scores1) << std::endl; //std::size doesn't work for dynamic array
    /*
    for (auto s : p_scores1) { //Issue, p_scores isn't an array it's a pointer pointing to a location in memory so ain't gona work.
        std::cout << "Value : " << s << std::endl;
    }

    //Instead of encountering problems like the above, we can easily declare it like it's been used 
    //in the 'nullptr check and use the allocated array' section above.
    */

    delete [] p_scores1;
    p_scores1 = nullptr;

    return 0;
}