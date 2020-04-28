#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <list>
using namespace std;


int main()
{
    int n;
    cin>>n;
    string name;
    int number;
    map <string, int> m;
    list <string> l;
    for(int i=0; i<n; i++)
    {
        cin>>name>>number;
        m[name] = number;
    }
    // for(int i=0; i<n; i++)
    // {
    //     string name;
    //     cin>>name;
    //     l.push_back(name);
    // }

    map <string, int>::iterator it1 = m.begin();
    list <string>::iterator it2 = l.begin();

    // while(it2!=l.end())
    // {
    //     string s1 = *it2;
    //     while(it1!=m.end())
    //     {
    //         if(*it2 == it1->first)
    //         {
    //             cout<<it1->first<<"="<<it1->second<<endl;
    //             it1++;
    //             break;
    //         }    
    //         it1++;
    //     }
    //     if(it1 == m.end())
    //         cout<<"Not found"<<endl;
    //     it2++;
    //     it1 = m.begin();
    // }
    while(cin >> name)
    {
        if (m.find(name) != m.end())
        {
            cout << name << "=" << m.find(name)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
