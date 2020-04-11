#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="This is some random text...";
    string s2;
    string s3;

    //Coping String
    cout<<"COPING STRINGS"<<endl;
    s2=s1;
    s3.assign(s1);
    cout<<"S1: "<<s1<<endl<<"S2: "<<s2<<endl<<"S3: "<<s3<<endl<<endl;

    //Finding Specific Index in String
    cout<<"Fourth character of the String is: "<<s1.at(3)<<endl<<endl;

    //Looping String
    cout<<"Printing String in for loop: ";
    for(int i=0;i<s1.length();i++)
        cout<<s1.at(i);
    cout<<endl;

    //Sub-String
    cout<<"\nSub-String: "<<s1.substr(13,6)<<endl<<endl;

    //Swapping String
    string s4("Google.com");
    string s5("Yahoo.com");
    cout<<"SWAPPING STRING"<<endl;
    cout<<"Original String: "<<s4<<' '<<s5<<endl;
    s4.swap(s5);
    cout<<"Modified String: "<<s4<<' '<<s5<<endl<<endl;

    //Finding String
    string s6="ham is spam oh yes i am!!!";
    cout<<"FINDING STRING"<<endl;
    cout<<s6.find("am")<<endl;
    cout<<s6.rfind("am")<<endl<<endl; //Reverse Find

    //Erasing String
    string s7("Hi my name is ASH and i like riding bicycle!!!");
    cout<<"ERASING STRING"<<endl;
    cout<<"Original String: "<<s7<<endl;
    cout<<"Erased String: "<<s7.erase(17)<<endl<<endl;

    //Replacing String
    cout<<"REPLACING STRING"<<endl;
    cout<<"Original String: "<<s7<<endl;
    cout<<"Replaced String: "<<s7.replace(0,2,"Hello!!! ")<<endl<<endl;

    //Insert into String
    cout<<"INSERTING INTO STRING"<<endl;
    cout<<"Original String: "<<s7<<endl;
    cout<<"Inserted String: "<<s7.insert(21,"Mr. ")<<endl<<endl;
}
