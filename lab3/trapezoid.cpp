#include "trapezoid.h"
using namespace std;
double Trapezoid::Area() { return (abs(a.x_ - b.x_) * abs(a.y_ - b.y_)); }

Trapezoid::Trapezoid() : a(), b(), c(), d() {
  cout << "Default trapezoid is created\n";
}

Trapezoid::Trapezoid(const Trapezoid &other) {
  a = other.a;
  b = other.b;
  c = other.c;
  d = other.d;
  cout << "Made copy of Trapezoid\n";
}

Trapezoid::Trapezoid(vector<Point> v) : a(v[0]), b(v[1]), c(v[2]), d(v[3]) {
  cout << "Trapezoid with vertices " << a << ", " << b << ", " << c << ", " << d<< " was created\n";
}

istream &operator>>(istream &is, Trapezoid &obj) {
  cout << "Enter cords\n";
  is >> obj.a >> obj.b >> obj.c >> obj.d;
  return is;
}

ostream &operator<<(ostream &os, const Trapezoid &obj) {
  os << "Trapezoid: " << obj.a << ", " << obj.b << ", " << obj.c << ", " << obj.d;
  return os;
}

Trapezoid &Trapezoid::operator++() {
  ++this->a;
  ++this->b;
  ++this->c;
  ++this->d;
  return *this;
}

Trapezoid operator+(const Trapezoid &left, const Trapezoid &right) {
  vector<Point> vect{left.a + right.a, left.b + right.b, left.c + right.c, left.d + right.d};
  return Trapezoid(vect);
}
Trapezoid &Trapezoid::operator=(const Trapezoid &other) {
  if (this == &other) {
    return *this;
  }
  this->a = other.a;
  this->b = other.b;
  this->c = other.c;
  this->d = other.d;
  return *this;
}

Trapezoid::~Trapezoid() { cout << "Trapezoid was deleted\n"; }

size_t Trapezoid::VertexNumbers() { return 4; }