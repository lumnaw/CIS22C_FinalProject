#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include "linkedList.h"
#include "BinaryNode.h"
#include "node.h"
#include <cmath>

template <class Type>
class BinarySearchTree : public LinkedList<Type> {
private:
public:
  BinaryNode<Type> *root;
  BinarySearchTree() {
    root = NULL;
  }
  BinarySearchTree(const Type& obj) {
    BinaryNode<Type> *temp = new BinaryNode<Type>;
    temp->data = obj;
    temp->left = NULL;
    temp->right = NULL;
    temp->bucket = NULL;
    if (!this->isEmpty()) {
      this->root = temp;
    }
  }

/*
  TODO: Refact this code. Does too many things atm.
*/

  void add(const Type& obj) {
    BinaryNode<Type> *current, *trail;
    BinaryNode<Type> *temp = new BinaryNode<Type>;
    current = root;
    trail = current;

    Node<Type> *bucketTemp = new Node<Type>;
    bucketTemp->data = obj;
    bucketTemp->link = NULL;
    Node<Type> *bucketPtr;

    temp->data = obj;
    temp->left = NULL;
    temp->right = NULL;
    temp->bucket = NULL;
    if (isEmpty()) {
      this->root = temp;
    } else {
      current = root;
      int value = valueCompare(temp->data.getKeyValue(), current);
      if (value == 0) {
        if (current->bucket == NULL) {
          current->bucket = bucketTemp;
        } else {
          bucketPtr = current->bucket;
          while (bucketPtr->link != NULL) {
            bucketPtr = bucketPtr->link;
          }
          bucketPtr->link = bucketTemp;
        }
      } else {
        while (current != NULL) {
          trail = current;
          switch (value) {
            case 1: {
              current = current->right;
              break;
            }
            case -1: {
              current = current->left;
              break;
            }
          }
        }
      }
      if (valueCompare(temp->data.getKeyValue(), trail) == 1) {
        trail->right = temp;
      } else if (valueCompare(temp->data.getKeyValue(), trail) == -1) {
        trail->left = temp;
      }
    }
  }


  void postOrder(BinaryNode<Type> *root) {
    if (root != NULL) {
      postOrder(root->left);
      postOrder(root->right);
      if (root->bucket != NULL) {
        Node<Type> *temp = root->bucket;
        while (temp != NULL) {
          cout << temp->data.getPerson().getFirstName() << endl;
          temp = temp->link;
        }
      }
      cout << root->data.getPerson().getFirstName() << endl;
    }

  }

  // void traverseBucket(BinaryNode<Type> *root)

/*
  Compares the object with current node
  @params integer value of the object to be compared
  @return -1 if object is less than current node, 0 if they are equal, 1 if object is greater than current node
*/

  int valueCompare(int keyValue, BinaryNode<Type> *root) {
    BinaryNode<Type> *temp = root;
    if (keyValue > temp->data.getKeyValue()) { return 1; }
    else if (keyValue < temp->data.getKeyValue()) { return -1; }
    else if (keyValue == temp->data.getKeyValue()) { return 0; }
  }

  BinaryNode<Type> getRoot() { return root; }

  bool isEmpty() const { return (root == NULL); }
  // bool isFull() const;
  // Type top() const;
  // void deleteNode();
  // void create();
};

#endif
