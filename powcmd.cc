// Power command.
// Bart Massey

#include <iostream>
#include <cinttypes>
#include <string>

using namespace std;

#include "pow.h"

int main(int argc, char **argv) {
    // Collect the x and y arguments.
    if (argc != 3) {
        cerr << "invalid number of arguments" << endl;
        return -1;
    }
    uint64_t x, y;
    try {
        x = stoul(argv[1], nullptr, 0);
        y = stoul(argv[2], nullptr, 0);
    } catch (const invalid_argument&) {
        cerr << "bad non-negative integer syntax" << endl;
        return -1;
    }

    // Compute pow(x, y).
    uint64_t p;
    try {
        p = pow(x, y);
    } catch (exception &e) {
        cerr << e.what() << endl;
        return -1;
    }

    // Display the result.
    cout << p << endl;
    return 0;
}
