#include <iostream>
using namespace std;
//todo - deleting the node based on the value 

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
//todo - soo in this also we have to locate the previous element 
// soo here also two cases , 1 case for the head and the rest for the other 
void deletionBasedValue(Node* &head , int target){
    // case 1 : if target is present on the head 
    if(head->data == target){
        head = head->next ; 
        return ; 
    }

    Node* temp = head ; 
    while(temp!= NULL){
        if(temp->next== NULL){
            cout << "Value is not present in the linked list " << endl ; 
            return ; 
        }
        else if (temp->next->data == target){
            break ; 
        }
        temp = temp-> next ; 
    }
    Node* curr = temp->next ; 
    temp->next = curr-> next ; 
    curr-> next = NULL ; 
    delete curr ;    

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
    deletionBasedValue(head , 70) ;
    print(head) ; 
 
    



}
