#include "pentagon.h"
#include <math.h>
Pentagon::Pentagon() : a(0.0, 0.0), b(0.0, 0.0), c(0.0, 0.0), d(0.0, 0.0), e(0.0, 0.0)
{
	std::cout << "Created default pentagon" << std::endl;
};

Pentagon::Pentagon(std::istream& is)
{
	std::cout << "Enter the coordinates of trapeziod's points (x and y)" << std::endl;
	std::cout << "First enter lower left vertex and then go clockwise" << std::endl;
	is >> a >> b >> c >> d >> e;
	len1 = dist(a, b);
	len2 = dist(b, c);
	len3 = dist(c, d);
	len4 = dist(d, e);
	len5 = dist(e, a);
	diag1 = dist(a, c);
	diag2 = dist(c, e);
	std::cout << "Created pentagon via istream" << std::endl;
}

double Pentagon::Square() {
	double p1 = (len1 + len2 + diag1) / 2;
	double s1 = sqrt(p1 * (p1 - len1) * (p1 - len2) * (p1 - diag1));
	double p2 = (diag1 + diag2 + len5) / 2;
	double s2 = sqrt(p2 * (p2 - diag1) * (p2 - diag2) * (p2 - len5));
	double p3 = (diag2 + len3 + len4) / 2;
	double s3 = sqrt(p3 * (p3 - diag2) * (p3 - len3) * (p3 - len4));
	double square = s1+s2+s3;
	return square;
}

void Pentagon::Print(std::ostream& os)
{
	os << "Pentagon: " << a << " " << b << " " << c << " " << d << " " << e << std::endl;
}

size_t Pentagon::VertexesNumber()
{
	return 5;
}


Pentagon::~Pentagon()
{
	std::cout << "Deleted pentagon" << std::endl;
}