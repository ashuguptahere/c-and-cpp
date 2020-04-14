//Finding the Median of the Sorted Array

#include<iostream>
using namespace std;
int main()
{
    int a[10], temp, n;
    cout<<"Enter the number of element for the array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    cin>>a[i];

    //Bubble Sort

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"Sorted Array is: ";
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";

    //Finding Median of the Sorted Array

    float med;
    if(n%2 == 0)    //Even Number
    {
        med = float(a[(n-1)/2] + a[n/2])/2;
        //med = med/2;
        cout<<"Median of the Array is: "<<med;
    }
    else            //Odd Number
    {
        cout<<"Median of the Array is: "<<a[n/2];
    }
}
