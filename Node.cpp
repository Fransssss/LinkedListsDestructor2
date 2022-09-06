// Fransiskus Agapa

#include "Node.h"
#include <iostream>

Node::Node()
{
    std::cout << "= Node Default Constructor =" << std::endl;
    _data = -1;
    next = nullptr;
}

Node::Node(const int &theData)
{
    std::cout << "= Node Constructor ="  << std::endl;
    _data = theData;
}

