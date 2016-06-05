#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Person.h"
#include "User.h"
#include "Birthday.h"
#include "BinarySearchTree.h"

using namespace std;

int hash(string& key);

int main() {
  BinarySearchTree<User> tree;

  Birthday *birthday = new Birthday(1994, 4, 10);
  Person *person = new Person("CJ", "Pecson", *birthday);
  string username = "cjpecson";
  int keyValue = hash(username);
  User *user = new User("cjx@example.com", username, "password", "member", keyValue, *person);
  tree.add(*user);

  birthday = new Birthday(1994, 4, 10);
  person = new Person("JC", "Pecson", *birthday);
  username = "jcpecson";
  keyValue = hash(username);
  user = new User("cjx@example.com", username, "password", "member", keyValue, *person);
  tree.add(*user);

  birthday = new Birthday(1994, 4, 10);
  person = new Person("KennyREPEAT", "Pecson", *birthday);
  username = "jcpecson";
  keyValue = hash(username);
  user = new User("cjx@example.com", username, "password", "member", keyValue, *person);
  tree.add(*user);

  birthday = new Birthday(1994, 4, 10);
  person = new Person("NamREPEAT", "Pecson", *birthday);
  username = "jcpecson";
  keyValue = hash(username);
  user = new User("cjx@example.com", username, "password", "member", keyValue, *person);
  tree.add(*user);

 birthday = new Birthday(1994, 1, 1);
  person = new Person("Vincent", "Brunsch", *birthday);
  username = "noexa";
  keyValue = hash(username);
  user = new User("vince@example.com", username, "password", "member", keyValue, *person);
  tree.add(*user);

  birthday = new Birthday(1994, 4, 2);
  person = new Person("Kenny", "Luong", *birthday);
  username = "kenny94";
  keyValue = hash(username);
  user = new User("kenny@example.com", username, "password", "member", keyValue, *person);
  tree.add(*user);

  birthday = new Birthday(1994, 10, 5);
  person = new Person("Janine", "Solomon", *birthday);
  username = "janinesolomon";
  keyValue = hash(username);
  user = new User("janine@example.com", username, "password", "member", keyValue, *person);
  tree.add(*user);

  birthday = new Birthday(1993, 12, 16);
  person = new Person("Nam", "Nguyen", *birthday);
  username = "skinnybones76";
  keyValue = hash(username);
  user = new User("nam@example.com", username, "password", "member", keyValue, *person);
  tree.add(*user);

  tree.postOrder(tree.root);
}

int hash(string& key) {
  int value = 0;
  for (int i = 0; i < key.length(); i++) {
    value += key.at(i);

  }
  return (value % 101);
}
