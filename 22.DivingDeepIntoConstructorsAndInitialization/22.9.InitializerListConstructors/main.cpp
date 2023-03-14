#include <iostream>
#include <cassert>

struct Point
{
    public:
    Point(std::initializer_list<double> list) {
        //static_assert((list.size() == 2));
        assert(list.size() == 2); //If the size of the list is not 2, terminate the program with an error.
        /*
        std::cout << "Initializer list constructor called" << std::endl;
        std::cout << "list size: " << list.size() << std::endl;

        for (size_t i = 0; i < list.size(); ++i)
        {
            std::cout << "elt [" << i << "] : " << *(list.begin() + i) << std::endl;
        }
        */

        x = *(list.begin());
        y = *(list.begin() + 1);
        
    }

    void print_point() const {
        std::cout << "Point [x: " << x << ", y: " << y << "]" << std::endl;
    }


    private:
    double x;
    double y;
};



int main(){
    
    Point pt1{16.2,34.6
    };
    pt1.print_point();
    
    return 0;
}