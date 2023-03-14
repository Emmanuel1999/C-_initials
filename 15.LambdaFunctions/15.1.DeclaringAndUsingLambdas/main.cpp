#include <iostream>

int main(){

    /*
    Lambda function signature :
                                [capture list] (parameters) -> return type {
                                    //Function body
                                }
    */

    //Declaring a lambda function and calling it through a name
    /*
    auto func = [](){
        std::cout << "Hello World!" << std::endl;
    };
    func();
    func();
    */

    //Declare a lambda function and call it directly
    /*
    []() {
        std::cout << "Hello World!" << std::endl;
    }();
    */

    //Lambda function that takes parameters
    /*
    [](double a, double b) {
        std::cout << "a + b : " << (a + b) << std::endl;
    }(10.0,9.0);
    */

    /*
    auto func1 = [](double a, double b) {
        std::cout << "a + b : " << (a + b) << std::endl;
    };

    func1(10,40);
    func1(5,5);
    */

    //Lambda function that returns something
    /*
    auto result = [](double a, double b) {
        return a + b;
    }(10,90);

    //std::cout << "result : " << result << std::endl;
    std::cout << "result : " << [](double a, double b) {
        return a + b;
    }(10,90) << std::endl;
    */

   /*
    auto func2 = [](double a, double b) {
        return a + b;
    };

    auto result1 = func2(34,64);
    auto result2 = func2 (54,5);

    std::cout << "result1 : " << result1 << std::endl;
    std::cout << "result2 : " << result2 << std::endl;
    std::cout << "direct call : " << func2(4,5) << std::endl;
    */

    //Explicitly specify the return type
    auto func3 = [](double a, double b) -> int {
        return a + b;
    };

    auto func4 = [](double a, double b){
        return a + b;
    };

    double a{4.4};
    double b{12.4};

    auto result3 = func3(a,b);
    auto result4 = func4(a,b);

    std::cout << "result3 : " << result3 << std::endl; //16
    std::cout << "result4 : " << result4 << std::endl; //16.8
    std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl; //4
    std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl; //8

    


    std::cout << "Done!" << std::endl;


    return 0;
}