#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char text[80];
    fstream file;
    file.open ("example.txt", ios::out | ios::in );
    cout << "Write text to be written on file." << endl;
    cin.getline(text, sizeof(text));
    while(!file.eof())
    {
        file << text << endl; // Writing on file
        file >> text;     // Reding from file
    }
    while(!file.eof())
    {
        cout << text << endl;
    }
    file.close();     //closing the file
    return 0;
}
