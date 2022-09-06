// Fransiskus Agapa

#include "LinkedList.h"
#include <iostream>

// default constructor
LinkedList::LinkedList()
{
    std::cout << "= Link Default Constructor =" << std::endl;
    head = nullptr;
}

LinkedList::LinkedList(const int &data)
{
    std::cout << "= Constructor =" << std::endl;
    Node* newNode = new Node(data);
    newNode->next = nullptr;
    head = newNode;
}

LinkedList::~LinkedList()
{
    std::cout << "= Destructor =" << std::endl;
    while(head != nullptr)
    {
        Node* temp = head->next;
        delete head;
        head = temp;
    }
}