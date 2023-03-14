#ifndef CYLINDER_H
#define CYLINDER_H

#include <string>

class Cylinder{
    
    public:
    //Static constants: public
    static inline const std::string default_color {"red"};

    //Constructors
    Cylinder() = default;
    Cylinder(double rad_param, double height_param);

    //Getters
    double get_base_rad() const;
    double get_height() const;

    //Setters
    void set_base_rad(double rad_param);
    void set_height(double height_param);

    //Other operations on the class object
    double volume() const;


    private:
    double base_rad{1.0};
    double height{1.0};
    static inline const double PI {3.1415926535897932384626433832795}; //C++17
};

#endif //CYLINDER_H