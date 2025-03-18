#include<iostream>
using namespace std ; 
//! implementing the stacks using the linked list is dynamic in nature , because we dont have to declare the size of the stacks like we did in the implementing the stack with the array , here the space complexity will be much more better than the space complexity of the stacks with the array 

class Node{
 public : 
    int data ; 
    Node* next ; 

    Node(int value){
        data = value ; 
        next = NULL ; 
    }
};


class Stack{
 public: 
     Node* top  ; //Because top will point to the node 
     int size  ;   // initially the size is zero  

     Stack(){
        top = NULL ; 
        size = 0 ; 

     }
 
    void push(int value){
        Node*newNode = new Node(value) ; 
        newNode->next = top ; 
        top = newNode ; 
        size = size + 1 ; 
    }

    void pop(){
        //! poping karte karte , elements hi nahi rahenga
        if(top==NULL){
            // it means the stack is empty
            cout << "stack underflow " << endl ; 
        }
        else{
        Node* temp = top ; 
        top = temp->next ; 
        temp->next = NULL ; 
        delete temp ; 
        size = size - 1 ;
        } 
    }
    
    void getsize(){
        cout << size << endl ; 
    }

    void gettop(){
        if(top==NULL){
            cout << "Stacks is empty "<< endl ; 
            return ; 
        }
        cout << top->data << endl ; 
    }
    bool checkempty(){
        if(top==NULL){ 
            return true ; 
        }
        return false ; 
    }
     
    void print(){
        if(top==NULL){
            cout << "Stack is empty" << endl ;
        }
        Node*temp = top ; 
        while(temp!=NULL){
            cout << temp->data << " " ; 
            temp = temp->next ;
        }cout << endl ; 
    }   
    
};


int main(){
    Stack s ; 
    s.push(40) ; 
    s.push(50) ; 
    s.push(60) ; 
    s.push(70) ;
    s.print() ; 
    s.gettop() ; 
    s.getsize() ; 
    cout << s.checkempty() << endl ; 
    s.pop() ; 
    s.print() ; 

     

} 
