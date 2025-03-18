#include<iostream>
using namespace std ; 
 // printing the linked list 
 // before printing the LL we have to joint the each node and specifies the insertion in the LL 
 // there are three type of insertions 
  // at head 
  // at tail 
  // at between 
  // first insertion at head  


class Node{
 public :  
  int data ;  
  Node* next ;  

Node(int value){
     this->data = value ; 
     this->next = NULL ; 
    }
};
Node* insertionAthead(int value , Node* &head , Node* &tail){
    // 1st case , node is empty it means that head points to null and tail points to null 
    if(head == NULL && tail == NULL){
        // just create the node 
        Node* newNode = new Node(value) ; 
        // head points to that node and tail also points to that node 
        head = newNode ;
        tail = newNode ; 

    }
    else{
        // another node already exists ;  
        // 1st create the node ; 
        Node* newNode = new Node(value) ; 
        // 2nd step , joint the node , the node we have to joint is existing head 
        newNode-> next = head ; 
        // 3rd step , update the head 
        head = newNode ; 
    }
    return head ; 
}
// crating the print function 
void print(Node*head){
    Node* temp = head ; 
    while(temp!=NULL){
        cout<<temp->data<<"->" ;
        temp = temp->next ;
    }
    cout << "NUll" <<endl ; 
}
int main(){
    Node* head = NULL ; 
    Node* tail = NULL ; 
    // print(head) ; 
    // Node* first = new Node(10) ;
    // print(first) ;    
       // what is the mistake we are doing we where just creating the node we are not the insertAthead function above , the creation of the node is also done inside the isnertAthead function 

    head = insertionAthead(10,head,tail) ;  
    print(head) ; 
    head = insertionAthead(20,head,tail) ;  
    print(head) ; 
    head = insertionAthead(30,head,tail) ;  
    print(head) ; 
    head = insertionAthead(40,head,tail) ;  
    print(head) ; 
    head = insertionAthead(50,head,tail) ;  
    print(head) ; 

    

     
    return 0 ; 
  

   

    

}