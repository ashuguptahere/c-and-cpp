#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream thefile("PlayersInfo.txt");
    cout<<"Enter the Player's ID, Name and Money: "<<endl;
    cout<<"Press Ctrl+Z to quit";
    int idNumber;
    string name;
    double money;
    while(cin>>idNumber>>name>>money)
    {
        thefile<<idNumber<<' '<<name<<' '<<money<<endl;
    }

    ifstream thefile("PlayersInfo.txt");
    while(thefile>>idNumber>>name>>money)
    {
        cout<<idNumber<<", "<<name<<", "<<money<<endl;
    }
}
