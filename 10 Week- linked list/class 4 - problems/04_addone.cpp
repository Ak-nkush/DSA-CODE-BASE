#include <iostream>
using namespace std;
//  insertion at tail
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
Node *insertionAtTail(int value, Node *&head, Node *&tail)
{

    if (head == NULL && tail == NULL)
    {

        Node *newNode = new Node(value);

        head = newNode;
        tail = newNode;
    }
    else
    {

        Node *newNode = new Node(value);

        tail->next = newNode;

        tail = newNode;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NUll" << endl;
}
// todo:-> add one in the linked list
//  todo : approach - reverse the linked , add and carry , update the carry and then again reverse the linked list

// reverse the linked list
Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *forward = curr->next; //! we have to take the forward because we are changing the curr ka next ;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev; //! here how we can return the head that wrong , we have to return prev ;
}

// addition and carry
Node *addition(Node *&head)
{
    Node *temp = head;
    int carry = 1;

    while (temp != NULL)
    {
        int sum = temp->data + carry;
        int insertdigit = sum % 10;
        temp->data = insertdigit;
        carry = sum  / 10;
        //! one edge case is remaining , when we to add the new node to the LL because to addition carry
        //! in that case we have to insert carry into the new node
        //! ye bhul jaunga loop ke andaar special case handle karni he
        if (temp->next == NULL && carry != 0)
        {
            Node *newNode = new Node(carry);
            newNode->next = NULL;
            temp->next = newNode;
            temp = newNode;
        }

        temp = temp->next;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    head = insertionAtTail(9, head, tail);
    head = insertionAtTail(9, head, tail);
    head = insertionAtTail(9, head, tail);
    head = insertionAtTail(9, head, tail);
    print(head);
    head = reverse(head);
    print(head);
    head = addition(head);
    print(head);
    head = reverse(head) ; 
    print(head) ; 

    return 0;
}
