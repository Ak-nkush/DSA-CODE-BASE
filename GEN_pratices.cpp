#include<iostream>
using namespace std ;
#include<queue> 

class Node{
 public : 
   int data ; 
   Node* left ; 
   Node* right ;
   
   Node(int val){
    data = val ; 
    left = NULL ; 
    right = NULL ; 
   }
};

Node* creatingTree(){
  int value ; 
  cout << "Enter the value for Node : " ; 
  cin >> value ;  
    // base condition 
    if(value == -1) return NULL ; 

    // in other cases we have to create Node 
    else{
      Node* root = new Node(value) ; 
      // baadi me , first left then right ; root

      root->left = creatingTree() ; 
      root->right = creatingTree() ; 

      return root ; 
    }
}

void preOrder(Node*root){
  if(root == NULL){
    return ; 
  }
  // n 
  cout << root->data << " " ; 
  preOrder(root->left) ; 
  preOrder(root->right) ; 
}

void levelOrder(Node*root){
  // base case 
  if(root == NULL) return ; 

  queue<Node*> q ; 
  // initial state 
  q.push(root) ; 
  q.push(NULL) ; 

  while(!q.empty()){
    Node* frontNode = q.front() ; 
    q.pop() ; 
    if(frontNode == NULL){
      // it mean we enterd the child for the front 
      cout << endl ; 
      // but we have to add null after childs gets entered indicating that level is over 
      if(!q.empty()) q.push(NULL) ; 
    }
    else{

      cout << frontNode->data << " " ; 
      if(frontNode->left != NULL){
        q.push(frontNode->left) ;  
      }
      if(frontNode->right != NULL){
        q.push(frontNode->right) ;  
      }
    }
  }
}
int main(){
  Node *root  ; 
  root = creatingTree() ;
  preOrder(root) ;  
  cout << "level order : " << endl ;
  levelOrder(root) ; 
}

// 10 50 40 22 -1 -1 30 20 -1 -1 -1 