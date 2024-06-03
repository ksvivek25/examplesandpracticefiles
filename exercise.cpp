#include <iostream>

int main() {
    double weight;// given problem has decimal values.
    int w;//double is a type for storing floating point (decimal) numbers. Double variables typically require 8 bytes of memory space.

    std::cout << " what is your weight on planet earth? \n ";
    std::cin >> weight;
    std::cout << "1.Mercury 2.Venus 3. Mars 4. Jupiter\n"
        << "5. Saturn 6.Uranus 7.Neptune\n";// all values are float so can be written in a single line.
    std::cout << " select your planet of choice for target weight\n";
    std::cin >> w;

    if (w == 1) {
        weight = weight * 0.38;

    }
    else if (w == 2) {
        weight = weight * 0.91;

    }
    else if (w == 3) {
        weight = weight * 0.38;

    }
    else if (w == 4) {
        weight = weight * 2.34;

    }
    else if (w == 5) {
        weight = weight * 1.06;

    }
    else if (w == 6) {
        weight = weight * 0.92;

    }
    else if (w == 7) {
        weight = weight * 1.19;

    }
    std::cout << "\n your weight:" << weight << "\n";

}