#include<iostream>

using namespace std;

void BubbleSort(int a[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Array is: "<<endl;
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int a[100],size,i;
    cout<<"Enter the Size of Array: ";
    cin>>size;
    cout<<"Enter the Elements for the Array:"<<endl;
    for(i=0;i<size;i++)
        cin>>a[i];
    BubbleSort(a,size);
}
