#include "Point.hpp"
#include <cmath>

// constructor
Point::Point(double xVal, double yVal) {
    x = xVal;
    y = yVal;
}

// distance
double Point::operator-(const Point& other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

// equality
bool Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

// inequality
bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

// midpoint
Point Point::operator/(const Point& other) const {
    double midX = (x + other.x) / 2;
    double midY = (y + other.y) / 2;
    return Point(midX, midY);
}

// output
std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}