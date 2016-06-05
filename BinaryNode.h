#ifndef BINARYNODE_H
#define BINARYNODE_H

#include "node.h"

template<class Type>
class BinaryNode {
public:
  Type data;
  BinaryNode<Type> *left;
  BinaryNode<Type> *right;
  Node<Type> *bucket;
};

#endif
