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

Node* deleteNode(Node*& head ,Node*& tail, int pos ) {
    
    int size = getlength(head) ; 
    // case 1 : invalid index 
    if(pos < 0 || pos > size) {
        cout <<"Invalid index " ; 
        return head ; 
    }
    // case 2 : empty LL 
    else if(head == NULL && tail == NULL){
        cout << "No further node deletion " ; 
        return head ; 
    }
    // case 3 : single 
    else if(head == tail){
        head = NULL ;
        tail = NULL ; 
    }
    // case 4 - based on pos 
    else{
        // case 1 : head deletion 
        if(pos == 1){
            Node*temp = head ; 
            head = temp ->next ; 
            head->prev = NULL ; 
            temp->next = NULL ; 
            delete temp  ; 
        }
        else if(pos == size){
            Node* backward = head ; 
            for(int i = 0 ; i<pos - 2 ; i++){
                backward = backward -> next ; 
            }
            Node*curr = backward->next ; 
            Node* forward = curr->next ;  

            backward->next = forward ; 
            curr->next = NULL ; 
            curr->prev = NULL ; 
            delete curr ; 

        }
        // case 2 - pos rather than head 
        else{
            Node* backward = head ; 
            for(int i = 0 ; i<pos - 2 ; i++){
                backward = backward -> next ; 
            }
            Node*curr = backward->next ; 
            Node* forward = curr->next ; 

            backward->next = forward ; 
            forward->prev = backward ; 
            curr->next = NULL ; 
            curr->prev = NULL ; 
            delete curr ; 
        }
    }
   return head ; 
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

   
   deleteNode(head,tail,4) ;  
   print(head) ; 

   deleteNode(head,tail,1) ;  
   print(head) ; 

   deleteNode(head,tail,3) ;  
   print(head) ; 
 

   


}       