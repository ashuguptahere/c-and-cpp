#include<fstream>
#include<iostream>
using namespace std;
class student
{
    char name[20];
    char branch[20];
    int rollno;
public:
    void getdata();
    void showdata();
    void menu();
};

void student::menu()
{
    cout<<"\tMain Menu"<<endl
        <<"\t*********"<<endl<<endl
        <<"1. Enter Data"<<endl
        <<"2. Search a Record"<<endl
        <<"3. Modify a Record"<<endl
        <<"4. Delete a Record"<<endl
        <<"5. Exit a Record"<<endl;
}

void student::getdata()
{
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Your Branch: ";
    cin>>branch;
    cout<<"Enter Your Roll No.: ";
    cin>>rollno;
    cout<<endl;
}

void student::showdata()
{
    cout<<"Hello "<<name<<"!"<<endl;
    cout<<"Your Branch: "<<branch<<endl;
    cout<<"Your Roll No.: "<<rollno<<endl<<endl;
}

int main()
{
    student s;
    s.menu();
    int choice;
    cout<<"Enter Your Choice: ";
    cin>>choice;
    switch(choice)
    {
    case '1':
        {
            fstream f;
            f.open("student.dat",ios::app|ios::binary);
            if(f.fail())
            {
                cout<<"Unable to Open The File...";
                return 0;
            }
            else
            {
                s.getdata();
                f.write((char *)&s,sizeof(s));
            }
            f.close();
            f.open("student.dat",ios::in|ios::binary);
            while(!f.eof())
            {
                f.read((char*)&s,sizeof(s));
                s.showdata();
            }
        }
    }
    return 0;
}
