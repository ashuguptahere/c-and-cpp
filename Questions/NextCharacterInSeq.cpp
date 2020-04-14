#include<iostream>
using namespace std;
int main()
{
    int num;
    char ch;
    cout<<"Enter the Character between A to Z: ";
    cin>>ch;
    cout<<"Next Characters are: "<<endl;
    for(int i=0;i<=25;i++)
    {
        cout<<char(ch+i)<<endl;
    }
}
