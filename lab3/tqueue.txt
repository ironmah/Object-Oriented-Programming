#ifndef TQUEUE_H
#define TQUEUE_H
#include "tqueueitem.h"
using namespace std;

class TQueue {
public:
    TQueue();
    TQueue(const TQueue &other) = default;
    ~TQueue();

    friend ostream &operator<<(ostream &os, const TQueue &q);

    bool push(shared_ptr<Trapezoid> &&trapezoid);
    bool pop();
    bool empty();
    shared_ptr<Trapezoid> top();

    size_t size();

private:
    shared_ptr<TQueueitem> first;
    shared_ptr<TQueueitem> last;
    size_t n;
};
#endif //TQUEUE_H