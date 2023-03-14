#include <iostream>

int main(){
    
    //Declare an array of ints
    int scores[10]; // Junk data

    //Read data
    /*
    std::cout << "scores [0] : " << scores[0] << std::endl;
    std::cout << "scores [1] : " << scores[1] << std::endl;
    std::cout << "scores [2] : " << scores[2] << std::endl; //repeating is stressful, so we use for loop
    */

    //Read with a loop
    /*
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    std::cout << "Done here!" << std::endl;
    */

    //Write data into an array
    /*
    scores [0] = 20;
    scores [1] = 21;
    scores [2] = 22;

    //Print the data out 
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    std::cout << "Done here!" << std::endl;
    */
    
    //Write data in a loop
    /*
    for (size_t i {0}; i < 10; i++)
    {
        scores[i] = i * 10;
    }
    
    // Print data out
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    std::cout << "Done here argh!" << std::endl;
   */

    //Declare and initialize at the same time
    /*
    std::cout << std::endl;
    std::cout << "Declare and initialize data at the same time : " << std::endl;

    double salaries [5] = {12.5, 13.5, 14.5, 15.5, 16.5};

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "The salary of [ " << i << " ] is : " << salaries[i] << std::endl;
    }
    std::cout << "Done here argh!" << std::endl;
    */

    //If you dont initialize all the elements the ones left out are initialized to 0;
    /*
    int families [5] = {12, 6, 5};
    
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "families [ " << i << " ] is : " << families[i] << std::endl;
    }
    std::cout << "Done here argh!" << std::endl;
    std::cout << std::endl;
    */

    //Omit the size of the array at declaration
    /*
    int class_sizes [] {21,22,23,24,25,26,27};

    //Will print this with a range - based for loop
    for (auto value : class_sizes)
    {
        std::cout << "Value : " << value << std::endl;
    }
    std::cout << std::endl;
    */

    //Read only arrays
    //const int birds [] {21,22,23,24,25,26,27};
    //birds [2] = 8;

    //sum up scores array, store result in sum
    int scores1 [] = {2,3,4,5,6,7};
    int sum {0};

    for(int element : scores1) {
        sum += element;
    }
    std::cout << sum << " : Is the score sum. Argh!" << std::endl;

    return 0;
}