#ifndef IMAGE_H
#define IMAGE_H
// C++ includes
#include <stdint.h>
#include <vector>
#include <array>
#include <iostream>
#include <string>
#include <cstring>
#include <memory>
// Local classes 
#include "pixel.h"

class Image {
    private:
        size_t height = 0; 
        size_t width = 0; 

        std::shared_ptr<Pixel[]> data; 
    
    public:
        //Image() : height{0}, width{0}, data{nullptr} {} //Maybe this should be removed
        Image(const size_t &_height,
            const size_t &_width,
            const Pixel &_pixel = Pixel());
        ~Image();
};

#endif