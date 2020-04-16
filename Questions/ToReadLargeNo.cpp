#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[1000];
    int arr[1000];
    int i=0, m=0;
    cout<<"Enter any number: ";
    cin>>ch;

    while(ch[i]!='\0')
    {
        //cout<<ch[i]<<" ";
        arr[i] = (int)ch;
        ++m;
        i++;
    }

    // same logic using for loop
    /*for(int i=0; i<strlen(ch); i++)
    {
        cout<<ch[i]<<endl;
        arr[i] =(int)ch;
        ++m;
    }*/

    cout<<"\nSize of the array: "<<m;
}



//for(int i=0; i<strlen(ch); i++)
        //cout<<arr[i]<<" ";
