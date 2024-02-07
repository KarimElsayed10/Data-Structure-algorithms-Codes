#include "doubleLinkedList.h"
#include <iostream>
using namespace std;
doubleLinkedList::doubleLinkedList()
{
    length=0;
    lift=right=NULL;
}
void doubleLinkedList::insertLift(int element)
{
    Node *newNode=new Node;
    newNode->item=element;
    if(length==0)
    {
        newNode->next=newNode->prevece=NULL;
        lift=right=newNode;
    }
    else
    {
        newNode->next=lift;
        lift->prevece=newNode;
        newNode->prevece=NULL;
        lift=newNode;
    }
    length++;
}
void doubleLinkedList::insertRight(int element)
{
    Node *newNode=new Node;
    newNode->item=element;
    if(length==0)
    {
        newNode->next=newNode->prevece=NULL;
        lift=right=newNode;
    }
    else
    {
        newNode->next=NULL;
        newNode->prevece=right;
        right->next=newNode;
        right=newNode;
    }
    length++;
}
void doubleLinkedList::insertAtPosition(int position,int element)
{

    if(position<0||position>length)
    {
        cout<<"ERRO::Out Of Range"<<endl;
    }
    else if(position==0)
    {
        insertLift(element);
    }
    else if(position==length)
    {
        insertRight(element);
    }
    else
    {
        Node *newNode=new Node;
        newNode->item=element;
        Node*current=lift;
        Node*temp=lift->next;
        for(int i=1; i<position; i++)//2
        {
            current=current->next;//current=temp;
            temp=temp->next;//temp=current->next;
        }
        newNode->next=temp;
        newNode->prevece=current;
        current->next=newNode;
        temp->prevece=newNode;
        temp=current=NULL;
        delete temp;
        delete current;
        length++;
    }
}
void doubleLinkedList::insertAtPosition2(int position,int element)
{
    if(position<0||position>length)
    {
        cout<<"ERRO::Out Of Range"<<endl;
    }
    else if(position==0)
    {
        insertLift(element);
    }
    else if(position==length)
    {
        insertRight(element);
    }
    else
    {
        Node *newNode=new Node;
        newNode->item=element;
        Node*current=lift;
        for(int i=1; i<position; i++)//2
        {
            current=current->next;//current=temp;
        }
        newNode->prevece=current;
        newNode->next=current->next;
        current->next->prevece=newNode;
        current->next=newNode;
        current=NULL;
        delete current;
        length++;

    }
}
void doubleLinkedList::removeLift()
{
    if(length==0)
    {
        cout<<"The List Is Empty"<<endl;
    }
    else if(length==1)
    {
        lift=right=NULL;
        delete lift;
        delete right;
        length--;
    }
    else
    {
        Node*current=lift;
        lift=lift->next;
        current->next=NULL;
        lift->prevece=NULL;
        delete current;
        length--;

    }
}
void doubleLinkedList::removeRight()
{
    if(length==0)
    {
        cout<<"The List Is Empty"<<endl;
    }
    else if(length==1)
    {
        lift=right=NULL;
        delete lift;
        delete right;
        length--;
    }
    else
    {
        Node*current=right;
        right=right->prevece;
        current->prevece=right->next=NULL;
        delete current;
        length--;
    }
}
void doubleLinkedList::removeAtPosition(int position)
{
    if(position<0||position>=length)
    {
        cout<<"ERRO::Out Of Range"<<endl;
    }
    else if(position==0)
    {
        removeLift();
    }
    else if(position==length-1)
    {
        removeRight();
    }
    else
    {
        Node*temp=lift;
        Node*current=lift->next;
        for(int i=1; i<position; i++) //4
        {
            temp=current;
            current=current->next;
        }
        temp->next=current->next;
        current->next->prevece=temp;//current->next->prevece=current->prevece
        current->prevece=current->next=NULL;
        delete current;
        length--;

    }
}
int doubleLinkedList::search(int element)
{
    Node*current=lift;
    for(int i=0; i<length; i++)
    {
        if(current->item==element)
        {
            return i;
        }
        current=current->next;
    }
    return -1;
}
void doubleLinkedList::search2(int element)
{
    Node*current=lift;
    for(int i=0; i<length; i++)
    {
        if(current->item==element)
        {
            cout<<"The Element is Exist in position Number : "<<i<<endl;
            return;
        }
        current=current->next;

    }
    cout<<"The Element is`t Exist in List "<<endl;
}
void doubleLinkedList::sort()
{
    Node*current=lift;
    Node*test;
    while(current!=NULL)
    {
        test=current->next;
        while(test!=NULL)
        {
            if(current->item>test->item)
            {
                swap(current->item,test->item);
            }
            test=test->next;
        }
        current=current->next;
    }
}
void doubleLinkedList::reverse()
{
    Node*temp=lift;
    Node*current=lift->next;
    Node*test=current->next;
    while(current!=NULL)
    {
        if(temp==lift)
        {
            temp->prevece=current;
            temp->next=NULL;
            right=temp;
        }
        current->prevece=test;
        current->next=temp;
        temp=current;
        current=test;
        if(test!=NULL)
        {
            test=test->next;
        }
    }
    lift=temp;
}
void doubleLinkedList::print()
{
    Node*current=lift;
    while(current!=NULL)
    {
        cout<<current->item<<" ";
        current=current->next;
    }
    cout<<endl;
}
