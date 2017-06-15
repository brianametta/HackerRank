#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
HackerRank 30 Days of Code Challenge Day 26-Nested Logic
Task 
Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

If the book is returned on or before the expected return date, no fine will be charged (i.e.: .
If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, .
If the book is returned after the expected return month but still within the same calendar year as the expected return date, the .
If the book is returned after the calendar year in which it was expected, there is a fixed fine of .

Briana Wright

*/


int main() {
    int actualDay, actualMonth, actualYear;
    int expectedDay, expectedMonth, expectedYear;
    
    cin >> actualDay >> actualMonth >> actualYear;
    cin >> expectedDay >> expectedMonth >> expectedYear;
    
    int fee = 0;
    
    if(actualYear < expectedYear){
        fee = 0;
    }
    else if(actualYear > expectedYear){
        fee = 10000;
    }
    else if(actualMonth > expectedMonth){
        fee = 500 *(actualMonth - expectedMonth);
    }
    else if(actualDay > expectedDay){
        fee = 15 *(actualDay - expectedDay);
    }
                                            
    cout << fee;

    return 0;
}