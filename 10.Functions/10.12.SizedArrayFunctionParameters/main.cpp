#include <iostream>


double sum ( double scores [], size_t count) {

    double sum {};
    
    for (size_t i = 0; i < count; ++i)
    {
        sum += scores[i];
    }
    return sum;    
}

int main(){
    
    
    double student_score [] {10.0, 20.0, 30.0, 4,5,6,7,8,9};
    
    double result = sum(student_score,std::size(student_score));
    std::cout << "result : " << result << std::endl; 


    return 0;
}