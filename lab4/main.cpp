#include "trapezoid.h"
#include "tqueue.h"
#include <iostream>

using namespace std;

int main() {
  vector<Point> vect{Point(0, 0), Point(0, 1), Point(1, 1), Point(1, 0)};
  {
    TQueue_item<Rectangle> item(make_shared<Trapezoid>(vect));
    cout << item;
  }
  TQueue<Trapezoid> queue;
  queue.push(make_shared<Trapezoid>(v));
  queue.push(make_shared<Trapezoid>());
  cout << queue;
  return 0;
}