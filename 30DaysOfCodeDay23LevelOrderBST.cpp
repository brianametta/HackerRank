#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

/* HackerRank 30 Days of Code Challenge Day 23-BST Level Order Traversal
    Challenge was to write a function that does a level order traversal on a BST
	levelOrder() was written by me. The other code was provided by the challenge
	Briana Wright
*/

	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};

class Solution{
    public:
  	Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

/* THIS SECTION WRITTEN FOR CHALLENGE levelOrder() */
void levelOrder(Node * root){
    queue<Node *> BSTqueue;
    Node * n = root;
    BSTqueue.push(root);
        
    while(!BSTqueue.empty()){
        n = BSTqueue.front();
        cout << n->data << " ";
        BSTqueue.pop();
            
        if(n->left)
            BSTqueue.push(n->left);
        if(n->right)
            BSTqueue.push(n->right);
     }
}

};//End of Solution

int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}