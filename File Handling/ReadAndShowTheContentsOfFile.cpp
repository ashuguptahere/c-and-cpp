#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    fstream f1;
    f1.open("string.txt",ios::in);
    f1.get(ch);
    while(!f1.eof())
    {
        cout<<ch;
        f1.get(ch);
    }
    f1.close();
}