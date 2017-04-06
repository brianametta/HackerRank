#include <iostream>

/*
    30 Days Of Code Challenge Day 5
    Takes in an int n of range 2 to 20, and prints the first 10 multiples of that number
    Briana Wright
*/

using namespace std;


int main(){
    int n;
    cin >> n;
    int product;
    
    for(int i = 1; i<11; i++){
        product = n * i;
        cout << n << " x " << i << " = " << product << endl;
    }
    
    return 0;
}