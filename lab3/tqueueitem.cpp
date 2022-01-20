#include "tqueueitem.h"
using namespace std;
TQueue_item::TQueue_item(const shared_ptr<Trapezoid> &trapezoid) {
  this->trapezoid = trapezoid;
  this->next = nullptr;
  cout << "Queue item: created\n";
}
TQueue_item::TQueue_item(const shared_ptr<TQueue_item> &other) {
  this->trapezoid = other->trapezoid;
  this->next = other->next;
  cout << "Queue item: copied\n";
}
shared_ptr<TQueue_item> TQueue_item::SetNext(shared_ptr<TQueue_item> &next) {
  shared_ptr<TQueue_item> prev = this->next;
  this->next = next;
  return prev;
}
shared_ptr<Trapezoid> TQueue_item::GetTrapezoid()
{ return this->trapezoid; }
shared_ptr<TQueue_item> TQueue_item::GetNext()
{ return this->next; }

TQueue_item::~TQueue_item() { cout << "Queue item: deleted\n"; }

ostream &operator<<(ostream &os, const TQueue_item &obj) {
  os << "Item: " << *(obj.trapezoid)'\n';
  return os;
}