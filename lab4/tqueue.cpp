#include<iostream>
#include "tqueue.h"

using namespace std;

template <class T>
TQueue<T>::TQueue() : first(nullptr), last(nullptr), n(0) {}

template <class T>
TQueue<T>::TQueue(const TQueue<T>& other) {
    first = other.first;
    last = other.last;
    n = other.n;
    cout << "Queue is copied\n";
}

template <class T>
void TQueue<T>::push(std::shared_ptr<T>&& item) {
    shared_ptr<TQueueItem<T>> tail = make_shared<TQueueItem<T>>(TQueueItem<T>(item));
    if (this->empty()) {
        this->first = this->last = tail;
    }
    else if (n == 1) {
        last = tail;
        first->SetNext(tail);
    }
    else {
        this->last->SetNext(tail);
        last = tail;
    }
    n++;
    return true
}

template <class T> shared_ptr<T> TQueue<T>::pop() {
    shared_ptr<T> result;
    if (first) {
        result = first->GetItem();
        first = first->GetNext();
    }
    return result;
}

template <class T> shared_ptr<T> TQueue<T>::top() {
    if (first) {
        return first->GetItem();
    }
}

template <class T> 
size_t TQueue<T>::size() { 
    return n; 
}

template <class T> bool TQueue<T>::empty() { 
    return first == nullptr; 
}

template <class T> ostream& operator<<(ostream& os, const TQueue<T>& q) {
    shared_ptr<TQueueItem<T>> item = q.first;
    while (item) {
        os << *item;
        item = item->GetNext();
    }
    return os;
}