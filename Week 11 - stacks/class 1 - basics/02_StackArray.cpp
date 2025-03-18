#include<iostream>
using namespace std ; 
//todo - the last code how the build stack is use , in this code we are going to understand , how stacks behave 
//todo - whats its behaviour , push , pop , size , empty , top 
//! - this we are going to do using arrays here , which we the optimal appraoch 

 
class stack{
    public : 
         int* arr ; //! here we are using array pointer we are using dynamic memory allocation soo the size of the stacks can be flexible at the runtime 
         int size ; 
         int top ; 
        
        stack(int capacity){
            arr = new int[capacity] ; 
            size = capacity ; 
            top = -1 ; 
            // - initially the stacks is empty , and every element in the single stacks will going get entered from the top , soo that the reason we are taking the top as the -1 and while insertion we are going to increment the top by and insert the value , that will update the top 
        }

        void push(int value ){
            // here 2 case are there 
            // case 1 : if stacks is full there will no place to insert 
            if(top==size-1){
                cout<< "stack overflow" << endl  ; 
                
            }
            else{
            top++ ; 
            arr[top] = value ;
            } 
        }

        void pop(){
            // poping will operates at the top of the stacks ; 
            // soo the top is at the top of the stacks
            // and poping alos have the 2 conditon 
            // case 1 : if stacks is empty there is no poping 
            if(top == -1 ){
                cout << "stack underflow " << endl ;
            }
            else{
            arr[top] = 0 ;  
            top-- ; 
            }

        }

        int getSize(){
            return top+1 ; 
        }

        bool isempty(){
            if(top==-1){
                return true ; 
            }
            else{
                return false ; 
            }
        }

       void gettop(){
            cout << arr[top] << endl ; 
        }

        void print(){
            for(int i = 0 ; i<size ; i++ ){
                cout << arr[i] << " " ; 
            } cout <<endl ;
        }
} ;

int main(){
    stack s(5) ; 
    s.push(10) ; 
    s.push(20) ; 
    s.push(30) ; 
    s.push(40) ; 
    s.print() ; 
    s.gettop() ; 

    s.pop() ; 
    s.pop() ; 
    s.pop() ; 

    s.gettop() ;
    s.pop() ; 
    s.pop() ; 
    
    s.push(10) ; 
    s.push(20) ; 
    s.push(30) ; 
    s.push(40) ; 
    s.push(50) ;
    s.print() ; 
    s.push(60) ; 
    s.print() ;  

    
}