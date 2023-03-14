#include "square.h"
#include <iostream>

Square::Square(double side_param): 
    Square{side_param, "black-ish", 10}
{
    m_position = 45.43;
    std::cout << "One param constructor's been called..." << std::endl;
}

Square::Square(double side_param, const std::string& color_param, int shading_param) :
        m_side{side_param}, m_color{color_param}, m_shading{shading_param}
{
    std::cout << "Three param constructor called..." << std::endl;
}


double Square::surface() const {
    return m_side * m_side;
}

Square::~Square()
{
    std::cout << "Square object destroyed.." << std::endl;
} 