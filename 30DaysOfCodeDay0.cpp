#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/* 30 Days of Code Challenge Day 0
	Prints "Hello, World." and an input string from stdin
	Briana Wright
*/

using namespace std;


int main() {
	string inputString; 
    	getline(cin, inputString); 
    
	cout << "Hello, World." << endl;
	cout << inputString << endl;
    	return 0;
}
