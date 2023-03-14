#include <iostream>

    //tools
    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse  {60};

int main(){
    
    int tool {Ellipse};

    if(tool == Pen) {
        std::cout << "Active tool is the pen" << std::endl;
        //Do the actual painting!
    }
    else if(tool == Marker) {
        std::cout << "Active tool is the Marker" << std::endl;
    }
    else if(tool == Eraser) {
        std::cout << "Active tool is the Eraser" << std::endl;
    }
    else if(tool == Rectangle) {
        std::cout << "Active tool is the Rectangle" << std::endl;
    }
    else if(tool == Circle) {
        std::cout << "Active tool is the Circle" << std::endl;
    }
    else if(tool == Ellipse) {
        std::cout << "Active tool is the Ellipse" << std::endl;
    }

    std::cout << "Moving on" << std::endl;

    return 0;
}