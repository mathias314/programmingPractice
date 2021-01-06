#include "../../reverse.h"

void linkedList::itReverse()
{
    node* prev;
    node* curr;
    node* next;

    prev = nullptr;
    curr = headptr;
    next = nullptr;

    while( curr != nullptr )
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    headptr = prev;
}
