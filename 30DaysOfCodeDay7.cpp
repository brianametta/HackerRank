#include <vector>
#include <iostream>

using namespace std;

/* 
    30 Days of Code Day 7
    Takes an input N that is the size of the array. Then takes in the array elements. Finally, reverses array and prints
    Briana Wright
*/

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
	
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    n--;
    for(int arr_i = n; arr_i>=0; arr_i--){
        cout << arr[arr_i] << " ";
    }
    return 0;
}
