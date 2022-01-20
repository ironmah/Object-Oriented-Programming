#include "tqueue.h"
#include <iostream>

using namespace std;

int main() {
    auto * Q = new TQueue;
    vector<Point> vect{ Point(0, 0), Point(0, 1), Point(1, 1), Point(1, 0) };
    Q->push(Trapezoid(vect));
    Q->push(Trapezoid());
    cout << *Q << endl;
    delete Q;
    return 0;
}