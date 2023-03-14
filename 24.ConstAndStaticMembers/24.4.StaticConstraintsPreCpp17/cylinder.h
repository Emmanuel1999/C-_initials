#ifndef CYLINDER_H
#define CYLINDER_H

#include <string>

class Cylinder {
    private:
    double base_rad{1.0};
    double height{1.0};
    static const double PI;

    public:
    //int and enum can  be initialized in class declaration 
    static const int INT_CONSTANT {5};
    enum Color{Red = 0, Green, Blue};
    static const Color COLOR_CONSTANT{Color::Green};

    //Others have to be done in the cpp file.
    static const std::string default_color;
    static const char* CHAR_PTR_CONSTANT;
    static const int INT_ARRAY_CONSTANT[5];
    static const float FLOAT_CONSTANT;
    static const std::string STRING_ARRAY_CONSTANT[2];

    //Not static
    const float WIERD_FLOAT;
    const char* WIERD_C_STRING;
    const int WIERD_INT_ARRAY_CONSTANT[5];

    //Constructors
    Cylinder()= default;
    Cylinder(double rad_param , double height_param );
	
    //Getters
    double get_base_rad();
    double get_height();
    
    //Setters
    void set_base_rad(double rad_param);
    void set_height(double height_param);
    
    //Other operations on the class object
    double volume();  
};

#endif //CYLINDER_H