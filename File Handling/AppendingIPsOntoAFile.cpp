#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    ofstream f;
    f.open("C:/Users/ASH/Desktop/filename.bat");
    for(int i=0;i<=255;i++)
    {
        f<<"start chrome.exe 192.168.1."<<i<<endl;
    }
    f.close();
    return 0;
}