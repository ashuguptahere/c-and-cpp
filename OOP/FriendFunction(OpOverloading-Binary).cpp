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
        cout<<"Addition of Complex No. is: "<<realp<<"+i"<<imagp;
        else if(imagp==0)
        cout<<"Addition of Complex No. is: "<<realp<<"+i"<<imagp;
        else
        cout<<"Addition of Complex No. is: "<<realp<<"-i"<<-imagp;
    }
    friend complex operator+(complex ,complex);
};
complex operator+(complex a,complex b)
{
    complex temp;
    temp.realp=a.realp+b.realp;//realp & imagp belongs caller object
    temp.imagp=a.imagp+b.imagp;//always one object is passed more comparison to Operator Overloading
    return temp;
}
main()
{
    complex c1,c2,c3;
    c1.input(2,-3);
    c2.input(6,3);
    c3=c1+c2;
    //c3=operator+(c1,c2);
    c3.output();
}
