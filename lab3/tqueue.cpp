#include "tqueue.h"

TQueue::TQueue() : first(nullptr), last(nullptr), n(0) {}

ostream &operator<<(ostream &os, const TQueue &q) {
  shared_ptr<TQueue_item> item = q.first;
  while (item) 
    {
    os << *item;
    item = item->GetNext();
    }
  return os;
}

bool TQueue::push(shared_ptr<Trapezoid> &&trapezoid) {
  shared_ptr<TQueue_item> tail = make_shared<TQueue_item>(TQueue_item(trapezoid));
  if (tail == nullptr) 
  {
    return false;
  }
  if (this->empty()) {                      
  this->first = this->last = tail;
  } else if (n == 1) {                     
    last = tail;
    first->SetNext(tail);
  } 
  else 
  {
    this->last->SetNext(tail); 
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
shared_ptr<Trapezoid> TQueue::top() {
  if (first) {
    return first->GetTrapezoid();
  }
}
size_t TQueue::size() { return n; }
bool TQueue::empty() { return first == nullptr; }
TQueue::~TQueue() {}