#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";
    int count = 0;
    int i=0;
    int j=0;
    while(s1[i]!='\0')
    {
        while(s2[j]!='\0')
        {
            if(s1[i] == s2[j])
            {
                count++;
            }
            i++;
            j++;
        }
    }
    cout<<count<<endl;
    if(count>0)
        cout<<"YES";
    else
        cout<<"NO";
}