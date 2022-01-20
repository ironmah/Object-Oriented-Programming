#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
public:
  Point();

  Point(double x, double y);

  double dist(Point &other);

  Point &operator++();

  friend Point operator+(const Point &left, const Point &right);

  friend std::istream &operator>>(std::istream &is, Point &p);

  friend std::ostream &operator<<(std::ostream &os, const Point &p);

  friend class Trapezoid; // ������������� ������, ����� ���� ��������
                          // ���������� �����

private:
  double y_;
  double x_;
};

#endif // POINT_H