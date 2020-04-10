#include<iostream>

using namespace std;

class A
{
protected:
    int a,b;
public:
    void input()
    {
        cout<<"Enter the value of a & b: ";
        cin>>a>>b;
    }
};

class B:virtual public A
{
public:
    void calc()
    {
        int s=a+b;
        cout<<"Addition is: "<<s<<endl<<endl;
    }
};

class C:virtual public A
{
public:
    void calc()
    {
        int d=a-b;
        cout<<"Difference is: "<<d<<endl<<endl;
    }
};

class D:public B, public C
{
public:
    void calc()
    {
        int m=a*b;
        cout<<"Multiplication is: "<<m<<endl<<endl;
    }
};

int main()
{
    B b1;
    C c1;
    D d1;
    b1.input();
    b1.calc();
    c1.input();
    c1.calc();
    d1.input();
    d1.calc();
    return 0;
}
