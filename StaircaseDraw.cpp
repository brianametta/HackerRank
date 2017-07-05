#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*  HackerRank Staircase problem
    Input Format
    A single integer, n, denoting the size of the staircase.
    Output Format
	Print a staircase of size n using # symbols and spaces.
    Briana Wright
*/

int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        for(int k = 0; k < n-i; k++) {
            printf("%s", " ");
        }
        
        for(int j = 0; j < i; j++) {
            printf("%s", "#");   
        }
        printf("\n");
    }
    return 0;
}