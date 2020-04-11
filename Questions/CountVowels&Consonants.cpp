#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    fstream f;
    f.open("string.txt",ios::in);
    char str[80];   //string str;
    int vcount=0,spaces=0,ccount=0;
    //cout<<"Enter any String: ";
    //gets(str);      //getline(cin,str);
    while(!f.eof())
    {
        f>>str;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
                vcount++;
            else if(str[i]==32)
                spaces++;
            else if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
                ccount++;
        }
    }
    cout<<"Vowel(s) in the string is: "<<vcount<<endl;
    cout<<"Space(s) in the string is: "<<spaces<<endl;
    cout<<"Consonant(s) in the string is: "<<ccount<<endl;
    f.close();
}
