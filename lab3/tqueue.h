#ifndef TQUEUE_H
#define TQUEUE_H

#include "tqueue_item.h"
#include <memory>

class TQueue {
public:
    TQueue();
    TQueue(const TQueue& other);
    void Push(std::shared_ptr<Trapezoid> &&trapezoid);
    void Pop();
    std::shared_ptr<Trapezoid>& Top();
    bool Empty();
    size_t Length();
    friend std::ostream& operator<<(std::ostream& os, const TQueue& queue);
    void Clear();
    virtual ~TQueue();
private:
    std::shared_ptr<TQueueItem> head, tail;
};

#endif // TQUEUE_H