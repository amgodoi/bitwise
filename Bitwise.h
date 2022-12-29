#ifndef _BITWISE_H
#define _BITWISE_H

#include <cstdint>

class Bitwise
{
public: 
    static void printBits(uint8_t byte);
    static void setBit(uint8_t *byte, uint8_t position);
    static void unsetBit(uint8_t *byte, uint8_t position);
    static bool isOn(uint8_t byte, uint8_t position);
    static void flipBit(uint8_t *byte, uint8_t position);
    static void swap(uint8_t *x, uint8_t *y);

private:
    Bitwise() {};                
};

#endif // ifndef _BITWISE_H

