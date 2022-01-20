#include "tqueue.h"

TQueue::TQueue() : first(nullptr), last(nullptr), n(0) {}

TQueue::TQueue(const TQueue& other){
  n = 0;
  auto a = other.first;
  for (int i = 0; i < other.n; ++i){
    this->push(std::move(Trapezoid(a->GetTrapezoid())));
    a = a->GetNext();
  }
}

std::ostream &operator<<(std::ostream &os, const TQueue &q) {
  os.precision(3);
  TQueue_item *item = que.first;
  auto s = new double[que.n];
  for (int i = 0; i < que.n; ++i){
    s[i] = item->GetTrapezoid().Area();
    item = item->GetNext();
  }
  for (int i = (int) que.n - 1; i >= 0; --i){
    os << "=> " << s[i] << " ";
  }
  return os;
}

bool TQueue::push(Trapezoide &&trapezoid) {
  auto *tail = new TQueue_item(trapezoid);
  if (tail == nullptr) {
    return false;
  }
  if (this->empty()) { // если пустая очередь, то голова и хвост - один и тот же
                       // элемент
    this->first = this->last = tail;
  } else if (n == 1) { // хвост - вставляемый элемент, а также следующий элемент
                       // от первого
    last = tail;
    first->SetNext(tail);
  } else {
    this->last->SetNext(tail); // хвост - следующий элемент от последнего
    last = tail;
  }
  n++;
  return true;
}

bool TQueue::pop() {
  if (first) {
    first = first->GetNext();
    return true;
  }
  return false;
}

Rectangle TQueue::top() {
  if (first) {
    return first->GetRectangle();
  }
}

size_t TQueue::size() { return n; }

bool TQueue::empty() { return first == nullptr; }

TQueue::~TQueue() { delete first; }

void TQueue::Clear(){
  delete first;
  first = last = nullptr;
  n = 0;
}