#include<iostream>
using namespace std ; 
//  insertion at tail   
class Node{
 public :  
  int data ;  
  Node* next ;  

Node(int value){
     this->data = value ; 
     this->next = NULL ; 
    }
};
Node* insertionAtTail(int value , Node* &head , Node* &tail){
    
    if(head == NULL && tail == NULL){
       
        Node* newNode = new Node(value) ; 
        
        head = newNode ;
        tail = newNode ; 

    }
    else{
        
        Node* newNode = new Node(value) ; 
        
        tail-> next = newNode ; 
         
         tail = newNode ; 
    }
    return head ; 
     
}

void print(Node*head){
    Node* temp = head ; 
    while(temp!=NULL){
        cout<<temp->data<<"->" ;
        temp = temp->next ;
    }
    cout << "NUll" <<endl ; 
}
//todo:-> removing duplicates from the linked list 
Node* removeDuplicate(Node*head , Node*tail){
    // case 1 ll is empty ; 
    if(head == NULL && tail== NULL){
        return head ; 
    }
    else if (head == tail ){
        return head ; 
    }
    else{
    Node* curr = head ; 
    Node* forward = head->next ; 
    while(forward != NULL){
        if(curr->data == forward->data){
           curr->next = forward->next ; 
           forward->next = NULL ; 
           delete forward ; 
           forward = curr->next ; 
        }
        else{
            curr = curr->next ; 
            forward = forward->next ; 
        }
    }
    }
}
int main(){
    Node* head = NULL ; 
    Node* tail = NULL ; 

    head = insertionAtTail(10,head,tail) ;  
    head = insertionAtTail(10,head,tail) ;  
    head = insertionAtTail(10,head,tail) ;  
    head = insertionAtTail(20,head,tail) ;  
    head = insertionAtTail(20,head,tail) ;  
    head = insertionAtTail(20,head,tail) ;  
    head = insertionAtTail(30,head,tail) ;  
    head = insertionAtTail(40,head,tail) ;  
    print(head) ; 
    head = removeDuplicate(head,tail) ; 
    print(head) ; 
     
     
    
     


    return 0 ; 
} 