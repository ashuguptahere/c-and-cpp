#include<iostream>
using namespace std;
int nc();
int cn();
int ASCII();
unsigned char ch;
int num;
int main()
{
    char choice;
    cout<<"1. Number to Character"<<endl
        <<"2. Character to Number"<<endl
        <<"3. To show ASCII table"<<endl
        <<"Please Enter Your Choice(1-2): ";
    cin>>choice;
    switch(choice)
    {
    case '1':
        nc();
        break;
    case '2':
        cn();
        break;
    case '3':
        ASCII();
    }
}
int nc()
{
    cout<<"Enter any Number: ";
    cin>>num;
    ch=num;
    cout<<"Character Code of "<<num<<" is: "<<ch;
}
int cn()
{
    cout<<"Enter any Character: ";
    cin>>ch;
    num=ch;
    cout<<"ASCII Code of "<<ch<<" is: "<<num;
}
int ASCII()
{
    for(int i=0;i<=255;i++)
    {
        num=ch;
        cout<<"ASCII CODE of \'"<<ch<<"\' is: "<<num<<endl;
        ch=ch+1;
    }
}
