// Fransiskus Agapa

#ifndef LINKEDLISTSDESTRUCTOR2_LINKEDLIST_H
#define LINKEDLISTSDESTRUCTOR2_LINKEDLIST_H

#include "Node.h"

class LinkedList
{
public:
    Node* head;
    LinkedList();                // default constructor
    LinkedList(const int& data); // constructor
    ~LinkedList();               // destructor
};

#endif //LINKEDLISTSDESTRUCTOR2_LINKEDLIST_H
