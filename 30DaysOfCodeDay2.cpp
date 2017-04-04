#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

/* 30 Days of Code Challenge Day 2
    Calculates the total cost of a meal including tax and tip
    Meal cost, tax, and tip percentage are entered from stdin
    Briana Wright
*/

using namespace std;

int main() {
    double mealCost;
    int tipPercent;
    int taxPercent;
	
    double totalCost;
    double tipValue;
    double taxValue;
	
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;
    
    tipValue = mealCost * tipPercent/100.00;
    taxValue = mealCost * taxPercent/100.00;

    totalCost = mealCost + tipValue + taxValue;
    cout << setprecision(0) << fixed << "The total meal cost is " << totalCost << " dollars." << endl;

    return 0;
}
