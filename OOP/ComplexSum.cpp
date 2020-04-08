#include<iostream>
using namespace std;
class complex
{
    int realp,imagp;
public:
    void input();
    complex output(complex c1, complex c2);
    void sum();
};
void complex::input()
{
    cout<<"Enter the realp of CN: ";
    cin>>realp;
    cout<<"Enter the imagp of CN: ";
    cin>>imagp;
}
complex complex::output(complex c1, complex c2)
{
    complex t;
    t.realp=c1.realp+c2.realp;
    t.imagp=c1.imagp+c2.imagp;
    return t;
}
int main()
{
    complex c1,c2,c3,c4;
    c1.input();
    c2.input();
    c4=c3.output(c1,c2);
    c4.sum();
}
void complex::sum()
{
    cout<<"Sum is: "<<realp<<"+i"<<imagp;
}
