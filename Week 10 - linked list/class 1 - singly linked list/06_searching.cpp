#include <iostream>
using namespace std;
//todo - searching in the linked list , returning the exact location 

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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NUll" << endl;
}
int getlength(Node* &head){
    Node* temp = head ; 
    int count = 0 ; 
    while(temp!= NULL){
        count++ ; 
        temp = temp-> next ; 
    }
    return count ; 
}
int searching (Node* &head , int target){
    Node* temp = head ; 
    int position = 0 ; 
    while(temp!= NULL){
        if(temp-> data == target){
            return position ; 
        }
        position++ ; 
        temp = temp-> next ; 
    }
    return -1 ; 
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    head = insertionAtTail(10, head, tail);
    head = insertionAtTail(20, head, tail);
    head = insertionAtTail(30, head, tail);
    head = insertionAtTail(40, head, tail);
    head = insertionAtTail(50, head, tail);
    print(head) ; 
    cout << getlength(head) << endl ; 
    cout << searching(head , 40) << endl ; 
    cout << searching(head , 90) ; 




}
