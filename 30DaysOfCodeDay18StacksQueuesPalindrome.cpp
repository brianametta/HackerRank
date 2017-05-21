#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

/*
    30 Days of Code Day 18-Stacks and Queues
    Tests if a string is a palindrome by loading it onto a stack and queue, then comparing
    Briana Wright
*/

class Solution {
    stack<char> stacky;
    queue<char> queuey;
    public:
        void pushCharacter(char ch);
        char popCharacter();
        void enqueueCharacter(char ch);
        char dequeueCharacter();
};

void Solution::pushCharacter(char ch){
    stacky.push(ch);
}

char Solution::popCharacter(){
    char temp = stacky.top();
    stacky.pop();
    return temp;
}

void Solution::enqueueCharacter(char ch){
    queuey.push(ch);
}

char Solution::dequeueCharacter(){
    char temp = queuey.front();
    queuey.pop();
    return temp;
}

//Everything written in main was provided by the challenge
int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}