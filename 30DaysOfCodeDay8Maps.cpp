#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

/*
    30 Days of Code Challenge Day 8
    First line of input n is number of key value (name, phone number) pairs to enter in the map
    Following n lines are the key value data
    Then any following lines are the keys (names) to look up, output is phone number
    If lookup is not in map, returns "Not found"

    Briana Wright
*/

using namespace std;

int main() {
    int n;
    int phone;
    string lookup;
    cin >> n;
    map<string, int> myMap;
    for(int i=0; i<n; i++){
        string name;
        cin >> name;
        cin >> phone;
        myMap[name] = phone;
        //cout << name << "=";
        //cout << myMap[name];
    }
    while(getline(cin, lookup)){

        cin >> lookup;
        if (myMap.count(lookup)){
            cout << lookup << "=" << myMap[lookup] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }    
    return 0;
}
