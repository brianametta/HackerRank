#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*  30 Days of Code Day 25: Prime or Not Prime
    Challenge was to create O(sqrt(n)) code to test if a set of entered numbers is prime
    First line of input is the number of inputs, next is the actual inputs to be tested
    Briana Wright
*/

void isPrime(int n){
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i++){
        if(n%i == 0){
            cout << "Not prime" << endl;
            return;
        }
    }
    cout << "Prime" << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i=0; i < n; i++){
        if(arr[i] <= 1){
            cout << "Not prime" << endl;
        }
        else if(arr[i] ==2 || arr[i] ==3){
            cout << "Prime" << endl;
        }
        else{
            isPrime(arr[i]);
        }
    }
    

    return 0;
}