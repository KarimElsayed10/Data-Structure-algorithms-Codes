#include "QueueLinkedList.h"
#include <iostream>
using namespace std;
QueueLinkedList::QueueLinkedList()
{
    front=rear=NULL;
    length=0;
}

QueueLinkedList::~QueueLinkedList()
{
    //dtor
}
void QueueLinkedList::enQueue(int element)
{
    Node*newNode=new Node;
    newNode->item=element;
    newNode->next=NULL;
    if(isEmpty())
    {
        front=rear=newNode;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;
    }
    length++;
}
void QueueLinkedList::deQueue()
{
    if(isEmpty())
    {
        cout<<"The Queue is Empty Can`t Remove Elements"<<endl;
    }
    else
    {
        Node*current=front;
        front=front->next;
        current->next=NULL;
        delete current;
        current=NULL;
        length--;
    }


}
bool QueueLinkedList::isEmpty()
{
    return length==0;
}
int QueueLinkedList::getSize()
{
    return length;
}
int QueueLinkedList::getFront()
{
    return front->item;
}
int QueueLinkedList::getRear()
{
    return rear->item;
}
void QueueLinkedList::print()
{
    if(isEmpty())
    {
        cout<<"The Queue is Empty Can`t Remove Elements"<<endl;
    }
    else
    {
        Node*current=front;
        while(current!=NULL)
        {
            cout<<current->item<<" ";
            current=current->next;
        }
    }
    cout<<endl;
}
void QueueLinkedList::clear()
{
    if(isEmpty())
    {
        cout<<"The Queue is Empty Can`t Remove Elements"<<endl;
    }
    else
    {
        Node*current=front;
        while(current!=NULL)
        {
            front=front->next;
            current->next=NULL;
            delete current;
            length--;
            current=front;
        }

    }
}
