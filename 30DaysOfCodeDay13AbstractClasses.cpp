#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
    HackerRank 30 Days of Code Challenge Day 13
    Abstract Classes-create a MyBook class that inherits from Book
    MyBook should have a virtual void function display() that prints
        the title of the book, author, and price
    Briana Wright
*/

class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here

    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
class MyBook : public Book{
    private:
        int price;
    
    public:
        MyBook(string bookTitle, string bookAuthor, int bookPrice) : Book(bookTitle, bookAuthor), price(bookPrice) { }
        
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        }

};    
// End class

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
