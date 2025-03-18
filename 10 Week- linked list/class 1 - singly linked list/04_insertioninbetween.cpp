#include <iostream>
using namespace std;
//  insertion in between
// first, we have determine the position of the insertion wheather it is valid or invalid
// second, if the position is the head and tail use there resp. function
// third, after this we have to find the previous element and connect the nodes

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
int getlength(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }
    return count;
}
void insertionAtTail(int value, Node *&head, Node *&tail)
{
    // 1st case , node is empty it means that head points to null and tail points to null
    if (head == NULL && tail == NULL)
    {
        // just create the node
        Node *newNode = new Node(value);
        // head points to that node and tail also points to that node
        head = newNode;
        tail = newNode;
    }
    else
    {
        // another node already exists ;
        // 1st create the node ;
        Node *newNode = new Node(value);
        // 2nd step , joint the node to the prvious node , the previous node is tail
        tail->next = newNode;
        // 3rd step , update the tail
        tail = newNode;
    }
    // return head ;
    // here we are returning the tail for our convenience because the traversing in the LL always begins from the head , we can make the function as the void too as we are using references of head and tail
}
void insertionAthead(int value, Node *&head, Node *&tail)
{
    // 1st case , node is empty it means that head points to null and tail points to null
    if (head == NULL && tail == NULL)
    {
        // just create the node
        Node *newNode = new Node(value);
        // head points to that node and tail also points to that node
        head = newNode;
        tail = newNode;
    }
    else
    {
        // another node already exists ;
        // 1st create the node ;
        Node *newNode = new Node(value);
        // 2nd step , joint the node , the node we have to joint is existing head
        newNode->next = head;
        // 3rd step , update the head
        head = newNode;
    }
    // return head ;
}

void insertionInBetween(int position, int value, Node *&head, Node *&tail, int length)
{
    // check the position is valid
    if (position < 1 || position > length + 1 )
    {
        cout << "Enter the valid position " << endl;
    }
    else if (position == 1)
    {
        insertionAthead(value, head, tail);
    }
    else if (position == length+1)
    {
        insertionAtTail(value, head, tail);
    }
    else
    {
        // insertion in between
        // first determining the temp node , that previous node before position to insert
        Node *temp = head ;
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp->next;
        }
        // second step , now joining the nodes,here first join the newnode to the preceeding node
        // and then joining the temp to the next node
        Node *newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
  

    insertionAthead(10, head, tail);
    print(head);
    insertionAthead(20, head, tail);
    print(head);
    insertionAthead(30, head, tail);
    print(head);
    insertionAthead(40, head, tail);
    print(head);
    insertionAthead(50, head, tail);
    print(head);

    
    int length = getlength(head) ; 
    insertionInBetween(1,101,head,tail,length) ;
    print(head) ; 

    length = getlength(head) ; 
    insertionInBetween(length+1,999,head,tail,length) ;
    print(head) ;

    length = getlength(head) ; 
    insertionInBetween(3,77,head,tail,length) ;
    print(head) ; 

    return 0;
}