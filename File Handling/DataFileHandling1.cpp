#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream o1;
    o1.open("temp2.txt",ios::out);
    char name[20];
    int rollno;
    cout<<"\nEnter of Name:";
    cin>>name;
    cout<<"Enter Roll no:";
    cin>>rollno;
    o1<<name<<"\n"<<rollno;
    o1.close();
    o1.open("temp2.txt",ios::in);
    o1>>name>>rollno;
    cout<<"\n Name\t\t:"<<name<<"\n Roll no\t:"<<rollno;
    o1.close();
}
