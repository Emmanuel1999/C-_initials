#include <iostream>


template <typename ReturnType = double , typename T, typename P>
ReturnType maximum ( T a, P b){
    return (a > b) ? a : b;
}

template < typename T, typename P,typename ReturnType = double>
ReturnType minimum ( T a, P b){
    return (a < b) ? a : b;
}

int main(){

    double a{6};
    double b{9.5};

    auto result = minimum <int,double,int> (a,b);
    std::cout << "result : " << result << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl;//4

/*
    auto result1 = maximum <int, double, float> (a,b);
    std::cout << std::endl;
    std::cout << "result : " << result1 << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result1) << std::endl;
*/

    return 0;
}