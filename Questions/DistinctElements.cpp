#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,2,3,4,1,2,3,2,5,6,7,3,1,2,3,1,2,3,4,5,6,7,8,9,0};
    cout<<"Size of array: "<<sizeof(arr)<<endl;
    cout<<"Number of elements: "<<sizeof(arr)/sizeof(int)<<endl;
    cout<<"Size of individual element: "<<sizeof(int)<<" (int)"<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        for(int j=0;j<sizeof(arr)/sizeof(int);j++)
        {
            if(i!=j)
                if(arr[i]==arr[j])
                    break;
            if(i==j)
                cout<<arr[i]<<" ";
        }
    }
}
