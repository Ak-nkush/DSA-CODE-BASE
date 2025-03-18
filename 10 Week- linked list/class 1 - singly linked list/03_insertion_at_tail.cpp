#include<iostream>
using namespace std ;  

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
        // 2nd step , joint the node to the prvious node , the previous node is tail  
        tail-> next = newNode ; 
        // 3rd step , update the tail 
         tail = newNode ; 
    }
    return head ; 
    // here we are returning the tail for our convenience because the traversing in the LL always begins from the head , we can make the function as the void too as we are using references of head and tail 
}
// creating the print function 
void print(Node*head){
    Node* temp = head ; 
    while(temp!=NULL){
        cout<<temp->data<<"->" ;
        temp = temp->next ;
    }
    cout << "NUll" <<endl ; 
}
int getsize(Node*head){
    Node* temp = head ;
    int size = 0 ;  
    while(temp!= NULL){
        temp = temp -> next ; 
        size ++ ; 
    }
    return size ; 
}
int main(){
    Node* head = NULL ; 
    Node* tail = NULL ; 

    head = insertionAtTail(10,head,tail) ;  
    print(head) ; 
    head = insertionAtTail(20,head,tail) ;  
    print(head) ; 
    head = insertionAtTail(30,head,tail) ;  
    print(head) ; 
    head = insertionAtTail(40,head,tail) ;  
    print(head) ; 
    head = insertionAtTail(50,head,tail) ;  
    print(head) ; 

    cout << getsize(head) ; 

    return 0 ; 
}

    

     
  

   

    
