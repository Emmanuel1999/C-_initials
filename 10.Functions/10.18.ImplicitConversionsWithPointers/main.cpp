#include <iostream>

void print_sum (int * , int *);

int main(){
   
    int a {32};
    int b {423};

    print_sum (&a, &b);

    return 0;
}

void print_sum (int * param1, int * param2){
    std::cout << "Sum : " << (*param1 + *param2) << std::endl;
}