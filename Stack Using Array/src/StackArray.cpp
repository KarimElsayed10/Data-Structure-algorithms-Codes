#include "StackArray.h"
#include <iostream>
using namespace std;
StackArray::StackArray(int size=100)
{
    top=-1;
    this->size=size;
    arr=new int[size];
}
void StackArray::push(int element)
{
    if(isFull())
    {
        cout<<"The Stack is Full Can`t Insert element number : "<<element<<endl;
    }
    else
        arr[++top]=element;
}
void StackArray::pop()
{
    if(isEmpty())
    {
        cout<<"The Stack is Empty Can`t Remove elements"<<endl;
    }
    else
        top--;
}
int StackArray::getTop()
{
    if(isEmpty())
    {
        cout<<"The Stack is Empty Can`t Remove elements"<<endl;
    }
    else
        return arr[top];
}
void StackArray::getTop1()
{
    if(isEmpty())
    {
        cout<<"The Stack is Empty Can`t Remove elements"<<endl;
    }
    else
        cout<<"The Value of top is : "<<arr[top]<<endl;
}
bool StackArray::isFull()
{
    return top==size-1;
}
bool StackArray::isEmpty()
{
    return top==-1;
}
StackArray::~StackArray()
{
    delete[]arr;
}
void StackArray::print()
{
    cout<<"The Size of Stack is : "<<size<<endl;
    for(int i=top; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
