#include <iostream>
#include "tqueue.h"

int main() {
    TQueue queue;
    std::vector<Point> v { Point(0, 0), Point(0, 1), Point(1, 1), Point(1, 0) };
    queue.push(std::make_shared<Trapezoid>(Trapezoid(v)));
    queue.push(std::make_shared<Trapezoid>(Trapezoid()));
    std::cout << queue << std::endl;
    return 0;
}