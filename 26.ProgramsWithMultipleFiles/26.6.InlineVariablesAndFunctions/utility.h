#include <iostream>

inline double threshold{11.5}; //Definition

//Definition
inline double add(double a, double b) {
    if ((a > 11.5) && (b > 11.5)) {
        return a + b;
    }else{
        return threshold;
    }
}