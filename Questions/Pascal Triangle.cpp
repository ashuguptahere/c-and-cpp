#include<iostream>
int main()
{
    using namespace std;
    int rows=10;
    cout<<"Enter the no of rows:";
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        int val=1;
        for(int j=1;j<(rows-i);j++)
        {
                cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<" "<<val;
            val=val*(i-k)/(k+1);
        }
        cout<<endl;
    }
    return 0;
}
