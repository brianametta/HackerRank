#include <iostream>
#include <vector>

using namespace std;

/*
    HackerRank 30 Days of Code Challenge Day 12
	Inheritance
	Write a student class that inherits from person class
	Print firstName, lastName, id, and a grade based on an average of test scores.
*/

class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string Fname, string Lname, int iden, vector<int> scores) : Person(Fname, Lname, iden),
        testScores (scores) {
            
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            int average = 0;
            int vecLength = testScores.size();
            int sum = 0;
            
            for(int i = 0; i < vecLength; i++){
                sum += testScores[i];
            }
            
            average = sum / vecLength;
            
            if(average >= 90 && average <=100){
                return 'O';
            }
            else if(average >= 80 && average < 90){
                return 'E';
            }
            else if(average >= 70 && average < 80){
                return 'A';
            }
            else if(average >= 55 && average < 70){
                return 'P';
            }
            else if(average >= 40 && average < 55){
                return 'D';
            }
            else{
                return 'T';
            }
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}