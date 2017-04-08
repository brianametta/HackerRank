#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/*
    Hacker Rank "Beautiful Days at the Movies" Challenge
    Takes in 3 inputs
	    Beginning of range
        End of range
        Number to divide by
    For each number in the range, gets the absolute value of that number minus the    reverse of that number
        Then it divides that difference by the third input
    If there is no remainder for the division, it is considered a "good" day
    Output is number of good days
	Link since the instructions may be confusing:
    https://www.hackerrank.com/challenges/beautiful-days-at-the-movies

    I got the algorithm for the reverse function from here
        https://www.programiz.com/cpp-programming/examples/reverse-number

    Briana Wright
*/

using namespace std;

int reverse(int n);

int main() {

    int n;
    int i;
    int j;
    int k;
    int count = 0;
    
    cin >> i;
    cin >> j;
    cin >> k;

    int absDiff;
    
    for(int p=i; p<=j; p++){
        absDiff = abs(p - reverse(p));

        if(absDiff % k ==0){
            count ++;
        }
        else{
            count = count;
        }
    }
    
    cout << count;
    
    return 0;
}

int reverse(int n){
    
    int remainder;
    int reversed= 0;
    while(n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }
    return reversed;
}