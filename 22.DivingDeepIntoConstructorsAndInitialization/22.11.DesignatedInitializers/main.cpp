#include <iostream>

struct Component
{
    double x;
    double y;
    double z;
};

void print_component(const Component& c) {
    std::cout << "Component [x:" << c.x << ", y:" << c.y << ", z:" << c.z << "]." << std::endl;
}

int main(){
    
    Component ct1 {.x=32.5,.y=54.3,.z=21.8};
    Component ct2 {421.5,131.3,234.54};
    Component ct3 {.32,23,21};
    //Component ct4 {.x=5.9;.y=14.5;.z=3.54}; //Compiler error

    
    print_component(ct1);
    print_component(ct2);
    print_component(ct3);
    
    return 0;
}