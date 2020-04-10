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
        cout<<"Addition of Complex No. is: "<<realp;
        else
        cout<<"Addition of Complex No. is: "<<realp<<"-i"<<-imagp;
    }
    complex operator -()
    {
        complex temp;
        temp.realp=-realp;
        temp.imagp=-imagp;
        return temp;
    }
};

main()
{
   complex c1,c2;
   c1.input(2,6);
   c2=-c1;
   c2.output();
}
