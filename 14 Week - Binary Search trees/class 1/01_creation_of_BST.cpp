#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        //// int data = value ;
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node *builtBST(int val, Node *root)
{
    // base case
    if (root == NULL)
    {
        // it means create new node ;
        Node *root = new Node(val);
        return root;
    }

    if (val < root->data)
    {
        // left pe lago
        root->left = builtBST(val, root->left);
    }
    else
    {
        // right pe lago
        root->right = builtBST(val, root->right);
    }

    return root;
}
void creationTree(Node *&root)
{
    cout << "Enter the value for node : ";
    int val;
    cin >> val;

    while (val != -1)
    {
        //! - because builtBST will return a node that will be root
        root = builtBST(val, root);
        cout << "Enter the value for node : ";
        cin >> val;
    }
}

void print(Node *root)
{
    // printing of BST will be done through level order
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        //! base case - root is NULL ,it means tree is empty
        if (root == NULL)
            return;

        Node *frontNode = q.front();
        q.pop();

        if (frontNode == NULL)
        {
            //     // it means childrens are added
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << frontNode->data << " ";
            if (frontNode->left)
            {
                //// q.push(root->left) ;
                q.push(frontNode->left);
            }
            if (frontNode->right)
            {
                ////q.push(root->right) ;
                q.push(frontNode->right);
            }
        }
    }
}
int main()
{
    Node *root = NULL;
    creationTree(root);
    print(root);
}
