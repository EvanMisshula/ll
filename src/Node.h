#ifndef SRC_NODE_H_
#define SRC_NODE_H_
#include "Node.h"
#include <iostream>
//  using namespace std;

// Node class
class Node {
    int data;
    Node* next;

 public:
    Node() {};
    void SetData(int aData) { data = aData; };
    void SetNext(Node* aNext) { next = aNext; };
    int Data() { return data; };
    Node* Next() { return next; };
};
#endif  // SRC_NODE_H_
