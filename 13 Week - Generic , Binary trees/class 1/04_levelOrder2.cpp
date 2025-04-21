#include <iostream>
#include <queue>
using namespace std;

//! - exactly representing levels
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

void levelOrderTraversal(Node *root)
{
    // empty case
    if (root == NULL)
    {
        return;
    }
    else
    {
        queue<Node *> q;
        q.push(root); // to maintain the initial state of the queue
        q.push(NULL);

        while (!q.empty())
        {
            Node *front = q.front();
            q.pop();

            if (front == NULL)
            {   
                // it means level is over print a new line 
                cout << endl;
                if (!q.empty())
                    // childs got entered now push NULL ; to indicate level is over 
                    q.push(NULL);
            }
            else
            {
                cout << front->data << " ";

                if (front->left != NULL)
                {
                    q.push(front->left);
                }

                if (front->right != NULL)
                {
                    q.push(front->right);
                }
            }
        }
    }
}
int main()
{
    Node *root = createTree();
    // input - 10 50 40 -1 -1 -1 30 20 -1 -1 -1
    levelOrderTraversal(root);
}