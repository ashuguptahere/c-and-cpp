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
    friend void function(complex ,complex );
};

void function(complex a,complex b)
{
    if(a.imagp+b.imagp>0)
    cout<<"Addition of Complex No. is: "<<a.realp+b.realp<<"+i"<<a.imagp+b.imagp;
    else if(a.imagp+b.imagp==0)
    cout<<"Addition of Complex No. is: "<<a.realp+b.realp<<"+i"<<a.imagp+b.imagp;
    else
    cout<<"Addition of Complex No. is: "<<a.realp+b.realp<<"-i"<<-(a.imagp+b.imagp);
}

main()
{
    complex c1,c2;
    c1.input(2,-3);
    c2.input(6,3);
    function(c1,c2);
}
