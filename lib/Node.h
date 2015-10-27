// Copyright 2015 Evan Misshula

#ifndef NODE_H_
#define NODE_H_
#include "Node.h"
#include <iostream>
#include <string>
//  using namespace std;

// Node class
class Node {
  std::string first;
  std::string last;
  int revenue;
  Node* next;

 public:
  Node() {};
  void SetData(std::string fname, std::string lname, int aRevenue);
  void SetNext(Node* aNext) { next = aNext; };
  std::string First() {return first; };
  std::string Last() {return last; };
  int Revenue() { return revenue; };
  Node* Next() { return next; };
};
#endif  // NODE_H_
