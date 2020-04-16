#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    clrscr();
    char text[20];
    ofstream f0;
    f0.open("temp3.txt");
    cout<<"\n Enter text :";
    gets(text);
    f0<<text;
    f0.close();
    void lower();
    lower();
    getch();
}
void lower()
{
    char ch;
    ifstream f1;
    f1.open("temp3.txt");
    while(!f1.eof())
    {
        f1.get(ch);
        if(ch>=65 &&ch<=91)
        ch=ch+32;
        cout<<ch;
    }
}
