/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SCHOOL MANAGEMENT PROGRAM
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

//For students
struct student
{
     string SName;                  //Student's Last Name
     string SRollno;                //Student's Roll No.
     string SClass;                 //Student's Class Info
     string SSection;               //Student's Section
     string SRegNo;                 //Student's Registration No.
     string SAttend;                //Student's Attendance
     string STransport;             //Student's Transportation
}StudentData;                       //Variable of Student Type

//For teachers
struct teacher
{
     string TName;                  //Teacher's Last Name
     string TID;                    //Teacher's ID
     string TQualification;         //Teacher's Qualification
     string TExp;                   //Teacher's Experience
     string TSubject;               //Subject whose he/she teach
     string TTransport;             //Teacher's Transportation
     string TSalary;                //Teacher's Salary
}TeacherData[50];                   //Variable of Teacher Type

struct Syllabus
{
    string class1;                 //Student's Class;
};

///////////////////////////////////////////////////
//Main function

int main()
{
    int i=0,j;//for processing usage
    char choice;//for getting choice
    string find;//for sorting
    string srch;

    while(1)//outer loop
    {
        system("cls");//Clear screen
        label1:
        //Level 1-Display process
        cout<<"***********************************************************************************************";
        cout<<"\n\n\t\t\tPRIMARY SCHOOL MANAGEMENT SYSTEM\n\n";
        cout<<"***********************************************************************************************";
        cout<<"\n\n\n\n\tMAIN MENU"<<endl;
        cout<<"\t*********\n\n\n";
        cout<<"1. Student's Information"<<endl;
        cout<<"2. Teacher's Information"<<endl;
        cout<<"3. Syllabus"<<endl;
        cout<<"4. Exam"<<endl;
        cout<<"5. Schedule"<<endl;
        cout<<"6. Exit Program"<<endl;
        cout<<"\nEnter Your Choice (1-6):";
        cin>>choice;
        system("cls");//Clear Screen

        switch(choice)//First Switch
        {
            case '1': //Student
            {
                while(1)//Inner Loop-1
                {
                    system("cls");//Clear Screen
                    //Level-2 display
                    cout<<"\t\t\tSTUDENT'S INFORMATION"<<endl;
                    cout<<"\t\t\t*********************\n\n\n";
                    cout<<"1. Create New Entry\n";
                    cout<<"2. Find And Display Entry\n";
                    cout<<"3. Goto Main Menu\n";
                    cout<<"\nEnter Your Choice (1-3):";
                    cin>>choice;

                    switch(choice)//Second switch
                    {
                        case '1'://Insert data
                        {
                            ofstream f1("student.txt",ios::app);
                            for( i=0;choice!='n';i++)
                            {
                                if((choice=='y')||(choice=='Y')||(choice=='1'))
                                {
                                    cout<<"Enter Student's Name: ";
                                    cin>>StudentData.SName;
                                    cout<<"Enter Student's Roll No.: ";
                                    cin>>StudentData.SRollno;
                                    cout<<"Enter Student's Class: ";
                                    cin>>StudentData.SClass;
                                    cout<<"Enter Student's Section: ";
                                    cin>>StudentData.SSection;
                                    cout<<"Enter Student's Registration Number: ";
                                    cin>>StudentData.SRegNo;
                                    cout<<"Enter Student's Total Attendance: ";
                                    cin>>StudentData.SAttend;
                                    cout<<"Enter Student's Transportation: ";
                                    cin>>StudentData.STransport;

                                    f1<<StudentData.SName<<endl
                                      <<StudentData.SRollno<<endl
                                      <<StudentData.SClass<<endl
                                      <<StudentData.SSection<<endl
                                      <<StudentData.SRegNo<<endl
                                      <<StudentData.SAttend<<endl
                                      <<StudentData.STransport<<endl;
                                    cout<<"Do You Want To Continue To Enter Data (Y/N): ";
                                    cin>>choice;
                                }
                            }
                            f1.close();
                        }
                        continue;//Control Back To Inner Loop-1
                        case '2'://Display Data
                        {
                            ifstream f2("student.txt");

                            cout<<"Enter The Roll No That You Want To Search: ";
                            cin>>find;
                            cout<<endl;
                            int notFound = 0;
                            for( j=0;(j<i)||(!f2.eof());j++)
                            {
                                getline(f2,StudentData.SRollno);
                                if(StudentData.SRollno==find)
                                {
                                    notFound = 1;
                                    cout<<"Student's Name: "<<StudentData.SName<<endl;
                                    //getline(f2,StudentData.SName);
                                    cout<<"Student's Roll No.: "<<StudentData.SRollno<<endl;
                                    //getline(f2,StudentData.SRollno);
                                    cout<<"Student's Class: "<<StudentData.SClass<<endl;
                                    //getline(f2,StudentData.SClass);
                                    cout<<"Student's Section: "<<StudentData.SSection<<endl;
                                    //getline(f2,StudentData.SSection);
                                    cout<<"Student's Registration No.: "<<StudentData.SRegNo<<endl;
                                    //getline(f2,StudentData.SRegNo);
                                    cout<<"Student's Attendance: "<<StudentData.SAttend<<endl;
                                    //getline(f2,StudentData.SAttend);
                                    cout<<"Student's Transportation: "<<StudentData.STransport<<endl;
                                }

                            }

                            if(notFound == 0)
                            {
                                cout<<"No Record Found..."<<endl;
                            }
                            f2.close();
                            cout<<"\nPress Any Key To Exit...";
                            _getch();//To hold data on screen
                        }
                        continue;//control back to inner loop -1
                        case '3'://Goto Main Menu
                        {
                            break;//Inner Switch Breaking
                        }
                        default:
                        {
                            cout<<"Wrong Choice...!!!";
                        }
                    }
                    break;//Inner Loop-1 Breaking
                }
                continue;//Control Pass To First Loop
            }
            case '2'://Teacher's Data
            {
                while(1)//Inner Loop-2
                {
                    system("cls");
                    //Level-2 Display process
                    cout<<"\t\t\tTEACHER'S INFORMATION"<<endl;
                    cout<<"\t\t\t*********************\n\n\n";
                    cout<<"1.Create New Entry\n";
                    cout<<"2.Find And Display\n";
                    cout<<"3.Goto Main Menu\n";
                    cout<<"Enter Your Choice (1-3): ";
                    cin>>choice;
                    switch(choice)//Third switch
                    {
                        case '1'://Insert data
                        {
                            ofstream t1("teacher.txt",ios::app);
                            for(i=0;choice!='n'&& choice!='N';i++)
                            {
                                if((choice=='y')||(choice=='Y')||(choice=='1'))
                                {
                                    cout<<"Enter Teacher's Name: ";
                                    cin>>TeacherData[i].TName;
                                    cout<<"Enter Teacher's EmpID: ";
                                    cin>>TeacherData[i].TID;
                                    cout<<"Enter Teacher's Qualification: ";
                                    cin>>TeacherData[i].TQualification;
                                    cout<<"Enter Teacher's Experience (year): ";
                                    cin>>TeacherData[i].TExp;
                                    cout<<"Enter Teacher's Main Subject: ";
                                    cin>>TeacherData[i].TSubject;
                                    cout<<"Enter Teacher's Transportation: ";
                                    cin>>TeacherData[i].TTransport;
                                    cout<<"Enter Teacher's Salary: ";
                                    cin>>TeacherData[i].TSalary;
                                    t1<<TeacherData[i].TName<<endl
                                      <<TeacherData[i].TID<<endl
                                      <<TeacherData[i].TQualification<<endl
                                      <<TeacherData[i].TExp<<endl
                                      <<TeacherData[i].TSubject<<endl
                                      <<TeacherData[i].TTransport<<endl
                                      <<TeacherData[i].TSalary<<endl;
                                    cout<<"Do You Want To Continue To Enter Data (Y/N): ";
                                    cin>>choice;
                                }//if
                            }//for loop
                            //for finding through name
                            system("cls");
                            t1.close();
                        }//case 1

                        continue;//Control pass to inner loop-2

                        case '2'://Display data
                        {
                            ifstream t2("teacher.txt");

                            cout<<"Enter Teacher's ID That You Want To Search: ";
                            cin>>find;
                            cout<<endl;
                            int notFound = 0;
                            for( j=0;((j<i)||(!t2.eof()));j++)
                            {
                                getline(t2,TeacherData[j].TName);
                                getline(t2,TeacherData[j].TID);
                                getline(t2,TeacherData[j].TQualification);
                                getline(t2,TeacherData[j].TExp);
                                getline(t2,TeacherData[j].TSubject);
                                getline(t2,TeacherData[j].TTransport);
                                getline(t2,TeacherData[j].TSalary);
                                if(TeacherData[j].TID==find)
                                {
                                    notFound = 1;
                                    cout<<"Teacher's Name: "<<TeacherData[j].TName<<endl;
                                    cout<<"Teacher's EmpID: "<<TeacherData[j].TID<<endl;
                                    cout<<"Teacher's Qualification: "<<TeacherData[j].TQualification<<endl;
                                    cout<<"Teacher's Experience: "<<TeacherData[j].TExp<<" Year"<<endl;
                                    cout<<"Teacher's Main Subject: "<<TeacherData[j].TSubject<<endl;
                                    cout<<"Teacher's Transportation: "<<TeacherData[j].TTransport<<endl;
                                    cout<<"Teacher's Salary: "<<TeacherData[j].TSalary<<endl;
                                }//if
                            }//for loop
                            t2.close();
                            if(notFound == 0)
                            {
                                cout<<"No Record Found..."<<endl;
                            }
                            cout<<"\nPress Any Key To Exit...";
                            _getch();//To Hold Data On Screen
                        }//case 2
                        continue;//Control pass to inner loop-2
                        case '3'://Goto Main Menu
                        {
                            break;//Inner Switch
                        }//Case 3
                        default:
                        {
                            cout<<"Wrong Choice...";
                        }
                    }//Inner Switch
                    break;//Inner While
                }//Inner Loop
                continue;//Control Pass to First Loops
            }//outer case 2
            case '3':
            {
                cout<<"\t\t\tSyllabus"<<endl;
                cout<<"\t\t\t********\n\n\n"<<endl;
                cout<<"1. Nersury"<<endl
                    <<"2. Kinder Garden"<<endl
                    <<"3. First Standard"<<endl
                    <<"4. Second Standard"<<endl
                    <<"5. Third Standard"<<endl
                    <<"6. Fourth Standard"<<endl
                    <<"7. Fifth Standard"<<endl
                    <<"\nEnter Your Choice (1-7): ";
                cin>>choice;
                switch(choice)
                {
                    case '1':
                    {
                        cout<<"English - A to J and a to j"<<endl;
                        cout<<"Hindi - "<<endl;
                        cout<<"Maths - 1 to 10"<<endl;
                        break;
                    }
                    case '2':
                    {
                        cout<<"English - A to Z and a to z"<<endl;
                        cout<<"Hindi - "<<endl;
                        cout<<"Maths - 1 to 100"<<endl;
                        break;
                    }
                    case '3':
                    {
                        cout<<"English - A to Z, a to z, Poem"<<endl;
                        cout<<"Hindi - All Written Syllabus"<<endl;
                        cout<<"Maths - Addition and Subtraction"<<endl;
                        break;
                    }
                    case '4':
                    {
                        cout<<"English - Chapter (1-8)"<<endl;
                        cout<<"Hindi - Chapter (1-9)"<<endl;
                        cout<<"Maths - Addition, Subtraction, Multiplication and Division, Chapter (1-9)"<<endl;
                        break;
                    }
                    case '5':
                    {
                        cout<<"English - A to Z, a to z & Chapter (2-9)"<<endl;
                        cout<<"Hindi - Chapter (2-12)"<<endl;
                        cout<<"Maths - Addition, Subtraction, Multiplication, Division, Table(2-20) & Chapter (2-11)"<<endl;
                        break;
                    }
                    case '6':
                    {
                        cout<<"English - Chapter (1-10)"<<endl;
                        cout<<"Hindi - Chapter (1-10)"<<endl;
                        cout<<"Maths - Chapter (1-10)"<<endl;
                        cout<<"EVS - Chapter (1-10)"<<endl;
                        break;
                    }
                    case '7':
                    {
                        cout<<"English - Chapter (1-10)"<<endl;
                        cout<<"Hindi - Chapter (1-10)"<<endl;
                        cout<<"Maths - Chapter (1-10)"<<endl;
                        cout<<"EVS - Chapter (1-10)"<<endl;
                        cout<<"Computer - Chapter (1-10)"<<endl;
                        break;
                    }
                    default:
                    {
                        cout<<"Wrong Choice...!!!"<<endl;
                    }
                    continue;
                }
                _getch();
            }//Outer Case 3
            case '4':
            {
                break;
            }
            case '5':
            {
                break;
            }
            case '6':
            {
                break;
            }
            /*default:
            {
                cout<<"Wrong Choice... Please Enter Your Choice Again...\n";
                goto label1;
            }*/
        }
        break;//Outer Loop
    }
}
