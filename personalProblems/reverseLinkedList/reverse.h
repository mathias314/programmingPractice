#include <iostream>
#include <string>

using namespace std;

class linkedList
{
private:
    struct node
    {
        int item;
        node* next;
    };
    node* headptr;

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
    void recReverse( node* curr, node* prev, node** head );

    void recUtil();

};
