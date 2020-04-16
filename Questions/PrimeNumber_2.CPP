#include<iostream>
#include<string>
using namespace std;
int main()
{
    int low = 2, high = 100, i, flag;
    int count = 0;
    while (low < high)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            count++;
            //cout << low << " ";
        ++low;

    }
    cout << count;
    return 0;
}
