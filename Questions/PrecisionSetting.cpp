#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cout<<"Enter the price in decimal: ";
    cin>>a;
    cout<<setprecision(2)<<"Round off to 2 digits only: "<<a<<endl;
    cout.setf(ios::scientific);
    cout<<setprecision(2)<<"Exponent of the given digit (with capital \'e'): "<<a<<endl;
    cout.setf(ios::uppercase);
    cout<<setprecision(2)<<"Exponent of the given digit (with capital \'E'): "<<a<<endl;
    cout.setf(ios::fixed);
    cout<<setprecision(2)<<"Round off to 2 decimal digit: "<<a<<endl;
}
