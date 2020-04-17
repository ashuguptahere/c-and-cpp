#include<iostream>
using namespace std;

template <class T>
class SUM
{
    T a;
    T b;
public:
    void input()
    {
        cout<<"Enter the value of a & b: ";
        cin>>a>>b;
    }
    void sum()
    {
        T c;
        c=a+b;
        cout<<"Sum is: "<<c<<endl<<endl;
    }
};

int main()
{
    SUM <int> a1;
    a1.input();
    a1.sum();
    SUM <float> a2;
    a2.input();
    a2.sum();
}
