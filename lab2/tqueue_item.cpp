#include "tqueue_item.h"

TQueue_item::TQueue_item(const Trapezoid &trapezoid) {
  this->trapezoid = trapezoid;
  this->next = nullptr;
  std::cout << "Queue item created" << std::endl;
}

TQueue_item::TQueue_item(const TQueue_item &other) {
  this->trapezoid = other.trapezoid;
  this->next = other.next;
  std::cout << "Stack item: copied" << std::endl;
}

TQueue_item *TQueue_item::SetNext(TQueue_item *next) {
  TQueue_item *prev = this->next;
  this->next = next;
  return prev;
}

Trapezoid TQueue_item::GetTrapezoid() { return this->trapezoid; }

TQueue_item *TQueue_item::GetNext() { return this->next; }

TQueue_item::~TQueue_item() {
std::cout << "Queue item: deleted" << std::endl;
  delete next;
}

std::ostream &operator<<(std::ostream &os,const TQueue_item &obj) { // перегруженный оператор вывода
  os << "Item: " << obj.trapezoid << std::endl;
  return os;
}