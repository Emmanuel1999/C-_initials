#include "cylinder.h"

//std::string and double
const std::string Cylinder::default_color{"Red"};
const double Cylinder::PI {3.1415926535897932384626433832795};
const char* Cylinder::CHAR_PTR_CONSTANT = "Cstring here";
const int Cylinder::INT_ARRAY_CONSTANT[] = {10,20,30,40,50};
const float Cylinder::FLOAT_CONSTANT = 6.98f;
const std::string Cylinder::STRING_ARRAY_CONSTANT[] = {"String1", "String2"};

Cylinder::Cylinder(double rad_param, double height_param) : WIERD_FLOAT{33.3},
    WIERD_C_STRING{"Wierd"}, WIERD_INT_ARRAY_CONSTANT{10,20,30,40,50} {
        
        //WIERD_FLOAT = 33.3; //Not allowed

        base_rad = rad_param;
        height = height_param;
    }

//Getters
double Cylinder::get_base_rad(){
    return base_rad;
}
double Cylinder::get_height(){
   return height; 
}
    
//Setters
void Cylinder::set_base_rad(double rad_param){
    base_rad = rad_param;
}
void Cylinder::set_height(double height_param){
    height = height_param;
}
    
//Other operations on the class object
double Cylinder::volume(){
   return PI * base_rad * base_rad * height; 
}  
