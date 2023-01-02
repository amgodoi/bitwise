#ifndef _BITWISE_H
#define _BITWISE_H

#include <cstdint>

class Bitwise
{
public: 
    static void print(uint8_t byte);
    static void set(uint8_t *byte);
    static void set(uint8_t *byte, uint8_t position);
    static void unset(uint8_t *byte);
    static void unset(uint8_t *byte, uint8_t position);
    static void flip(uint8_t *byte);
    static void flip(uint8_t *byte, uint8_t position);
    static bool isOn(uint8_t byte, uint8_t position);
    static void swap(uint8_t *x, uint8_t *y);

private:
    Bitwise() {};                
};

#endif // ifndef _BITWISE_H

