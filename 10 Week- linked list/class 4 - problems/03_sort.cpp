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
//todo:-> sort 0 , 1 , 2 using count and fill approach 
Node * sort(Node*head){
    int zero = 0 ; 
    int one = 0 ; 
    int two = 0 ; 

    Node*temp = head ; 
    while(temp!=NULL){
        if(temp->data==0) zero++ ; 
        else if(temp->data==1) one++ ; 
        else if(temp->data==2) two++ ; 
        temp= temp->next ; 
    }
    cout << zero << " " << one << " " << two << endl ; 
    
    Node*curr = head ; 
    while(zero--){
        curr->data = 0 ; 
        curr = curr->next ; 
    }
    while(one--){
        curr->data = 1 ; 
        curr = curr->next ; 
    }
    while(two--){
        curr->data = 2 ; 
        curr = curr->next ; 
    }
    return head ; 
} 

int main(){
    Node* head = NULL ; 
    Node* tail = NULL ; 

    head = insertionAtTail(0,head,tail) ;  
    head = insertionAtTail(1,head,tail) ;  
    head = insertionAtTail(0,head,tail) ;  
    head = insertionAtTail(2,head,tail) ;  
    head = insertionAtTail(1,head,tail) ;  
    head = insertionAtTail(0,head,tail) ;  
    head = insertionAtTail(2,head,tail) ;  
    head = insertionAtTail(1,head,tail) ;  
    print(head) ; 
    head = sort(head) ; 
    print(head) ; 
     
     
    
     


    return 0 ; 
} 