#ifndef TQUQUE_ITEM_H
#define TQUQUE_ITEM_H

#include "trapezoid.h"

class TQueue_item {
public:
  TQueue_item(const Trapezoid &trapezoid);
  TQueue_item(const TQueue_item &other);

  TQueue_item * SetNext(TQueue_item *next_); // присваивает значение следующему элементу

  TQueue_item *GetNext(); // возвращает указатель на следующий элемент

  Trapezoid GetRectangle();

  friend std::ostream &operator<<(std::ostream &os, const TQueue_item &obj);

  virtual ~TQueue_item();

private:
  Trapezoid trapezoid;
  TQueue_item *next;
};

#endif // TQUQUE_ITEM_H