#include<iostream>
using namespace std;

int BinarySearch(int a[], int n, int item)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while(low<=high)
    {
        mid = (low + high) / 2;
        if(item == a[mid])
            return mid;
        else if(item > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int LinearSearch(int a[], int n, int item)
{

}

int main()
{
    int a[5], item, n, temp = 0, i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements for the array:\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array is:\n";
    for(i=0;i<n;i++)
        cout<<a[i];

    cout<<"Enter the number that you want to search: ";
    cin>>item;

    int result = BinarySearch(a, n, item);
    if(result >= 0)
        cout<<"The number "<<a[result]<<" is found at "<<result<<" index...";
    else
        cout<<"The number is not present in the list...";
}
