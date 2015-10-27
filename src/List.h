// Copyright Evan misshula 2015

#ifndef SRC_LIST_H_
#define SRC_LIST_H_
#include <iostream>
#include "Node.h"
using  std::cout;
using  std::endl;

// List class
class List {
    Node *head;
 public:
    List() { head = NULL; };
    void Print();
    void Append(int data);
    void Delete(int data);
};
#endif  // SRC_LIST_H_
