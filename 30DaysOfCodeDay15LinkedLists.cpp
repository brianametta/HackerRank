#include <iostream>
#include <cstddef>

using namespace std;

/*
    HackerRank 30 Days of Code Challenge Day 15: Linked Lists
	Challenge is to create an insert function for the Linked List
	The first line of input is the number of entries,
	   The second line of input is the data
	   Insert function must return head
	   
	Briana Wright
*/
	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

class Solution{
    public:   
	//Insert function here is what was created by me for the challenge
	Node* insert(Node *head,int data)
   {
          Node* newNode = new Node(data);

           if(head == 0){
             head = newNode;
          }
          else{
              Node* current = head;
              while(current->next != 0){
              current = current->next;
              } current->next = newNode;
          }
        return head;
      }
      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}