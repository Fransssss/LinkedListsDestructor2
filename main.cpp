// Fransiskus Agapa
// Practices make improvement - Have Fun !!
// :)


// Learning process
// -----------------
// understanding how destrcutor work in linkedlist
// -----------------

#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << endl;

    LinkedList* newLink = nullptr;

    newLink = new LinkedList;            // default constructor called

    newLink = new LinkedList(20);

    delete newLink;
    return 0;
}
