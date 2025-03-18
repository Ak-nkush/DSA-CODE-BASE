#include<iostream>
using namespace std ; 
// first we are learning about the creation of the linked list 
// which can be done by class 

class Node{
    // here we declared the members of the class
public :  
 int data ; // -> this will store the value of the node  
 Node* next ; // -> this will the address of the next node , that why we took the node pointer 

// creating the constructor , the constructor always get initialized whenever we are creating the object throught that class 
// why we are the constructor -> because we want to point the every node to the null initially  
Node(int value){
     this->data = value ; 
     this->next = NULL ; 
}
};

int main(){
    // inserting the values in the node , by creating the object ; 

    // creating throught stack 
    Node second(20)  ;  // ERROR - because we haven't passed the argument while creating the node because our constructor is parameterised constructor 


    // creating throught the heap 
    Node* first = new Node(10) ;  // why this was giving the error because , the members where not declared as the public 
    return 0 ; 

}