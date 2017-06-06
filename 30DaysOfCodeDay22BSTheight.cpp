#include <iostream>
#include <cstddef>

using namespace std;	

/* HackerRank 30 Days of Code Challenge Day 22- BST Height
    Challenge was to right a getHeight function for class "Solution" to find height of a Binary Search Tree
    Function getHeight() was written by me for challenge, the rest provided by the challenge itself.
    Briana Wright
*/

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  	Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

	int getHeight(Node* root){
          if(root == NULL){
              return -1;
          }
          int left = getHeight(root->left);
          int right = getHeight(root->right);
          
          if(right > left)
              return right + 1;
          return left + 1;
        }
}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}