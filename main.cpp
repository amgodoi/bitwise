#include <cassert>
#include <cstdlib>
#include <stdexcept> //for std::runtime_error
#include <memory>    //for std::bad_alloc
#include <iostream>
#include <string>

#include <cinttypes> // C99 standard
#include <cstdint>   // C99 standard
#include <cstdbool>  // C99 standard

#include "Bitwise.h"

int main(int argc, char* argv[]) 
{
    try {

        uint8_t byte = 0;
        Bitwise::print(byte);
        std::cout << std::endl;
        
        Bitwise::set(&byte, 0);
        Bitwise::print(byte);
        std::cout << std::endl;
        
        Bitwise::unset(&byte, 0);
        Bitwise::print(byte);
        std::cout << std::endl;
        
        bool isOn = Bitwise::isOn(byte, 0);
        std::cout << "On/Off: " << isOn << std::endl;
        
        Bitwise::set(&byte, 5);
        Bitwise::print(byte);
        std::cout << std::endl;
        
        isOn = Bitwise::isOn(byte, 5);
        std::cout << "On/Off: " << isOn << std::endl;
        
        Bitwise::flip(&byte, 5);
        Bitwise::print(byte);
        std::cout << std::endl;
        
        Bitwise::set(&byte);
        Bitwise::print(byte);
        std::cout << std::endl;
        
        Bitwise::unset(&byte);
        Bitwise::print(byte);
        std::cout << std::endl;
        
        Bitwise::flip(&byte);
        Bitwise::print(byte);
        std::cout << std::endl;
        
        Bitwise::flip(&byte);
        Bitwise::print(byte);
        std::cout << std::endl;
        
        Bitwise::set(&byte, 0);
        Bitwise::set(&byte, 3);
        Bitwise::set(&byte, 7);
        Bitwise::print(byte);
        std::cout << std::endl;
        
        Bitwise::flip(&byte);
        Bitwise::print(byte);
        std::cout << std::endl;

        uint8_t x = 66;
        uint8_t y = 44;
        std::cout << "x : " << (int) x << ", y: " << (int) y << std::endl;
        
        Bitwise::swap(&x, &y);
        std::cout << "x : " << (int) x << ", y: " << (int) y << std::endl;

    } catch (std::bad_alloc &e) {
        std::cerr << "std::bad_alloc caught: out of memory" << std::endl;
        return EXIT_FAILURE;
    } catch (std::bad_exception &e) {
        std::cerr << "std::bad_exception caught: bad exception" << std::endl;
        return EXIT_FAILURE;
    } catch (std::runtime_error &e) {
        std::cerr << "std::runtime_error caught: " << e.what() << std::endl;
        return EXIT_FAILURE;
    } catch (std::exception &e) {
        std::cerr << "std::exception caught: " << e.what() << std::endl;
        return EXIT_FAILURE;
    } catch (...) {
        std::cerr << "unknown exception caught!" << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}

