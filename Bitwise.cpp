#include "Bitwise.h"

#include <iostream>

void Bitwise::printBits(uint8_t byte) {
    uint8_t i;
    for (i = 1 << (7); i > 0; i = i >> 1) {
        (byte & i) ? std::cout << "1" : std::cout << "0";
    }
}

void Bitwise::setBit(uint8_t *byte, uint8_t position) {
    *byte |= 1 << position;
}

void Bitwise::unsetBit(uint8_t *byte, uint8_t position) {
    *byte &= 0 << position;
}
    
bool Bitwise::isOn(uint8_t byte, uint8_t position) {
    return (byte >> position) & 1;
}

void Bitwise::flipBit(uint8_t *byte, uint8_t position) {
    *byte ^= 1 << position;
}
    
void Bitwise::swap(uint8_t *x, uint8_t *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
