#include "trapezoid.h"
using namespace std;
double Trapezoid::Area()
 { return (abs(a.x_ - b.x_) * abs(a.y_ - b.y_)); }


Trapezoid::Trapezoid() : a(), b(), c(), d() {
   cout << "Default trapezoid is created" << endl;
}

Trapezoid::Trapezoid(const Trapezoid &other) {
  a = other.a;
  b = other.b;
  c = other.c;
  d = other.d;
  cout << "Copy of Trapezoid" << endl;
}

Trapezoid::Trapezoid(vector<Point> vect) : a(vect[0]), b(vect[1]), c(vect[2]), d(vect[3]) {
  cout << "Trapezoid " << a << ", " << b << ", " << c << ", " << d << " was created" << endl;
}

istream &operator>>(istream &is, Trapezoid &obj) {
  is >> obj.a >> obj.b >> obj.c >> obj.d;
  return is;
}

ostream &operator<<(ostream &os, const Trapezoid &obj) {
  os <<"a= "<< obj.a << ", ";
  os <<"b= "<< obj.b << ", ";
  os <<"c= "<< obj.c << ", ";
  os <<"d= "<< obj.d << ", ";
  return os;
}

Trapezoid &Trapezoid::operator++() { // инкрементируем каждую вершину
  ++this->a;
  ++this->b;
  ++this->c;
  ++this->d;
  return *this;
}

Trapezoid operator+(const Trapezoid &left, const Trapezoid &right) {
  vector<Point> vect{left.a + right.a, left.b + right.b, left.c + right.c,left.d + right.d};
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

Trapezoid::~Trapezoid() { cout << "Trapezoid was deleted" << endl; }

size_t Trapezoid::VertexNumbers() 
{ 
    return 4;
}