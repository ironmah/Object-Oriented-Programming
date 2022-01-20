#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

using namespace std;

class Point {
public:
    Point();

    Point(double x, double y);

    Point &operator++();

    friend Point operator+(const Point &left, const Point &right);

    double dist(Point &other);

    friend istream &operator>>(istream &is, Point &p);

    friend ostream &operator<<(ostream &os, const Point &p);

    friend class Trapezoid; // Дружественные классы, чтобы были доступны координаты точки

private:
    double y_;
    double x_;
};

#endif // POINT_H