#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <iostream>

using namespace std;

template <class Type>
class LinkedList {
public:
/*  virtual void create() = 0;*/
  virtual bool isEmpty() const = 0;
  // virtual bool isFull() const = 0;
  virtual void add(const Type&) = 0;
  // virtual Type top() const = 0;
  // virtual void deleteNode() = 0;
};

#endif
