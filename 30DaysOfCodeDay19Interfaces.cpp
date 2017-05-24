#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/* HackerRank 30 Days of Code Challenge Day 19-Interfaces
    The task was to implement a Calculator class that contains a divisorSum method
    The calculator implements the AdvancedArithmetic interface
    The divisorSum method calculates the sum of all of an entered number's divisors
    Briana Wright
*/

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

//This section was written for the challenge
class Calculator: public AdvancedArithmetic{
    public:
        int divisorSum(int n){
            int sum = 1;
            for(int i = 2; i <=n; i++) {
                if(n % i == 0){
                    sum += i;
                }
            }
            return sum;
        }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}