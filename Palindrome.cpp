#include<iostream>
using namespace std;
int rev=0;
int palindrome(int no)
{
    int temp;
    while(no>0)
    {
        temp=no%10;
        rev=rev*10+temp;
        no=no/10;
    }
    return rev;
}
int main()
{
    int no;
    cout<<"Enter any three digit number:";
    cin>>no;
    palindrome(no);
    //b=palindrome(no);
    if(rev==no)
        cout<<"Number is Palindrome";
    else
        cout<<"Number is not Palindrome";
}
