#include <iostream>
#include <iomanip>
#include <limits>

/* 30 Days of Code Challenge Day 1
    Sums integers and floats, and concatenates two strings
    Briana Wright
*/

using namespace std;

int main() {

    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int j;
    double e = 0.0;
    string t;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> j;
    cin.ignore();
    cin >> e;
    cin.ignore();
    getline(cin, t);

    // Print the sum of both integer variables on a new line.
    cout << i + j << endl;

    // Print the sum of the double variables on a new line.
    d = d + e;
    cout << setprecision(1) << fixed << d;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    s = s + t;
    cout << "\n" << s;

    return 0;
}