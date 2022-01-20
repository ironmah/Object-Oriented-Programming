#ifndef TQUEUE_H
#define TQUEUE_H

#include <memory>
#include "trapezoid.h"
#include "tqueueitem.h"

using namespace std;

template <class T> class TQueue {
public:
  TQueue();

  TQueue(const TQueue<T> &other);

  ~TQueue() = default;

  
  friend ostream &operator<<(ostream &os, const TQueue<A> &q);
 
  template <class A>

  bool push(shared_ptr<T> &&item);

  shared_ptr<T> pop();
  shared_ptr<T> top();
  bool empty();
  size_t size();

private:
  shared_ptr<TQueueitem<T>> first;
  shared_ptr<TQueueitem<T>> last;
  size_t n;
};

#endif // INC_4_LAB_TQUEUE_H