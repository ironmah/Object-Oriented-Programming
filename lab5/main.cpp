#include "trapezoid.h"
#include "tqueue.h"
#include <iostream>

using namespace std;

int main() {
  vector<Point> v{Point(0, 0), Point(0, 1), Point(1, 1), Point(1, 0)};
  { TQueueitem<Trapezoid> item(make_shared<Trapezoid>(v)); }
  TQueue<Trapezoid> queue;
  queue.push(make_shared<Trapezoid>(v));
  queue.push(make_shared<Trapezoid>());
  for (auto x : queue) {
    cout << *x << endl;
  }
  return 0;
}