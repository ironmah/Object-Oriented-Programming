#include "tqueue.h"
#include <iostream>

using namespace std;

template <class T> TQueue<T>::TQueue() : first(nullptr), last(nullptr), n(0) {}

template <class T> TQueue<T>::TQueue(const TQueue<T> &other) {
  first = other.first;
  last = other.last;
  n = other.n;
  cout << "Queue was copied" << endl;
}

template <class T> bool TQueue<T>::push(shared_ptr<T> &&item) {
  shared_ptr<TQueue_item<T>> tail =
      make_shared<TQueue_item<T>>(TQueue_item<T>(item));
  if (tail == nullptr) {
    return false;
  }
  if (this->empty()) { // ���� ������ �������, �� ������ � ����� - ���� � ��� ��
                       // �������
    this->first = this->last = tail;
  } else if (n == 1) { // ����� - ����������� �������, � ����� ��������� �������
                       // �� �������
    last = tail;
    first->SetNext(tail);
  } else {
    this->last->SetNext(tail); // ����� - ��������� ������� �� ����������
    last = tail;
  }
  n++;
  return true;
}

template <class T> bool TQueue<T>::pop() {
  if (first) {
    first = first->GetNext();
    return true;
  }
  return false;
}

template <class T> shared_ptr<T> TQueue<T>::top() {
  if (first) {
    return first->GetItem();
  }
}

template <class T> size_t TQueue<T>::size() { return n; }

template <class T> bool TQueue<T>::empty() { return first == nullptr; }

template <class T> ostream &operator<<(ostream &os, const TQueue<T> &q) {
  shared_ptr<TQueue_item<T>> item = q.first;
  while (item) {
    os << *item;
    item = item->GetNext();
  }
  return os;
}

template <class T> Titerator<TQueueitem<T>, T> TQueue<T>::begin() {
  return Titerator<TQueue_item<T>, T>(first);
}

template <class T> Titerator<TQueueitem<T>, T> TQueue<T>::end() {
  return Titerator<TQueue_item<T>, T>(nullptr);
}