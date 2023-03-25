#include "4.h"
{
Square::Square(double x, double y, double side)
        : x_(x), y_(y), side_(side)
}
void Square::move(double dx, double dy) {
    x_ += dx;
    y_ += dy;
}
double Square::getX() const {
    return x_;
}
double Square::getY() const {
    return y_;
}