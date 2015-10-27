//  Copyright Evan Misshula 2015

#include "List.h"

int main() {
    // New list
    List list;

    // Append nodes to the list
    list.Append("Doug", "Salane", 60000);
    list.Print();
    list.Append("Tina", "Wolf", 2550);
    list.Print();
    list.Append("Maggie", "Smith", 300);
    list.Print();
    list.Append("Eva", "Fernandez", 80000);
    list.Print();
    list.Append("Jeff", "Coots", 1000);
    list.Print();

    // Delete nodes from the list
    list.Delete(80000);
    list.Print();
    list.Delete(300);
    list.Print();
    list.Delete(2550);
    list.Print();
    list.Delete(1000);
    list.Print();
    list.Delete(60000);
    list.Print();
}
