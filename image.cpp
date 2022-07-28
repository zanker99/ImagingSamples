#include "image.h"

//Image() : height{0}, width{0}, data{nullptr} {} //Maybe this should be removed
Image(const size_t &_height,
        const size_t &_width,
        const Pixel &_pixel = Pixel());
~Image();