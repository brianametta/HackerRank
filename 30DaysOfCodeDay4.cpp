#include <iostream>

using namespace std;

/* 30 Days of Code Challenge Day 4
    yearPasses() increases age by 1	
    amIOld() prints "You are young." if age is less than 13
        prints "You are a teenager." if age is >=13 or <18
        else, amIOld() prints "You are old."
    Briana Wright
*/

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if(initialAge < 0){
            cout << "Age is not valid, setting age to 0." << endl;
            age = 0;
        }
        else{
            age = initialAge;   
        }

    }

    void Person::amIOld(){
        if(age < 13){
            cout << "You are young." << endl;
        }
        else if(age >= 13 && age <18){
            cout << "You are a teenager." << endl;
        }
        else{
            cout << "You are old." << endl;
        }

    }

    void Person::yearPasses(){
        age++;

    }

int main() {
    int t;
    int age;
    cin >> t;
    for(int i=0; i < t; i++){
        cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++){
            p.yearPasses();
        }
        p.amIOld();

        cout << '\n';
    }

    return 0;
}