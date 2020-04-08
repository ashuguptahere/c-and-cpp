//first create three files namely File1.txt, File2.txt and File3.txt
//Put entries in the File1.txt and File2.txt
//This Program will copy Contents of File1 and File2 into File3
#include<iostream>
#include<fstream>
using namespace std;
int main()
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
    while(!f1.eof())
    {
        ch=f1.get();    //f1.get(ch);
        cout<<ch;
        f3.put(ch);     //f3<<ch;
    }
    while(!f2.eof())
    {
        ch=f2.get(); //f2.get(ch);
        cout<<ch;
        f3.put(ch); //f3<<ch;
    }
    f3.close();
    f3.open("File3.txt",ios::in);
    cout<<"\n\n***Coping File1 &  File2 into File3***"<<endl;
    cout<<"Merged String is: ";
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
