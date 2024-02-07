#include "QueueArray.h"
#include <iostream>
using namespace std;
QueueArray::QueueArray(int size)
{
    this->size=size;
    arr=new int[size];
    length=0;
    front=0;
    rear=size-1;
}
QueueArray::~QueueArray()
{
    delete[]arr;
}
bool QueueArray::isEmpty()
{
    return length==0;
}
bool QueueArray::isFull()
{
    return  length==size;
}
void QueueArray::enQueue(int element)//40
{
    if(isFull())
    {
        cout<<"The Queue is Full Can`t Insert Items"<<endl;
    }
    else
    {
        rear=(rear+1)%size;
        arr[rear]=element;
        length++;
    }

}
void QueueArray::deQueue()
{
    if(isEmpty())
    {
        cout<<"The Queue is Empty Can`t Remove Items"<<endl;
    }
    else
    {
        front=(front+1)%size;
        length--;
    }
}
int QueueArray::getSize()
{
    return length;
}
int QueueArray::getFront()
{
    return arr[front];
}
int QueueArray::getRear()
{
    return arr[rear];
}
void QueueArray::sort()//Bubble Sort
{
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<(length-i); j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void QueueArray::print()
{
    for(int i=front; i<rear; i=(i+1)%size)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[rear]<<endl;
}
