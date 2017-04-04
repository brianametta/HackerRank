#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

/* 30 Days of Code Challenge Day 3
    Prints "Weird" if input is odd
    Prints "Not Weird" if input is even and in inclusive range of 2 to 5
    Prints "Weird" if input is even and in inclusive range of 6 to 20
    Prints "Not Weird" if n is even and greater than 20
    Briana Wright
*/

using namespace std;


int main(){
    int n;
    cin >> n;
    
    if(n % 2 == 1){
        cout << "Weird" << endl;
    }
    
    else if(n % 2 == 0 && n >=2 && n <=5){
        cout << "Not Weird" << endl;
    }
    
    else if(n % 2 == 0 && n >=6 && n <=20){
        cout << "Weird" << endl;
    }
    
    else{
        cout << "Not Weird";
    }
    return 0;
}