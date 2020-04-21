#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    string s1;

    // Read and save an integer, double, and String to your variables.
    cin >> i2;
    cin >> d2;
    cin >> s1;
    getline(cin, s2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + i2 << endl;
    // Print the sum of the double variables on a new line.
    // cout << d2 + d2 << endl;
    // printf("%.*f\n", d2);
    cout << fixed << setprecision(1) << d + d2 << endl;
    // Concatenate and print the String variables on a new line
    string result = s + s1 +s2;
    // The 's' variable above should be printed first.
    cout << result;

    return 0;
}