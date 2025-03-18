#include<iostream>
using namespace std ; 
class Node{
 public : 
   int data ; 
   Node* prev ; 
   Node* next ; 

   Node(int value){
    data = value ; 
    prev = NULL ; 
    next = NULL ; 

   }
};
// insertion at head 
void insertAthead(int value , Node* &head , Node* &tail){
    // case 1 : ll is empty 
    if(head == NULL  && tail == NULL){
        // create the node
        Node* newNode = new Node(value) ; 
        // then mark head and tail to the same node 
        head = newNode ; 
        tail = newNode ; 
    }
    // case 2 : ll is not empty 
    else{
    // create the temp that will point to the head 
    Node* temp = head ; 
    // 1st create the node 
    Node* newNode = new Node(value) ; 
    temp->prev = newNode ; 
    newNode->next = temp ; 
    head = newNode ; 
    }
}

// insertion at the tail 
void insertAtTail(int value , Node* &head , Node* &tail){
    // case 1 : ll is empty 
    if(head == NULL  && tail == NULL){
        // create the node
        Node* newNode = new Node(value) ; 
        // then mark head and tail to the same node 
        head = newNode ; 
        tail = newNode ; 
    }
    // case 2 : ll is not empty 
    else{
    // create the temp that will point to the head 
    Node* temp = tail ; 
    // 1st create the node 
    Node* newNode = new Node(value) ; 
    temp->next = newNode ; 
    newNode->prev = temp ; 
    tail = newNode ; 
    }
}

// calculating the length 
int getlength(Node*head){
    Node* temp = head ;
    int count = 0 ;  
    while(temp!= NULL){
       ++count ; 
       temp = temp->next;  
    }
    return count ; 
}        
// insertion at n position 
void insertAtposition(int position , int value , Node* &head , Node* &tail){
    
    int len = getlength(head) ; //! this was giving the error only because the getlength function was declared below the insertatposition function 
    // case 1 : if the ll is empty 
    if(head == NULL  && tail == NULL){
        // create the node
        Node* newNode = new Node(value) ; 
        // then mark head and tail to the same node 
        head = newNode ; 
        tail = newNode ; 
    }
    // if the position is at the start 
    else if(position == 1 ){
        insertAthead(value , head , tail) ; 
    }
    else if (position == len + 1){
        insertAtTail(value,head,tail) ; 
    }
    else{
        Node* backward = head ; 
        for(int i = 0 ; i<position -2 ; i++ ){
            backward = backward-> next ; 
        }
        // 1st create the node 
        Node* newNode = new Node(value) ; 
        Node* forward = backward->next ;
        newNode->next = forward ; 
        forward->prev = newNode ; 
        newNode->prev = backward ; 
        backward->next = newNode ; 
    }
}


// printing the doubly linked list 
void print(Node* head){
    Node* temp = head ; 
    while(temp!= NULL){
        cout<<temp->data<<" -> " ; 
        temp = temp-> next ; 
    }cout <<"NULL" << endl ; 
}



int main(){
   Node* head = NULL ; 
   Node* tail = NULL ; 
   insertAthead(60,head,tail) ; 
   insertAthead(70,head,tail) ; 
   insertAthead(80,head,tail) ; 
   insertAthead(90,head,tail) ; 
   print(head) ; 

   insertAtposition(2,100,head,tail) ; 
   print(head) ;  

}