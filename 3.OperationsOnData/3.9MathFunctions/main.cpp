#include <iostream>
#include <cmath>

int main(){
  
    double weight {7.7};

    //floor 
    std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;

    //ceil 
    std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;

    //abs
    double savings {-5000};

    std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is : " << std::abs(weight) << std::endl;

    //exp : f(x) = e ^ x, where e = 2.71828. Test the result against a calculator.
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is : " << exponential << std::endl;

    //power
    std::cout << "3 ^ 4 is : " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is : " << std::pow(9,3) << std::endl;
    std::cout << std::endl;

    //log : reverse of the power function. If 2^3 = 8, then log 8 in base 2 = 3. Log is like
    //asking to which component should we elevate 2 to get 8? Log, by default computes this 
    //in base e. There's another function which uses base 10 which is log10

    //Try the reverse operation of e^4 = 54.59, it'll be log 54.59 in base e = ? 
    std::cout << "Log, to get 54.59, we'll elevate e to the power of : " << std::log(54.59) << std::endl;

    //log 10, 10 ^ 4 = 10000, to get 10k, you'll need to elevate 10 to the power of ?
    std::cout << "To get 10000 you'll need to elevate 10 to the power of : " << std::log10(10000) << std::endl; //4
    std::cout << std::endl;
    
    //sqrt
    std::cout << "The square root of 81 is : " << std::sqrt(81) << std::endl;

    //round. halfway points are rounded away from 0. 2.5 is rounded to 5 for example
    std::cout << "3.654 is rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;

  return 0;
}