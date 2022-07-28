#include "pixel.h"

Pixel::Pixel():
    redPixel{255}, greenPixel{255}, bluePixel{255}, alpha{0}
{
}

Pixel::Pixel(int _redPixel, int _greenPixel, int _bluePixel, float _alpha)
{
    redPixel = static_cast<uint8_t>(_redPixel);
    greenPixel = static_cast<uint8_t>(_greenPixel);
    bluePixel = static_cast<uint8_t>(_bluePixel);
    alpha = _alpha;
}

