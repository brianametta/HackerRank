#include <string>
#include <iostream>

using namespace std;

/* 30 Days of Code Challenge: Day 16
    Use a try catch block to determine if a string entered is a number versus a letter.
	Prints "Bad String" when letters/characters are entered, prints numbers when they are entered
	Briana Wright
*/

int main(){
    string S;
    cin >> S;
    
	try{
		cout << stoi(S);
	}
	catch (exception e){
		cout << "Bad String" << endl;
	}
    
    return 0;
}