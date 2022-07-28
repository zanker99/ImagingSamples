#ifndef PIXEL_H
#define PIXEL_H
// C++ includes
#include <stdint.h>
#include <iostream>
#include <sstream>
#include <iomanip>

class Pixel 
{
private: 
    uint8_t redPixel, greenPixel, bluePixel; 
    float alpha;

public: 
    // Constructors 
    Pixel(); 
    Pixel(int redPixel, int greenPixel, int bluePixel, float alpha=1.0);
    ~Pixel() = default; // use the compiler-generated version of that function 

};

#endif