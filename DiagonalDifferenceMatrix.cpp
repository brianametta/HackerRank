#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

/*HackerRank Challenge "Diagonal Difference"
	Calculates the sum of the diagonals of an N x N matrix, then takes the absolute value of the difference.
	Briana Wright
*/

int main(){
    int n;
    int firstDiag = 0;
    int secondDiag = 0;
    int sum = 0;
    
    //n for N x N matrix
    cin >> n;
    int count = n;
    count -= 1;
	
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0; a_i < n; a_i++)
    {
       for(int a_j = 0; a_j < n; a_j++)
       {
          cin >> a[a_i][a_j];
       }
    }
	
    //firstDiag = a[0][0] + a[1][1] + a[2][2];
    for(int a_i = 0; a_i < n; a_i++)
    {
        firstDiag += a[a_i][a_i];
    }
	
    //secondDiag = a[0][2] + a[1][1] + a[2][0];
    for(int a_i = 0; a_i < n; a_i++)
    {
        secondDiag += a[a_i][count];
        count --;
    }
    
    sum = abs(firstDiag - secondDiag);
    cout << sum;
    return 0;
    
}
