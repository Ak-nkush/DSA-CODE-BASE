#include<iostream>
using namespace std ; 

class Node{
    public : 
      int data ; 
      Node * next ; 
    
    Node(int value){
        data = value ; 
        next = NULL ; 
    }
};

class Queue{
    public : 
      
      int size ; 
      Node*front ; 
      Node* rear ; 

    Queue(){
        size = 0 ; 
        front = NULL ; 
        rear = NULL ; 
    }
       

    void push(int value){
        if(front == NULL && rear == NULL){
            // when queue is empty 
            Node* newNode = new Node(value) ; 
            front = newNode ; 
            rear = newNode ; 
            size = size + 1 ; 
        }
        else{
            Node* newNode = new Node(value) ; 
            rear->next = newNode ; 
            rear = newNode ;
            size = size + 1 ; 
 
        }
    }

    void pop(){
        if(size==0){
            cout << " underflow " << endl ; 
        }
        else if(front == rear){
            // when front and pop points at the same location 
            front = NULL ; 
            rear = NULL ;
            size = size - 1 ; 
 
        }
        else{
            Node* temp = front ;  
            front = temp->next ;  
            temp->next = NULL ; 
            delete temp ;
            size = size - 1 ; 
  

        }
    }
    
    int getsize(){
        return size ; 
    }
    int getfront(){
        return front->data ; 
    }

    int getBack(){
        return rear->data ; 
    }

    void print(){
        Node * temp = front ; 
        while(temp!=NULL){
            cout << temp->data << " " ; 
            temp =temp-> next ; 
        }cout << endl ; 
    }
};

int main(){
    Queue q; 
     q.push(10) ; 
     q.print() ; 

     q.push(20) ; 
     q.print() ; 

     q.push(30) ; 
     q.print() ; 
     
     q.push(40) ; 
     q.print() ; 

     q.push(50) ; 
     q.print() ; 
     cout << q.getsize() << endl ; 
     
     q.pop() ; 
     q.print() ; 
     cout << q.getsize() << endl ; 
     q.pop() ; 
     q.print() ; 
     cout << q.getsize() << endl ; 
     q.pop() ; 
     q.print() ; 
     cout << q.getsize() << endl ; 
     q.pop() ; 
     q.print() ; 
     cout << q.getsize() << endl ; 
     q.pop() ; 
     q.print() ; 
     cout << q.getsize() << endl ; 

    
      
}