#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "point.h"
using namespace std;

class Trapezoid {
public:
  Trapezoid();

  Trapezoid(vector<Point>);

  Trapezoid(const Trapezoid &other);
  
  friend istream &operator>>(istream &is, Trapezoid &obj); // перегруженный оператор >>
  friend ostream &operator<<(ostream &os, const Trapezoid &obj);
  Trapezoid &operator++();
  friend Trapezoid operator+(const Trapezoid &left, const Trapezoid &right);
  Trapezoid &operator=(const Trapezoid &right);
  size_t VertexNumbers();
  double Area();
  virtual ~Trapezoid();

private:
  Point a;
  Point b;
  Point c;
  Point d; 
};

#endif //TRAPEZOID_H