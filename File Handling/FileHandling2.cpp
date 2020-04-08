#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main();

class student
{
public:
    int rollno;
    char name[20];
    char branch[20];
    void getdata()
    {
        cout<<"Enter the Name: ";
        gets(name);
        cout<<"Enter the Roll No.: ";
        cin>>rollno;
        cout<<"Enter the Branch: ";
        cin>>branch;
    }
    void showdata()
    {
        cout<<"Hello "<<name<<"!"<<endl;
        cout<<"Your Roll No. is: "<<endl;
        cout<<"Your Branch is: "<<endl;
    }
    void enterdata()
    {
        student s;
        fstream f;
        f.open("student.dat",ios::app|ios::binary);
        int n;
        cout<<"Enter the number of Data You Want to Enter: ";
        cin>>n;
        if(f.fail())
        {
            cout<<"Error in Opening the File...";
            //return 0;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                getdata();
                f.write((char *)&s,sizeof(s));
            }
        }
        f.close();
        main();
    }
    void printdata()
    {
        fstream f;
        student s;
        f.open("student.dat",ios::in|ios::binary);
        while(!f.eof())
        {
            showdata();
            f.read((char *)&s,sizeof(s));
            {
                f.close();
                main();
            }
        }
    }
    void searchdata()
    {
        int num;
        cout<<"Enter the Roll No. that You Want to Search: ";
        cin>>num;
        student s;
        int count=0;
        fstream f;
        f.open("student.dat",ios::in|ios::binary);
        f.read((char *)&s,sizeof(s));
        while(!f.eof())
        {
            if(num==s.rollno)
            {
                count++;
                break;
            }
            else
                f.read((char *)&s,sizeof(s));
        }
        if(count==1)
        {
            cout<<"Record Found!!!";
            cout<<"Result of Student is:"<<endl;
            showdata();
        }
        else
        {
            cout<<"Record Not Found!!!";
        }
        main();
    }
    void deletedata()
    {
        int num;
        fstream f1,f2;
        student s;
        cout<<"Enter the Roll No of Student that You Want to Delete: ";
        cin>>num;
        f1.open("student.dat",ios::in|ios::binary);
        f1.seekg(0,ios::beg);
        f2.open("student.dat",ios::out|ios::binary);
        f1.read((char *)&s,sizeof(s));
        while(!f1.eof())
        {
            if(num==s.rollno)
            {
                f2.write((char *)&s,sizeof(s));
                f1.read((char *)&s,sizeof(s));
            }
            f1.close();
            f2.close();
            remove("student.dat");
        }
    }
    /*void editdata()
    {
        int num;
        cout<<"Enter the Roll No. that You Want to Edit: ";
        cin>>num;
        fstream f;
        student s;
        f.open("student.dat",ios::in|ios::binary);
        f.read((char *)&s,sizeof(s));
        while(!f.eof())
        {
            if(num==s.rollno)
            {
                getdata();
                int x=tellg();
                f.seekp(x*sizeof(s)-2(ios::beg));
                f.write((char *)&s,sizeof(s));
                cout<<"Record Edited!!!";
                break;
            }
            else
            {
                cout<<"Record Not Found!!!";
                f.close();
            }
            main();
        }*/

};
int main()
{
    int ch;
    student s1;
    cout<<"\n\n\tMain Menu"
        <<"\n*********"
        <<"1. Enter Data"<<endl
        <<"2. Print Data"<<endl
        <<"3. Search Data"<<endl
        <<"4. Delete Data"<<endl
        <<"5. Edit Data"<<endl
        <<"6. Exit The Program"<<endl
        <<"\nEnter Your Choice";
    cin>>ch;
    switch(ch)
    {
        case '1': s1.enterdata();
                  break;
        case '2': s1.printdata();
                  break;
        case '3': s1.searchdata();
                  break;
        case '4': s1.deletedata();
                  break;
        //case '5': editdata();
          //        break;
        case '6': return 0;
                  break;
        /*default:
        {
            cout<<"Wrong Choice!!!";
            return 0;
        }*/
    }
}
