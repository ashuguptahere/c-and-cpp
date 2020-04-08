#include<iostream>
using namespace std;
//int ch;
class complex
{
    int realp,imagp;
public:
    int input();
    int display();
    void output(complex c1,complex c2,complex c3,int a);
};
int complex::display()
{
    int ch;
    cout<<"\tMENU"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Enter Your Choice (1-4):"<<endl;
    cin>>ch;
    return ch;
}
int complex::input()
{
    cout<<"Enter the Real Part";
    cin>>realp;
    cout<<"Enter the Imaginary Part";
    cin>>imagp;
}
void complex::output(complex c1,complex c2,complex c3,int a)
{
    //int a;
    switch(a)
    {
    case 1:
        c3.realp=c1.realp+c2.realp;
        c3.imagp=c1.imagp+c2.imagp;
        cout<<"Addition of Complex no is:"<<c3.realp<<"+i"<<c3.imagp;
        break;
    case 2:
        c3.realp=c1.realp-c2.realp;
        c3.imagp=c1.imagp-c2.imagp;
        if(c3.imagp>=0)
            cout<<"Subtraction of Complex no is:"<<c3.realp<<"+i"<<c3.imagp;
        else
            cout<<"Subtraction of Complex no is:"<<c3.realp<<"-i"<<-c3.imagp;
        break;
    case 3:
        c3.realp=(c1.realp*c2.realp)-(c1.imagp*c2.imagp);
        c3.imagp=(c1.realp*c2.imagp)+(c1.imagp*c2.realp);
        if((c2.realp*c2.realp+c2.imagp*c2.imagp)!=0)
            cout<<"Multiplication of Complex no is:"<<c3.realp<<"+i"<<c3.imagp;
        else
            cout<<"Multiplication of Complex no is:"<<c3.realp<<"-i"<<c3.imagp;
        break;
    case 4:
        c3.realp=((c1.realp*c2.realp)+(c1.imagp*c2.imagp))/(c2.realp*c2.realp+c2.imagp*c2.imagp);
        c3.imagp=((c1.realp*c2.imagp)+(c1.imagp*c2.realp))/(c2.realp*c2.realp+c2.imagp*c2.imagp);
        if((c2.realp*c2.realp+c2.imagp*c2.imagp!=0)&&(c1.realp&&c1.imagp!=c2.realp&&c2.imagp))
            cout<<"Division of Complex no is:"<<c3.realp<<"+i"<<c3.imagp;
        else if(c1.realp&&c1.imagp==c2.realp&&c2.imagp)
            cout<<"Division of Complex no is:1";
        else if(c2.realp*c2.realp+c2.imagp*c2.imagp==0)
            cout<<"Division Error...";
        break;
    default:
        cout<<"You've Entered a Wrong Choice";
    }
}
int main()
{
    complex c1,c2,c3,d;
    //int ch;
    int a=d.display();
    c1.input();
    c2.input();
    c3.output(c1,c2,c3,a);
}
