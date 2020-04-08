#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f1,f2;
    char ch1;
    char ch2;
    f1.open("string.txt",ios::in);
    f2.open("string2.txt",ios::out);
    if(f1.fail())
        cout<<"Error in Opening The File1... ";
    if(f2.fail())
        cout<<"Error in Opening The File2... ";
    //f1>>ch1;
    while(!f1.eof())
    {
        ch1=f1.get();
        cout<<ch1;
        f2>>ch1;
    }
    f2.seekp(0,ios::beg);
    while(!f2.eof())
    {
        ch2=f2.get();
        cout<<ch2;
        f2<<ch2;
    }
    f1.close();
    f2.close();
}
