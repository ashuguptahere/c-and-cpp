#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2 == 0)
    {
        if(N <=5 && N >= 2)
            cout << "Not Weird";
        if(N <= 20 && N >= 6)
            cout << "Weird";
        if(N > 20)
            cout << "Not Weird";
    }
    else
        cout << "Weird";
    return 0;
}
