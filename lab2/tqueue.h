#ifndef TQUEUE_H
#define TQUEUE_H

#include "trapezoid.h"
#include "tqueue_item.h"

class TQueue {
public:
    TQueue();
    TQueue(const TQueue& other);
    void Push(const Trapezoid& trapezoid);
    void Pop();
    Trapezoid& Top();
    bool Empty();
    size_t Length();
    friend std::ostream& operator<<(std::ostream& os, const TQueue& queue);
    void Clear();
    virtual ~TQueue();
private:
    TQueueItem *head, *tail;
};

#endif // TQUEUE_H