#include<iostream>
#include<cstdio>

using namespace std;

char* stringaddition(char a[],char b[],char c[])
{
    int i=0,j=0;
    cout<<"Addition of Two String is:"<<endl;
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0')
    {
        c[i]=b[j];
        i++;
        j++;
    }
    c[i]='\0';
    return c;
}

int main()
{
    char a[100],b[100],c[200];
    cout<<"Enter String 1: ";
    gets(a);
    cout<<"Enter String 2: ";
    gets(b);
    char* x=stringaddition(a,b,c);
    cout<<x;
}
