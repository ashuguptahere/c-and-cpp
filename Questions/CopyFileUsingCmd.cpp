#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
    if(argc!=3)
    {
        cout<<"Kindly Enter a Valid number of Arguments...";
        return 0;
    }
    else
    {
        fstream f1,f2;
        f1.open(argv[1],ios::in);
        f2.open(argv[2],ios::out);
        char str[80];
        while(!f1.eof())
        {
            f1>>str;
            f2<<str;
        }
        cout<<"\t1 file copied...\n";
        f1.close();
        f2.close();
    }
}
