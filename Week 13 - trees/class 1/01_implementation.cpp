#include <iostream>
using namespace std;
//! - create the class , for the creation of the tree write function , inside the function take the value then , create the node after that create its left and right using recursion , NOTE - use value instead of root->data while showing the left and right of that particular node   
// this is checking for addition things 
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
    cout << " enter the value for Node : ";
    int value;
    cin >> value;

    if (value == -1)
    {
        return NULL;
    }
    else
    {
        
        // step 1 : first create  the root node
        Node *root = new Node(value);

        // step 2 : creating left sub tree
        cout << "Adding left child of " << value ;
        root->left = createTree();
        

        // step 3 : creating right sub tree
        cout << "Adding right child of " << value ;
        root->right = createTree();
        

        return root;
    }
}

int main()
{
    Node *root = createTree();

    cout << "Printed the tree of root : " << root->data << endl;
}