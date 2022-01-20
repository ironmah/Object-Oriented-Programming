#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <vector>
#include "point.h"

using namespace std;

class Trapezoid {
public:
    Trapezoid();
    Trapezoid(vector <Point> v);
    Trapezoid(const Trapezoid& other);

    virtual ~Trapezoid();

    friend istream &operator>>(istream &is, Trapezoid &obj);
    friend ostream &operator<<(ostream &os, const Trapezoid &obj);

    Trapezoid &operator++();
    friend Trapezoid operator+(const Trapezoid &left, const Triangle &right);
    Trapezoid &operator=(const Trapezoid &right);
    size_t VertexNumbers();
    double Area();

private:
    Point a;
    Point b;
    Point c;
    Point d;
};

#endif //TRAPEZOID_H