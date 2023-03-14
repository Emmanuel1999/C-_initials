#include <iostream>

int main(){
    
    int scores [10] {1,2,3,4,5,6,7,8,9,10};
    int * p_scores {scores};

    //Printing scores
    std::cout << "Printing scores : " << std::endl;
    std::cout << "scores : " << scores << std::endl;//Array
    std::cout << "p_scores : " << p_scores << std::endl; //Pointer
    std::cout << "&scores[0] : " << &scores[0] << std::endl;
    std::cout << std::endl;

    //Printing out the content at the address
    std::cout << "Printing out data at array address : " << std::endl;
    std::cout << "*scores : " << *scores << std::endl;//1
    std::cout << "scores[0] : " << scores[0] << std::endl;//1
    std::cout << "*p_scores : " << *p_scores << std::endl;//1
    std::cout << "p_scores[0] : " << p_scores[0] << std::endl;//1
    std::cout << std::endl;

    //Differences
    int number {21};
    p_scores = &number;

    //scores = &number; //The array name is a pointer, but a special pointer that identifies
                        //the entire array. You'll get the error  : incompatible types in assignment
                      // of 'int*' to 'int[1]'
    
    std::cout << "p_scores : " << p_scores << std::endl; //Pointer
    
    //std::size() doesn't work for raw pointers
    std::cout << "size : " << std::size(scores) << std::endl;
    //std::cout << "p_scores : " << std::size(p_scores) << std::endl; //Compile error
    

    return 0;
}