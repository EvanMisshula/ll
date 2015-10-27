//  Copyright Evan Misshula 2015

#include "Node.h"
#include <string>

void Node::SetData(std::string fname, std::string lname, int aRevenue) {
  first = fname;
  last = lname;
  revenue = aRevenue;
}
