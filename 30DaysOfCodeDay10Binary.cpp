#include <cmath>
#include <string>
#include <iostream>

using namespace std;

/*
    HackerRank 30 Days of Code challenge Day 10
    "Given a base 10 integer, convert it to binary.
        Then find and print the base 10 integer denoting the maximum number of 
        consecutive 's in 's binary representation."
    Briana Wright
*/

int main(){
    int n;
    int count = 0;
    int placeHolder = 0;
    int remainder;
    string binaryRep;
    cin >> n;
    
    while(n > 0){
        remainder = n % 2;
        n/= 2;
        binaryRep = to_string(remainder);
        
        if(remainder == 1){
            count ++;
            if(count >= placeHolder){
                placeHolder = count;
            }
        }
        else{ count = 0;}
        
    }
    cout << placeHolder;
    return 0;
}