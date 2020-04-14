//Finding the Majority of the element of the Array

#include<iostream>
using namespace std;
int main()
{
    int a[10], n;
    cout<<"Enter the number of terms for Array: ";
    cin>>n;
    cout<<"Enter the elements for the Array: ";
    for(int i=0; i<n; i++)
        cin>>a[i];

    int flag = 0;
    int p = n/2;

    for(int i=0; i<n; i++)
    {
        int count = 0;
        for(int j=0; j<n; j++)
        {
            if(a[j] == a[i])
                count++;
        }
        if(count > p)
        {
            cout<<"Majority Element of the Array is: "<<a[i];
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<"No majority element is found...";
}
