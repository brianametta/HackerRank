#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
*    HackerRank 30 Days of Code Challenge Day 21-Generics
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
*    Briana Wright
**/

template < class T >
  void printArray ( vector<T> &n ){
    for(int i = 0; i < n.size(); i++){
        cout << n[i] << endl;
    }
}

//Main provided by challenge
int main() {
	int n;
	
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}