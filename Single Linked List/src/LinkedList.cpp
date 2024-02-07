#include "LinkedList.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList()
{
    lift=right=NULL;
    lenght=0;
}
LinkedList::~LinkedList()
{

}
void LinkedList::insertLift(int element)
{
    Node*newNode=new Node;
    newNode->item=element;
    if(lenght==0)
    {
        newNode->next=NULL;
        lift=right=newNode;
    }
    else
    {
        newNode->next=lift;
        lift=newNode;
    }
    lenght++;
}
void LinkedList::insertRight(int element)
{
    Node*newNode=new Node;
    newNode->item=element;
    if(lenght==0)
    {
        newNode->next=NULL;
        lift=right=newNode;
    }
    else
    {
        newNode->next=NULL;
        right->next=newNode;
        right=newNode;
    }
    lenght++;
}
void LinkedList::insertCirculuer(int element)
{
    Node*newNode=new Node;
    newNode->item=element;
    if(lenght==0)
    {
        newNode->next=NULL;
        lift=right=newNode;
    }
    else
    {
        newNode->next=lift;
        right->next=newNode;
        right=newNode;
    }
    lenght++;
}
void LinkedList::insertAtPosition(int position,int element)
{
    Node*current=lift;
    if(position<0||position>lenght)
        cout<<"ERRO::Out Of Range"<<endl;
    else if(position==0)
        insertLift(element);
    else if(position==lenght)
        insertRight(element);
    else
    {
        Node*newNode=new Node;
        newNode->item=element;
        for(int i=0; i<position-1; i++)
        {
            current=current->next;
        }
        newNode->next=current->next;
        current->next=newNode;
        lenght++;
    }
}
int LinkedList::search(int element)
{
    Node*current=lift;
    for(int i=0; i<lenght; i++)
    {
        if(current->item==element)
        {
            return i;
        }
        current=current->next;
    }
    return -1;
}
void LinkedList::reverse()
{
    Node*prevece=NULL;
    Node*current=lift;
    Node*next;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prevece;
        prevece=current;
        current=next;
    }
    lift=prevece;
}
void LinkedList::removeLift()
{
    if(lenght==0)
    {
        cout<<"The List Is Empty Can`t Remove Elements"<<endl;
    }
    else if(lenght==1)
    {
        delete lift;
        lift=right=NULL;
        lenght--;
    }
    else
    {
        Node*current=lift;
        lift=lift->next;
        current->next=NULL;
        delete current;
        lenght--;
    }

}
void LinkedList::removeRight()
{
    if(lenght==0)
    {
        cout<<"The List Is Empty Can`t Remove Elements"<<endl;
    }
    else if(lenght==1)
    {
        delete lift;
        lift=right=NULL;
        lenght--;
    }
    else
    {
        Node*current=lift;
        while(current->next!=right)
        {
            current=current->next;
        }
        right=current;
        current=current->next;
        delete current;
        right->next=NULL;
        lenght--;
    }
}
void LinkedList::removeAtPosition(int position)
{
    if(position<0||position>=lenght)
        cout<<"ERRO::Out Of Range"<<endl;
    else if(position==0)
        removeLift();
    else if(position==lenght-1)
        removeRight();
    else
    {
        Node*prevece=lift;
        Node*current=lift->next;
        for(int i=0; i<position-1; i++) //2
        {
            prevece=current;
            current=current->next;
        }
        prevece->next=current->next;
        current->next=NULL;
        delete current;
    }
}

void LinkedList::print()
{
    Node *print=lift;
    while(print!=NULL)
    {
        cout<<print->item<<" ";
        print=print->next;
    }
    cout<<endl;
}
