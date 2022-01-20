#ifndef TQUEUEITEM_H
#define TQUEUEITEM_H
#include "trapezoid.h"
#include <memory>

using namespace std;

class TQueueitem {
public:
    TQueueitem(const shared_ptr<Trapezoide> &trapezoid);
    TQueueitem(const shared_ptr<TQueueitem> &other);
    shared_ptr<TQueue_item> SetNext(shared_ptr <TQueueitem> &next_);
    shared_ptr<TQueue_item> GetNext();
    shared_ptr<Trapezoid> GetTrapezoid();
    friend ostream &operator<<(ostream &os, const TQueueitem &obj);
    virtual ~TQueueitem();
private:
    shared_ptr <Trapezoid> triangle;
    shared_ptr <TQueueitem> next;
};

#endif //TQUEUEITEM_H