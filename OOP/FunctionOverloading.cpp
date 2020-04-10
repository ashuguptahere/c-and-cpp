#include<iostream>
using namespace std;
class math
{
public:
    void display(int var)
    {
        cout<<"Integer Number: "<<var<<endl;
    }

    void display(float var)
    {
        cout<<"Float Number: "<<var<<endl;
    }

    void display(int var1, float var2)
    {
        cout<<"Integer Number: "<<var1;
        cout<<" and Float Number:"<<var2;
    }
};

int main()
{
    int a=5;
    float b=5.5;
    math m;
    m.display(a);
    m.display(b);
    m.display(a, b);
    return 0;
}



