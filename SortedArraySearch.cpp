#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* 
    HackerRank sorted array search
	Simple algorithm to find an int in a sorted array and print the index of the int
    Briana Wright
*/

int main() {
    int searchQuery;
    cin >>  searchQuery;
    
    int arrLength;
    cin >> arrLength;
    
    int arr[arrLength];
    for(int i = 0; i < arrLength; i++){
        cin >> arr[i];
    }
    
    int i = arrLength/2;
    
    //base case
    if(arr[i] == searchQuery)
        cout << i;
    
    if(arr[i] < searchQuery){
        while(arr[i]!= searchQuery){
            i++;
        }
        cout << i;
    }
    
    if(arr[i] > searchQuery){
        while(arr[i]!=searchQuery){
            i--;
        }
        cout << i;
    }
    
    return 0;
}
