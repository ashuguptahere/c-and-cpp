//Friend function can become friend to more than one class

#include<iostream>

using namespace std;

class complex2;

class complex1
{
    float realp,imagp;
public:
    void input(int a,int b)
    {
        realp=a;
        imagp=b;
    }
    friend void function(complex1 ,complex2);
};

class complex2
{
    float realp,imagp;
public:
    void input(int c,int d)
    {
        realp=c;
        imagp=d;
    }
    friend void function(complex1 ,complex2);
};

void function(complex1 c3,complex2 c4)
{
    if(c3.imagp+c4.imagp>0)
    cout<<"Addition of Complex No. is: "<<c3.realp+c4.realp<<"+i"<<c3.imagp+c4.imagp;
    else if(c3.imagp+c4.imagp==0)
    cout<<"Addition of Complex No. is: "<<c3.realp+c4.realp<<"+i"<<c3.imagp+c4.imagp;
    else
    cout<<"Addition of Complex No. is: "<<c3.realp+c4.realp<<"-i"<<-(c3.imagp+c4.imagp);
}

main()
{
    complex1 c1;
    complex2 c2;
    c1.input(2,-3);
    c2.input(6,3);
    function(c1,c2);
}
