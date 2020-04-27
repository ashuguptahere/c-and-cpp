#include <list>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    list <string> l;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        l.push_back(s);
    }
    string e;
    list <string> :: iterator p=l.begin();
    while(p!=l.end())
    {
        int i = 0;
        string s;
        s = *p;
        while(s[i]!='\0')
        {
            if(i%2 == 0)
            {
                char ch = s[i];
                e = e + s[i];
                i++;
            }
            else
                i++;
        }
        i = 0;
        s = *p;
        e = e + " ";
        while(s[i]!='\0')
        {
            if(i%2 == 1)
            {
                char ch = s[i];
                e = e + s[i];
                i++;
            }
            else
                i++;
        }
        p++;
        e = e + "\n";
    }
    cout<<e;
    return 0;
}
