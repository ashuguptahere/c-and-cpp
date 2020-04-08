#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int DisplayFileContents();
int CopyFileContents();
int MergeTwoFiles();
int CountTheContents();
int main()
{
    int ch;
    do
    {
        cout<<"\n1. Display the Contents of a File"<<endl
            <<"2. Copy Contents of File1 into File2"<<endl
            <<"3. Copy Contents of File1 & File2 into File3"<<endl
            <<"4. Count The Contents of a File"<<endl
            <<"5. Exit"<<endl
            <<"Enter Your Choice(1-5):";
        cin>>ch;
        switch(ch)
        {
            case 1: DisplayFileContents();
            break;
            case 2: CopyFileContents();
            break;
            case 3: MergeTwoFiles();
            break;
            case 4: CountTheContents();
            break;
        }
    }while(ch!=5);
}

int DisplayFileContents()
{
    char ch;
    fstream f1;
    char filename[20];
    cout<<"Enter Name of the File with Extension: ";
    cin>>filename;
    f1.open(filename,ios::in);
    while(!f1.eof())
    {
        ch=f1.get();
        cout<<ch;
    }
    cout<<endl;
    f1.close();
}

int CopyFileContents()
{
    char ch;
    fstream f1,f2;
    char file1[20];
    char file2[20];
    cout<<"Enter Name of File1 with Extension: ";
    cin>>file1;
    cout<<"Enter Name of File2 with Extension: ";
    cin>>file2;
    f1.open(file1,ios::in);
    f2.open(file2,ios::out);
    while(!f1.eof())
    {
        ch=f1.get();
        cout<<ch;
        f2.put(ch);
    }
    while(!f2.eof())
    {
        ch=f2.get();
        f2.put(ch);
    }
    f1.close();
    f2.close();
}

int MergeTwoFiles()
{
    fstream f1,f2,f3;
    char ch;
    f1.open("File1.txt",ios::in);
    f2.open("File2.txt",ios::in);
    f3.open("File3.txt",ios::out);
    if(f1.fail())
        cout<<"Error in Opening The File1... ";
    if(f2.fail())
        cout<<"Error in Opening The File2... ";
    if(f3.fail())
        cout<<"Error in Opening The File3... ";
    cout<<"\nContents of File1: ";
    while(!f1.eof())
    {
        ch=f1.get();
        cout<<ch;
        f3.put(ch);
    }
    cout<<"\nContents of File2: ";
    while(!f2.eof())
    {
        ch=f2.get();
        cout<<ch;
        f3.put(ch);
    }
    f3.close();
    f3.open("File3.txt",ios::in);
    cout<<"\n\n***Coping File1 &  File2 into File3***"<<endl;
    cout<<"Content of File3 is: ";
    while(!f3.eof())
    {
        f3.get(ch);
        cout<<ch;
    }
    cout<<endl<<endl;
    f1.close();
    f2.close();
    f3.close();
}

int CountTheContents()
{
    char filename[20];
    cout<<"Enter the Name of File with Extension: ";
    cin>>filename;
    fstream f;
    char ch;
    int vcount=0,spaces=0,ccount=0;
    f.open(filename,ios::in);
    while(!f.eof())
    {
        ch=f.get();
        for(int i=0;ch!='\0';i++)
        {
            if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
                vcount++;
            else if(ch==32)
                spaces++;
            else if(ch>=65&&ch<=90||ch>=97&&ch<=122)
                ccount++;
        }
    }
    cout<<"Vowel(s) in the string is: "<<vcount<<endl;
    cout<<"Space(s) in the string is: "<<spaces<<endl;
    cout<<"Consonant(s) in the string is: "<<ccount<<endl<<endl;
    f.close();
}
