#include <iostream>
#include "trapezoid.h"
#include "rhombus.h"
#include "pentagon.h"

int main() {
    Rhombus a;
    Rhombus rho(std::cin);
    rho.Print(std::cout);
    std::cout << "������� �����: " << rho.Area() << std::endl;
    std::cout << "���������� ������ � ����� " << rho.VertexesNumber() << std::endl;
    Pentagon b;
    Pentagon pen(std::cin);
    pen.Print(std::cout);
    std::cout << "������� 5-���������: " << pen.Area() << std::endl;
    std::cout << "���������� ������ � 5-��������� " << pen.VertexesNumber() << std::endl;
    Trapezoid c;
    Trapezoid tr(std::cin);
    tr.Print(std::cout);
    std::cout << "������� ��������: " << tr.Area() << std::endl;
    std::cout << "���������� ������ � �������� " << tr.VertexesNumber() << std::endl;
    return 0;
}