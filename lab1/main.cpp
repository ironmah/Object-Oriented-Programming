#include <iostream>
#include "trapezoid.h"
#include "rhombus.h"
#include "pentagon.h"

int main() {
    Rhombus a;
    Rhombus rho(std::cin);
    rho.Print(std::cout);
    std::cout << "Площадь ромба: " << rho.Area() << std::endl;
    std::cout << "Количество вершин в ромбе " << rho.VertexesNumber() << std::endl;
    Pentagon b;
    Pentagon pen(std::cin);
    pen.Print(std::cout);
    std::cout << "Площадь 5-угольника: " << pen.Area() << std::endl;
    std::cout << "Количество вершин в 5-угольнике " << pen.VertexesNumber() << std::endl;
    Trapezoid c;
    Trapezoid tr(std::cin);
    tr.Print(std::cout);
    std::cout << "Площадь трапеции: " << tr.Area() << std::endl;
    std::cout << "Количество вершин в трапеции " << tr.VertexesNumber() << std::endl;
    return 0;
}