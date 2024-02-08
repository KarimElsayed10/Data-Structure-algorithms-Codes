#include <iostream>
using namespace std;
void leanerSearch(int arr[],int s,int element)
{
    int test=0;
    for(int i=0; i<s; i++)
    {
        if(arr[i]==element)
        {
            cout<<"The Element : "<<element<<" Is Founded in position : "<<i<<endl;
            test=1;
            break;
        }
    }
    if(test==0)
    {
        cout<<"The Element : "<<element<<" Is`n Founded"<<endl;
    }
}
int main()
{
    int arr[]= {1,5,4,3,8,9,7};
    leanerSearch(arr,7,20);

    return 0;
}
