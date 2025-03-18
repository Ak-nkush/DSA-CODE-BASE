#include<iostream>
using namespace std ;
// todo - here we have to implement the deque using the array , in deque the insertion and deletion take place from the both of the ends. 

class deque{
  public : 
     int* arr ; 
     int size ; 
     int front ; 
     int rear ;

  public : 
    deque(int n){
        arr = new int[n]() ; 
        size = n ; 
        front = -1 ; 
        rear = -1 ;
    }

    void pushFront(int value){
       //overflow 
       if(front == 0 ){
        cout << "overflow " << endl ; 
       }
       else if(front == -1 && rear == -1){
        front++ ; 
        arr[front] = value ; 
        rear++ ;  
       }
       else{
        front-- ; 
        arr[front] = value ; 
       }
    }

    //todo - in the pushBack the inserrtion happens like the normal one 
    void pushBack(int value){
       //overflow 
       if(rear == size - 1){
        cout << "overflow " << endl ; 
       }
       else if(front == -1 && rear == -1){
         rear++ ; 
         arr[rear] = value ; 
         front++ ; 
       }
       else{
         rear++ ; 
         arr[rear] = value  ; 
       }
    }
    
    // todo - in the popFront removal happens like the normal queue  
    void popFront(){
       if(front == -1 && rear == -1){
        cout << "underflow " << endl ; 
       }
       else if (front == rear){
        front = -1 ; 
        rear = -1 ; 
       }
       else{
         arr[front] = -1 ;
         front++ ;
       }
    }

    void popBack(){
       if(front == -1 && rear == -1){
        cout << "underflow " << endl ; 
       }
       else if (front == rear){
        front = -1 ; 
        rear = -1 ; 
       }
       else{
         arr[rear] = -1 ;
         rear-- ;
       }
    }

    int getsize(){
      if(rear == -1 && front == -1 ) return 0 ; 
      else{
        return rear - front + 1 ; 
      }
    }


    bool isempty(){
        if(rear == -1 && front == -1 ) return true ; 
        return false ; 

    }

    int getfront(){
        return arr[front] ; 
    }

    int getback(){
        return arr[rear] ; 
    }

    void print(){
        for(int i = 0 ; i<size ; i++){
            cout << arr[i] << " " ; 
        }
        cout << endl ; 
    }
};

int main(){
    deque dq(5) ; 

    dq.pushFront(10) ; 
    dq.print() ; 
     

    dq.pushBack(20) ; 
    dq.print() ; 

    dq.pushBack(30) ; 
    dq.print() ; 

    dq.pushBack(40) ; 
    dq.print() ; 

    dq.pushBack(50) ; 
    dq.print() ; 
    dq.pushBack(50) ; 
    dq.print() ; 
  
    dq.popFront() ; 
    dq.print() ; 
    dq.popFront() ; 
    dq.print() ; 
    dq.popBack() ; 
    dq.print() ; 
    cout << dq.getsize() << endl ; 
    cout << dq.isempty() << endl ; 


}