#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
    30 Days of Code Challenge Day 14: Scope
    First line of input is number of integers that will be entered into a vector
    Second line is the integers themselves
    The classes and methods find the maximum absolute difference between the numbers entered

    Briana Wright
*/

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

// Add your code here
    Difference(vector<int> arr){
        elements = arr;
    }

    void computeDifference(){
        int length = elements.size();
        int min = elements[0];
        int max = min;
        int i = 0;

        while(i< length){
            if(elements[i] < min){
                min = elements[i];
                i++;
            }
            else if(elements[i] > max){
                max = elements[i];
                i++;
            }
            else{
                i++;
            }
            
        }
        maximumDifference = max - min;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}