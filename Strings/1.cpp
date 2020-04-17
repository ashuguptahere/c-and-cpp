#include<iostream>
#include<string>

using namespace std;

// Complete the alternatingCharacters function below.
int main() {
    string s = "AAAAA";
    int count=0;
    int i=0;
    int j=0;
    while(s[i]!='\0')
    {
        if(s[i] == s[j])
        {
            count++;
            i++;
            j++;
        }
    }
    cout<<count;
}
