#include "Array.h"
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
Array::Array()
{
    lenght=0;
    arr=new int[10];
}
Array::Array(int size)
{
    lenght=0;
    this->size=size;
    arr=new int[size];
}
Array::~Array()
{
    delete []arr;
}
bool Array::isFull()
{
    return(lenght==size);
}
void Array::insertLast(int element)
{
    if(isFull())
    {
        cout<<"The Array is full Can`t Insert item :("<<element<<") in array"<<endl;
    }
    else
    {
        arr[lenght]=element;
        lenght++;
    }

}
void Array::insertAtPosition(int position,int element)
{
    if(isFull())
    {
        cout<<"The Array is full Can`t Insert item :("<<element<<") in array"<<endl;
    }
    else if(position<0||position>=size)
    {
        cout<<"Error::Out Of Range"<<endl;
    }
    else if(position==lenght)
    {
        insertLast(element);
    }
    else
    {
        for(int i=lenght; i>position; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[position]=element;
        lenght++;
    }


}
bool Array::isEmpty()
{
    return (lenght==0);
}
void Array::removeLast()
{
    if(isEmpty())
    {
        cout<<"The Array is Empty Can`t Remove Any Items"<<endl;
    }
    else
    {
        lenght--;
    }
}
void Array::removeAtPosition(int position)
{
    if(isEmpty())
    {
        cout<<"The Array is Empty Can`t Remove Any Items"<<endl;
    }
    else if(position<0||position>=size)
    {
        cout<<"Error::Out Of Range"<<endl;
    }
    else if(position==lenght-1)
    {
        removeLast();
    }
    else
    {
        for(int i=position; i<lenght-1; i++)
        {
            arr[i]=arr[i+1];
        }
        lenght--;
    }
}
void Array::reSize(int newSize)
{
    int *newArr=new int[newSize];
    for(int i=0; i<min(newSize,size); i++)
    {
        newArr[i]=arr[i];
    }
    delete[]arr;
    arr=newArr;
    size=newSize;
    lenght=size;

}
void Array::sort()
{
    for(int i=0; i<lenght; i++)
    {
        for(int j=i+1; j<lenght; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
void Array::print()
{
    for(int i=0; i<lenght; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}







