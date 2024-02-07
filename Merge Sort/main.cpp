#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)//7
{
    int n1=m-l+1;//4
    int n2=r-m;//3
    int *lift=new int[n1];//4
    int *right=new int[n2];//3
    for(int i=0; i<n1; i++)
    {
        lift[i]=arr[i+l];
    }
    for(int i=0; i<n2; i++)
    {
        right[i]=arr[m+1+i];
    }
    int i=0,j=0;
    int k=l;//0

    while(i<n1&&j<n2)
    {
        if(lift[i]<=right[j])
        {
            arr[k]=lift[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=lift[i];
        i++,k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++,k++;
    }

}
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);//lift subArray
        mergeSort(arr,m+1,r);//right subArray
        merge(arr,l,m,r);
    }
}
int print(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10]= {4,85,6,8,2,4,9,7,3,10};
    mergeSort(arr,0,9);
    print(arr,10);



    return 0;

}
