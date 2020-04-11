#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=0,number, originalNo, digits, remainder, result = 0;
    cout<<"Enter any Number: ";
    cin>>number;
    originalNo = number;
    while(originalNo!=0)
    {
        originalNo = originalNo / 10;
        ++n;
    }
    cout<<"Total Digits in given number: "<<n;
    originalNo = number;
    while(originalNo!=0)
    {
        remainder = originalNo % 10;
        result = result + pow(remainder, n);
        originalNo = originalNo / 10;
    }
    cout<<endl;
    (number == result)?cout<<"No is Armstrong":cout<<"No is not Armstrong";
}
