#include <iostream>
#include <string>

using namespace std;

class linkedList
{
public:
    linkedList();
    ~linkedList();

    bool insert( int item );
    void print( ostream& out );

    int findPos( int item );

    int size();
    bool empty();

    void clear();

    void itReverse();
    void recReverse();

private:
    struct node
    {
        int item;
        node* next;
    };
    node* headptr;
};
