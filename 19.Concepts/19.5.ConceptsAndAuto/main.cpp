#include <iostream>
#include <concepts>

//This syntax constrains the auto parameters you pass in 
//to comply with the std::integral concept
std::integral auto add (std::integral auto a,std::integral auto b){
	return a + b;
}


int main(){

    std::floating_point auto x = add(4,5);
    
    return 0;
}