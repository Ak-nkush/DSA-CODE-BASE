#include <iostream>
using namespace std;
 
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node *createTree()
{
    int value;
    cin >> value;

    if (value == -1)
    {
           return NULL;
    }
    else
    {
        Node *root = new Node(value);
        root->left = createTree();
        root->right = createTree();
        return root;
    }
}
     
void preOrderTraversal(Node*root){
    // edge case - when tree is empty 
    if(root == NULL) return ; 
    else{
        // preorder - NLR 
        cout << root->data << " " ; 
        preOrderTraversal(root->left) ; 
        preOrderTraversal(root->right) ; 
    }
}
void inOrderTraversal(Node*root){
    // edge case - when tree is empty 
    if(root == NULL) return ; 
    else{
        // inorder - LNR 
        inOrderTraversal(root->left) ; 
        cout << root->data << " " ; 
        inOrderTraversal(root->right) ; 
    }
}
void postOrderTraversal(Node*root){
    // edge case - when tree is empty 
    if(root == NULL) return ; 
    else{
        // postOrder - LRN 
        postOrderTraversal(root->left) ; 
        postOrderTraversal(root->right) ; 
        cout << root->data << " " ; 
    }
}
int main()
{
    Node *root = createTree();
    // input - 10 50 40 -1 -1 -1 30 20 -1 -1 -1
    preOrderTraversal(root) ; 
    cout << endl ; 
    inOrderTraversal(root) ; 
    cout << endl ; 
    postOrderTraversal(root) ; 

  
}

        
        

         
        

       
        

