#include<iostream>
#include<queue>
using namespace std ; 

//! - level order traversal , executes from left to right in general , it can't be printed simiply just by traversing , we have to use queue , first in from the tree , enters into the queue then push children of the front and then print 
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

void levelOrderTraversal(Node * root ){
    // empty case 
    if(root == NULL){
        return ; 
    }
    else{
        queue<Node*> q ; 
        q.push(root) ; // to maintain the initial state of the queue 
        
        while(!q.empty()){
            Node * front = q.front() ; 
            q.pop() ; 
            cout << front->data << " " ;
            
            if(front->left != NULL) {
                 q.push(front->left) ; 
            }
            
            if(front->right != NULL) {
                 q.push(front->right) ; 
            }

    

        }

    }
}
int main()
{
    Node *root = createTree();
    // input - 10 50 40 -1 -1 -1 30 20 -1 -1 -1
    levelOrderTraversal(root) ; 
}

