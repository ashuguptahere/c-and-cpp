#include<iostream>
using namespace std;
class complex
{
    float realp,imagp;
public:
    void input(int x,int y)
    {
        realp=x;
        imagp=y;
    }
    void output()
    {
        if(imagp>0)
        cout<<"Complex No. is: "<<realp<<"+i"<<imagp;
        else if(imagp==0)
        cout<<"Complex No. is: "<<realp<<"+i"<<imagp;
        else
        cout<<"Complex No. is: "<<realp<<"-i"<<-imagp;
    }
    friend complex operator-(complex);
};
complex operator-(complex a)
{
    complex temp;
    temp.realp=-a.realp;//realp & imagp belongs caller object
    temp.imagp=-a.imagp;//always one object is passed more comparison to Operator Overloading
    return temp;
}
main()
{
    complex c1,c2;
    c1.input(2,-3);
    c2=-c1;
    //c2=operator-(c1);
    c2.output();
}
