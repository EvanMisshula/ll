// Copyright Evan misshula 2015

#ifndef LIST_H_
#define LIST_H_
#include <iostream>
#include <string>
#include "Node.h"


// List class
class List {
    Node *head;
 public:
    List() { head = NULL; };
    void Print();
    void Append(std::string fname, std::string lname, int aRevenue);
    void Delete(int aRevenue);
};
#endif  // LIST_H_
