#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    char ch1,ch2;
    fstream f1,f2;
    f1.open("string.txt",ios::out);
    if(f1.fail())
        cout<<"Error in Creating \'string.txt File...";
    f1<<"Hello World!!!";
    f1.close();
    f2.open("string.txt",ios::in);
    //f2.get(ch2);
    //f2.seekg(0,ios::beg);
    //f2.seekp(0,ios::end);
    while(!f2.fail())
    {
        f2.get(ch2);
        cout<<ch2;
    }
    f2.close();
}
