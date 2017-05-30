#include <bits/stdc++.h>

using namespace std;

/*
    30 Days of Code Day 20-Bubble Sort
    First line of input is number of elements in the array or vector
    Second line of input is the elements in the array or vector
    Task was to implement bubble sort

*/

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;    
}

void bubbleSort(vector<int> a, int n){
    int swaps = 0;
    for(int i = 0; i < n; i++){
        int swapTracker = 0;
        for(int j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
                swapTracker++;
                swaps++;
            }
        }
        if(swapTracker == 0){
            cout << "Array is sorted in " << swaps << " swaps." << endl;
            cout << "First Element: " << a[0] << endl;
            cout << "Last Element: " << a[n-1] << endl;
            break;
        }
    }
}    


//Main was provided by challenge
int main() {
    int n;
    int totalSwaps = 0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    
    bubbleSort(a, n);
    return 0;
}
