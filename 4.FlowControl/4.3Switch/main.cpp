#include <iostream>
#include <string>

    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};

int main(){
    
    int tool {};

    switch (tool)
    {
        case Pen: {
            std::cout << "Active tool is Pen" << std::endl; 
        }
            break;

        case Marker: {
        std::cout << "Active tool is Marker" << std::endl; 
    }
        break;
        
        case Eraser: {
        std::cout << "Active tool is Eraser" << std::endl; 
    }
        break;

        case Rectangle:
        case Circle: 
        case Ellipse: {
        std::cout << "Drawing shapes!" << std::endl; 
    }
        break;

        default:{
        std::cout << "No match found" << std::endl;
    }
        break; 
    }

    std::cout << "Moving on!" << std::endl;

    std::string name {"John"};

    /*
    switch (name) //Compiler error : string doesn't work with switch statement
    {

    }
    */

    return 0;
}