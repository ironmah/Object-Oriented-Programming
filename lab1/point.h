#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>

class Point 
{
public:
	Point();
	Point(std::istream& is);
	Point(double x, double y);
	double length(Point& p1, Point& p2);
	friend std::istream& operator>>(std::istream& is, Point& p);
	friend std::ostream& operator<<(std::ostream& os, Point& p);
    friend double dist(Point& p1, Point& p2);

private:
	double x_, y_;
};

#endif