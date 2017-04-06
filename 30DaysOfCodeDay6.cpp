#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>

/* 30 Days Of Code Challenge Day 6
    First line of input is number of strings n
	Second line of input is the first string, third line is the third string up to n..
	Outputs the "even" letters of the string entered, then the odd letters of the string for each string up to n.
	Briana Wright
*/

using namespace std;

int main() {
    int n;
    string s;
    int strlength;
    char arr[256];
    
    cin >> n;
    //For number of strings entered, n, run these following for loops to divide even and odd
    for(int i =0; i<n; i++){
        cin >> s;
        
        //Want to test if at end of string, since we are working with evens & odds, need a length and length minus 1 test
        strlength = s.length();
        strlength --;
        
        //This prints evens
        for(int k = 0; k<= s.length(); k = k+2){
            cout << s[k];

            //Print space when you are done processing the even piece
            if(k == s.length() || k == strlength){
                cout << " ";

            }
        }
        //This prints evens    
        for(int p = 1; p<=s.length(); p = p+2){
            cout << s[p];

        }
        cout << "\n";
   }
    return 0;
}
