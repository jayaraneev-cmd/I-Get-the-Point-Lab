#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // constructor
    Point(double xVal, double yVal);

    // operators
    double operator-(const Point& other) const;   // distance
    bool operator==(const Point& other) const;    // equal
    bool operator!=(const Point& other) const;    // not equal
    Point operator/(const Point& other) const;    // midpoint

    // output
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

#endif