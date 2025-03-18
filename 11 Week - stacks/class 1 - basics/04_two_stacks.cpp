#include<iostream>
using namespace std ; 


 
class stack{
    public : 
         int* arr ;
         int size ; 
         int top1  ; 
         int top2  ; 
        
        stack(int capacity){
            arr = new int[capacity] ; 
            size = capacity ; 
            top1 = -1 ;
            top2 = size ;  
             
        }

        void push1(int value){
             
            if(top2 - top1 == 1){
                cout<< "stack overflow" << endl  ; 
                
            }
            else{
            top1++ ; 
            arr[top1] = value ;
            } 
        }
        void push2(int value){
             
            if(top2 - top1 == 1){
                cout<< "stack overflow" << endl  ; 
                
            }
            else{
            top2-- ; 
            arr[top2] = value ;
            } 
        }

        void pop1(){
             
            if(top1 == -1 ){
                cout << "stack underflow " << endl ;
            }
            else{
            arr[top1] = 0 ;  
            top1-- ; 
            }

        }
        void pop2(){
             
            if(top2 == size ){
                cout << "stack underflow " << endl ;
            }
            else{
            arr[top2] = 0 ;  
            top2++ ; 
            }

        }

       void getSize(){
            cout <<  size << endl  ; 
        }

        void isempty(){
            if(top1==-1 && top2==size){
                cout <<  true << endl ; 
            }
            else{
                cout <<  false << endl  ; 
            }
        }

       void gettop(){
            cout <<"top1 : "<< arr[top1] << endl ; 
            cout <<"top2 : "<< arr[top2] << endl ; 
        }

        void print(){
            for(int i = 0 ; i<size ; i++ ){
                cout << arr[i] << " " ; 
            } cout <<endl ;
        }
} ;

int main(){
    stack s(5) ; 
    s.push1(10) ; 
    s.push2(50) ;
    s.gettop() ; 
    s.print() ;
    s.getSize() ;  

    s.push2(60) ;
    s.push2(70) ;
    s.push2(80) ;
    s.push2(90) ;
    s.print() ; 
}