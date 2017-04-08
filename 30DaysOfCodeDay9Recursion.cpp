#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/*
    30 Days of Code Challenge Day 9
    Recursively solves n factorial of input n

    Briana Wright
*/

using namespace std;

int factorial(int n){
    if (n>1){
        return n * factorial(n-1);
    }
    else {
        return n;
    }
}

int main() {
    int z;
    cin >> z;
    cout << factorial(z);

    return 0;
}
