// Copyright Evan Misshula 2015

#include "List.h"
#include "Node.h"


/**
 * Print the contents of the list
 */
void List::Print() {
  using std::cout;
  using std::endl;

    // Temp pointer
    Node *tmp = head;

    // No nodes
    if ( tmp == NULL ) {
    cout << "EMPTY" << endl;
    return;
    }

    // One node in the list
    if ( tmp->Next() == NULL ) {
    cout << tmp->First();
    cout << " ";
    cout << tmp->Last();
    cout << ": ";
    cout << tmp->Revenue();
    cout << " --> ";
    cout << "NULL" << endl;
    } else {
    // Parse and print the list
    do {
      cout << tmp->First();
      cout << " ";
      cout << tmp->Last();
      cout << ": ";
      cout << tmp->Revenue();
      cout << " --> ";
      tmp = tmp->Next();
    } while ( tmp != NULL );
    cout << "NULL" << endl;
    }
}

/**
 * Append a node to the linked list
 */
void List::Append(std::string fname, std::string lname, int aRevenue) {
#include <string>
  // Create a new node
    Node* newNode = new Node();
    newNode->SetData(fname, lname, aRevenue);
    newNode->SetNext(NULL);

    // Create a temp pointer
    Node *tmp = head;

    if ( tmp != NULL ) {
    // Nodes already present in the list
    // Parse to end of list
    while ( tmp->Next() != NULL ) {
        tmp = tmp->Next();
    }

    // Point the last node to the new node
    tmp->SetNext(newNode);
    } else {
    // First node in the list
    head = newNode;
    }
}

/**
 * Delete a node from the list
 */
void List::Delete(int aRevenue) {
    // Create a temp pointer
    Node *tmp = head;

    // No nodes
    if ( tmp == NULL )
    return;

    // Last node of the list
    if ( tmp->Next() == NULL ) {
    delete tmp;
    head = NULL;
    } else {
    // Parse thru the nodes
    Node *prev;
    do {
        if ( tmp->Revenue() == aRevenue ) break;
        prev = tmp;
        tmp = tmp->Next();
    } while ( tmp != NULL );

    // Adjust the pointers
    prev->SetNext(tmp->Next());

    // Delete the current node
    delete tmp;
    }
}

