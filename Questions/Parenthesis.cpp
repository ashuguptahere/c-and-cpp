#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    char a[20];
    int i=0;
    int osc=0,csc=0,occ=0,ccc=0,orc=0,crc=0,s,c,r;
    cout<<"Enter the string of parenthesis: ";
    cin>>a;
    while(a[i]!='\0')
    {
        if(a[i]=='[')
        {
            osc++;
        }
        else if(a[i]==']')
        {
            csc++;
        }
        else if(a[i]=='{')
        {
            occ++;
        }
        else if(a[i]=='}')
        {
            ccc++;
        }
        else if(a[i]=='(')
        {
            orc++;
        }
        else if(a[i]==')')
        {
            crc++;
        }
        i++;
    }
    cout<<"Total no of Open Square Bracket: "<<osc<<endl;
    cout<<"Total no of Open Curly Bracket: "<<occ<<endl;
    cout<<"Total no of Open Round Bracket: "<<orc<<endl;
    cout<<"Total no of Closed Square Bracket: "<<csc<<endl;
    cout<<"Total no of Closed Curly Bracket: "<<ccc<<endl;
    cout<<"Total no of Closed Round Bracket: "<<crc<<endl;
    i=0;
    s=(osc-csc);
    c=(occ-ccc);
    r=(orc-crc);
    cout<<"\n***Missing Brackets***\n";
    if(s<0)
        cout<<"Open Square Brackets is Missing..."<<-s<<endl;
    else if(s==0)
        cout<<"No Square Bracket is Missing..."<<endl;
    else
        cout<<"Close Square Brackets is Missing..."<<s<<endl;
    if(c<0)
        cout<<"Open Curly Brackets is Missing..."<<-c<<endl;
    else if(c==0)
        cout<<"No Curly Bracket is Missing..."<<endl;
    else
        cout<<"Close Curly Brackets is Missing..."<<c<<endl;
    if(r<0)
        cout<<"Open Round Brackets is Missing..."<<-r<<endl;
    else if(r==0)
        cout<<"No Round Bracket is Missing..."<<endl;
    else
        cout<<"Close Round Brackets is Missing..."<<r<<endl;
    /*for(len=0;a[len]!='\0';++len);
    for(i=0,j=len-1;i<len/2;++i,--j)
    //for(int i=0,j=len-1;str[i]!='\0';i++,j--)
    {
        if(a[i]=='{'&&a[j]=='}')
        {
            cout<<"Both Curly Brackets are present..."<<endl;
            //break;
        }
        else if(a[i]=='('&&a[j]==')')
        {
            cout<<"Both Round Brackets are present..."<<endl;
            //break;
        }
        else if(a[i]=='['&&a[j]==']')
        {
            cout<<"Both Square Brackets are present..."<<endl;
            //break;
        }
        else
        {
            cout<<"Kuch to gadbad hai...";
            break;
        }
    }
    //if(flag==0)
        //cout<<"Both Curly Brackets are present...";
    /*while(!f.eof())
    {
        ch=f.get();
        if()
    }*/
}
