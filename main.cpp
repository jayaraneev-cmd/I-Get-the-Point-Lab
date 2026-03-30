#include <iostream>
#include "src/Point.hpp"

int main() {
    Point p1(3.2, 9.8);
    Point p2(5.5, -1.2);

    std::cout << p1 - p2 << std::endl;    // distance
    std::cout << (p1 == p2) << std::endl; // 0
    std::cout << (p1 != p2) << std::endl; // 1
    std::cout << p1 / p2 << std::endl;    // midpoint

    return 0;
}