#include "cylinder.h"

Cylinder::Cylinder(double rad_param, double height_param) {
    base_rad = rad_param;
    height = height_param;
}

//Getters
double Cylinder::get_base_rad() const{
    return base_rad;
}

double Cylinder::get_height() const{
    return height;
}

//Setters
void Cylinder::set_base_rad(double rad_param){
    base_rad = rad_param;
}

void Cylinder::set_height(double height_param) {
    height = height_param;
}

//Other operations on the class object

double Cylinder::volume() const {
    return PI * base_rad * base_rad * height;
}