#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    int data;
    vector <int> v;
    cin>>T;
    while(T-->0)
    {
        cin>>data;
        v.push_back(data);
    }
    for(int i=0; i<v.size(); i++)
    {
        int count = 0;
        if(v[i] == 1)
            count++;
        else
        {
            for(int j=2; j<=sqrt(v[i]); j++)
            {
                if(v[i] % j == 0)
                {
                    count++;
                    break;
                }
            }
        }
        if(count == 0)
            cout<<"Prime"<<endl;
        else if(count>0)
            cout<<"Not prime"<<endl;
    }
    return 0;
}
