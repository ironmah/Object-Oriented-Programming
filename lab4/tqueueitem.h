#ifndef TQUEUE_ITEM_H
#define TQUEUE_ITEM_H
#include <memory>
#include "trapezoid.h"

using namespace std;

template<typename T> class TQueueItem {
public:
    TQueueItem() = default;
    TQueueItem(const shared_ptr<T>& item);
    TQueueItem(const shared_ptr<TQueueItem<T>>& other);

    shared_ptr<TQueueItem<T>> SetNext(shared_ptr<TQueueItem<T>>& next_);
    shared_ptr<TQueueItem<T>> GetNext();

    shared_ptr<T> GetItem();

    template<typename A>
    friend ostream& operator<<(ostream& os, const TQueueItem<A>& obj);

    ~TQueueItem() = default;

private:
    shared_ptr<T> item;
    shared_ptr<TQueueItem<T>> next;
};

#endif // TQUEUE_ITEM_H