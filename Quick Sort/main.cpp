#include<iostream>
using namespace std;
int partion1(int arr[],int l,int r)
{
    int i=l,j=r;
    int p=i;
    while(true)
    {
        while(arr[p]<=arr[j]&&i!=j)
        {
            j--;
        }
        if(i==j)
        {
            break;
        }
        else if(arr[p]>arr[j])
        {
            swap(arr[p],arr[j]);
            p=j;
            i++;//1
        }
        while(arr[p]>=arr[i]&&i!=j)
        {
            i++;
        }
        if(i==j)
        {
            break;
        }
        else if(arr[p]<arr[i])
        {
            swap(arr[p],arr[i]);
            p=i;
            j--;//2
        }
    }
    return p;
}
void quickSort1(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=partion1(arr,l,r);
        quickSort1(arr,l,p-1);
        quickSort1(arr,p+1,r);

    }
}

int partition2(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l+1;
    int j = h-1;
    while (i <= j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }
        if (i <= j)
            swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);
    return j;
}

void quickSort2(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition2(arr, l, h);
        quickSort2(arr, l, p);
        quickSort2(arr, p + 1, h);
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
    quickSort2(arr,0,9);
    print(arr,10);
    return 0;
}
