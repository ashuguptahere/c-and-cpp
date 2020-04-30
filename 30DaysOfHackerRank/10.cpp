#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int num = n;
    int counter = 0, maxCounter = 0;
    while (num)
    {
        const auto rem = num % 2;        
        counter = (counter + rem) * rem;
        maxCounter = max(counter, maxCounter);        
        num >>= 1;
    }
    cout<<maxCounter;
    return 0;
}
