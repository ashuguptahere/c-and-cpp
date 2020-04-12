#include<iostream>
using namespace std;

int ascending(int arr[], int size)
{
    //int arr2[size];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[j]>arr[j++])
                swap(arr[j], arr[j++]);
        }
    }
    return arr;
}

int descending(int arr[], int size)
{
    //int arr2[size];
    for(int i=size;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(arr[j]<arr[j++])
            swap(arr[j], arr[j++]);
        }
    }
    return arr;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int size = sizeof(arr)/sizeof(int)/2;
    ascending(arr[], size);
    descending(arr[], size);
}
