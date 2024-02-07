#include "StackLinkedList.h"
#include <iostream>
using namespace std;
StackLinkedList::StackLinkedList()
{
    top=NULL;
    length=0;
}
bool StackLinkedList::isEmpty()
{
    return length==0;//top=NULL
}


void StackLinkedList::push(int element)
{
    Node*newNode=new Node;
    newNode->item=element;
    newNode->next=top;
    top=newNode;
    length++;
}
void StackLinkedList::pop()
{
    if(isEmpty())
    {
        cout<<"The Stack is Empty Can`t Remove elements"<<endl;
    }
    else
    {
        Node*current=top;
        top=top->next;
        current->next=NULL;
        delete current;
        length--;
    }

}
int StackLinkedList::getTop()
{
    if(isEmpty())
    {
        cout<<"The Stack is Empty Can`t Remove elements"<<endl;
    }
    else
        return top->item;
}
void StackLinkedList::getTop1()
{
    if(isEmpty())
    {
        cout<<"The Stack is Empty Can`t Remove elements"<<endl;
    }
    else
        cout<<"The Value of top is : "<<top->item<<endl;
}
void StackLinkedList::print()
{
    Node*current=top;
    while(current!=NULL)
    {
        cout<<current->item<<" ";
        current=current->next;
    }
    cout<<endl;
}
StackLinkedList::~StackLinkedList()
{

}
