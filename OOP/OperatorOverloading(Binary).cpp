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
    complex operator+(complex c)
    //complex add(complex c)
    {
        complex temp;
        temp.realp=realp+c.realp;
        temp.imagp=imagp+c.imagp;
        return temp;
    }
};
main()
{
   complex c1,c2,c3;
   c1.input(2,3);
   c2.input(4,5);
   c3=c1+(c2);
   //c3=c1.add(c2);
   c3.output();
}
