#include "point.h"
#include <cmath>

using namespace std;

Point::Point() : x_(0.0), y_(0.0) {} 

Point::Point(double x, double y) : x_(x), y_(y) {}

double Point::dist(Point &other) {
  double dx = (other.x_ - x_);
  double dy = (other.y_ - y_);
  return sqrt(dx * dx + dy * dy);
}

istream &operator>>(istream &is,  Point &p) {
  is >> p.x_ >> p.y_;
  return is;
}

ostream &operator<<(ostream &os, const Point &p) {
  os << "(" << p.x_ << ", " << p.y_ << ")";
  return os;
}

Point &Point::operator++() {
  this->x_ += 1;
  this->y_ += 1;
  return *this;
}

Point operator+(const Point &left, const Point &right) {
  return Point(left.x_ + right.x_, left.y_ + right.y_);
}