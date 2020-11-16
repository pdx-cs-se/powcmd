// Power library.

#include <stdexcept>

#include "pow.h"

// Returns x**y (x to the y-th power).
// Raises exception on overflow and for 0**0.
uint64_t pow(uint64_t x, uint64_t y) {
    if (x == 0) {
        if (y == 0)
            throw std::invalid_argument("0**0 is undefined");
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    uint64_t result = 1;
    // result * x**(y-i) == x**y && i <= y
    for (uint64_t i = 0; i < y; i++) {
        // result * x**(y-i) == x**y && i <= y
        uint64_t new_result = result * x;
        if (new_result < result)
            throw std::overflow_error("pow is too large");
        result = new_result;
        // result * x**(y-i-1) == x**y && i <= y
    }
    // result == x**y && i == y */
    return result;
}
