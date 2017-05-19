#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

/*
    HackerRank 30 Days of Code Challenge Day 17-Exceptions Continued
    Challenge was to create a calculator class that takes two int inputs, n and p
    Calculator class must contain a power method that calculates n^p
    Power method should throw an exception if one or both of the inputs are negative
    Briana Wright
*/

//Written for challenge
class Calculator{
    public:
        int power(int, int);
};

int Calculator::power(int x, int y){
    if(x < 0 || y < 0){
        throw runtime_error("n and p should be non-negative");
    }
    else{
        return pow(x, y);
    }
    return 0;
}

//Provided by challenge
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}