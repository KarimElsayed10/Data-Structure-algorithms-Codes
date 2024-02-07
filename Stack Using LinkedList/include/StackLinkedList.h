#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H
#include <iostream>
using namespace std;

class StackLinkedList
{
private:
    struct Node
    {
        int item;
        Node*next;
    };
    Node*top;
    int length;
public:
    bool isEmpty();
    void push(int element);
    void pop();
    int getTop();
    void getTop1();
    void print();
    StackLinkedList();
    virtual ~StackLinkedList();


};

#endif // STACKLINKEDLIST_H
