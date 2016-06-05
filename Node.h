#ifndef NODE_H
#define NODE_H

template<class Type>
class Node {
public:
  Type data;
  Node<Type> *link;
};

#endif
