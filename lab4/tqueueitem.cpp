#include <iostream>
#include "tqueueitem.h"
using namespace std;
template <class T>
TQueueItem<T>::TQueueItem(const std::shared_ptr<T>& trapezoid) {
    this->item = trapezoid;
    this->next = nullptr;
    cout << "Queue item is created" <<endl;
}

template <class T>
TQueueItem<T>::TQueueItem(const shared_ptr<TQueueItem<T>>& other) {
    this->item = other->item;
    this->next = other->next;
    cout << "Queue item: copied\n";
}

template <class T>
shared_ptr<TQueueItem<T>> TQueueItem<T>::SetNext(shared_ptr<TQueueItem<T>>& next_) {
    shared_ptr<TQueueItem<T>> prev = this->next;
    this->next = next_;
    return prev;
}

template <class T>
hared_ptr<T> TQueueItem<T>::GetItem() {
    return this->item;
}

template <class T>
shared_ptr<TQueueItem<T>> TQueueItem<T>::GetNext() {
    return this->next;
}

template <class A>
ostream& operator<<(ostream& os, const TQueueItem<A>& obj) {
    if (obj.item) {
        os << "{";
        os << *(obj.item);
        os << "}" << endl;
    }
    return os;
}