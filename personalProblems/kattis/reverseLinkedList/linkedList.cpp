#include "reverse.h"

linkedList::linkedList()
{
    headptr = nullptr;
}

linkedList::~linkedList()
{
    clear();
}


bool linkedList::insert( int itemToInsert )
// insert new nodes at end of linked list
{
    node* prev;
    node* curr;
    node* temp;

    prev = headptr;
    curr = headptr;

    temp = new (nothrow) node;

    if( temp == nullptr )
    {
        cout << "memory failed to allocate for insertion" << endl;
        return false;
    }

    temp->item = itemToInsert;

    if( headptr == nullptr ) // empty insertion
    {
        headptr = temp;
        temp->next = nullptr;
        return true;
    }

    while( curr != nullptr ) // insert at end
    {
        prev = curr;
        curr = curr->next;
    }
    temp->next = nullptr;
    prev->next = temp;

    return true;
}


void linkedList::clear()
{
    node* temp;

    if( headptr == nullptr )
    {
        return;
    }

    temp = headptr;
    headptr = temp->next;
    delete temp;

    clear();
}


void linkedList::print( ostream& out )
{
    node* temp;
    temp = headptr;

    while( temp != nullptr )
    {
        if( temp->next != nullptr )
        {
            out << temp->item << ", ";
        }
        else
        {
            out << temp->item;
        }
        temp = temp->next;
    }
}


int linkedList::size()
{
    int count = 1;

    node* temp;
    temp = headptr;

    while( temp != nullptr )
    {
        if( temp->next == nullptr )
        {
            return count;
        }
        temp = temp->next;
        ++count;
    }
    return count;
}

bool linkedList::empty()
{
    if( headptr == nullptr )
        return true;
    else
        return false;
}

int linkedList::findPos( int target ) 
// will return the position of an item, and 0 if item is not found in the linked list
{
    node* temp;
    temp = headptr;

    int count = 1;

    while( temp != nullptr )
    {
        if( temp->item == target )
        {
            return count;
        }
        else
        {
            temp = temp->next;
            ++count;
        }
    }
    return 0;
}
