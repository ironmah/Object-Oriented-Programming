#ifndef PENTAGON_H
#define PENTAGON_H
#include "figure.h"

class Pentagon : public Figure
{
public:
	Pentagon();
	Pentagon(std::istream& is);
	virtual ~Pentagon();
	void Print(std::ostream& os);
	double Square();
	size_t VertexesNumber();

private:
	Point a, b, c, d, e;
	double len1, len2, len3, len4, len5, diag1, diag2;
};

#endif