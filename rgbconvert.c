#include <stdint.h>
//by https://afterthoughtsoftware.com/posts/convert-rgb888-to-rgb565 20.10.2021 07:05
uint16_t rgb888torgb565(uint8_t red, uint8_t green, uint8_t blue)
{
    uint16_t b = (blue >> 3) & 0x1f;
    uint16_t g = ((green >> 2) & 0x3f) << 5;
    uint16_t r = ((red >> 3) & 0x1f) << 11;

    return (uint16_t) (r | g | b);
}
