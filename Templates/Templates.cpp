#include<iostream>
#include<conio.h>

using namespace std;

template <class X, class Y>
X big(X a, Y b)
{
    if(a>b)
        return a;
    else
        return b;
}

/*
double big(double a, double b)
{
    if(a>b)
        return a;
    else
        return b;
}
*/

int main()
{
    cout<<big(4, 5)<<endl;
    cout<<big(4.5, 5.5)<<endl;
    cout<<big(4, 5.5)<<endl;    //here is the error regarding X and Y class template, X data-type is returned here
}
