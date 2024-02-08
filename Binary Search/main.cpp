#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void binarySearch(int arr[],int l,int h,int element)
{
    int test=0;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]==element)
        {
            cout<<"The Element : "<<element<<" is Founded in position :"<<m<<endl;
            test=1;
            break;
        }
        else if(arr[m]<element)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    if(test==0)//l>h
    {
        cout<<"The Element is`t Founded"<<endl;

    }
}
int main()
{
    int arr[]= {1,5,6,7,8,2,4,11,9};
    sort(arr,arr+9);
    binarySearch(arr,0,8,4);
    return 0;
}
