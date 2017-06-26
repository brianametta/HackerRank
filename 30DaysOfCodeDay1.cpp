#include <iostream>
#include <iomanip>
#include <limits>

/* 30 Days of Code Challenge Day 1
    Sums integers and floats, and concatenates two strings
    
    Input Format
    The first line contains an integer that you must sum with . 
    The second line contains a double that you must sum with . 
    The third line contains a string that you must concatenate with .

    Output Format
    Print the sum of both integers on the first line, the sum of both doubles (scaled to  decimal place) on the second line, 
    and then the two concatenated strings on the third line.
    Briana Wright
*/

using namespace std;

int main() {

    //The initial int, double, and string were added in by the challenge
    //I later changed the naming conventions 
    int firstInt = 4;
    double firstDouble = 4.0;
    string firstSting = "HackerRank ";
    
    int secondInt;
    double secondDouble = 0.0;
    string secondString;
    
    cin >> secondInt;
    cin.ignore();
    cin >> secondDouble;
    cin.ignore();
    getline(cin, secondString);

    cout << firstInt + secondInt << endl;

    firstDouble = firstDouble + secondDouble;
    cout << setprecision(1) << fixed << firstDouble;

    firstString = firstString + secondString;
    cout << "\n" << firstString;

    return 0;
}
