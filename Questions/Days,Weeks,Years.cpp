#include<iostream>
using namespace std;
int main()
{
    int totaldays,weeks,years,days;
    cout<<"Enter the number of days to be calculated: ";
    cin>>totaldays;
    years=totaldays/365;
    weeks=totaldays/7;
    days=totaldays%7;
    cout<<"Total no. of days: "<<totaldays<<endl;
    cout<<"No. of Years: "<<years<<endl;
    cout<<"No. of Weeks: "<<weeks<<endl;
    cout<<"No. of Days: "<<days<<endl;
}
