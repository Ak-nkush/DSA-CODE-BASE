#include<iostream>
using namespace std ; 
//! this is the actual implementaion of the deque has the deque = both side insertion + circular queue 
//todo - rememeber ,  CHECK for overflow , underflow and size of the deque 

class Deque{
  public : 
     // we have to consider array ,size , front and back 
     int * arr ; // taking arr has dyamically 
     int size ; 
     int front ; 
     int rear ; 

   Deque(int n){
      arr = new int[n] ; 
      size = n ; 
      front = -1 ; 
      rear = -1 ; 
   }
   
   void push_front(int value){
      // case 1 : empty queue 
      if(front == -1 && rear == -1){
         front ++ ; 
         rear++ ; 
         arr[front] = value ; 
      }
      // case  2 : when front == 0 and there is no position to enter the new front has it will make the front -1 
      // in that case we are assigning the front the last index of the array 
      else if( front == 0 && rear!=size-1){
         front = size - 1 ;
         arr[front] = value ;  
      }
      // case 3 : overflow 
      else if((rear == front - 1) || (front == 0 && rear == size - 1 )){
          cout << "Overflow " << endl ; 
      }
      // case 4 : normal front insertion when we are decrementing the front and assigning the value 
      else{
         front-- ; 
         arr[front] = value ; 
      }
   }
   void push_back(int value){
      // case 1 : overflow
      if((rear == front - 1) || (front == 0 && rear == size - 1 )){
         cout << "Overflow " << endl ; 
     }
      // case 2 : for empty queue 
      else if (front == -1 && rear == -1  ){
         front++ ; 
         rear++ ; 
         arr[rear] = value ;
      }
      else if(rear == size -1 && front!=0){
         rear = 0 ; 
         arr[rear] = value ; 
      }
      // for regular insertion 
      else {
         rear++ ; 
         arr[rear] = value ;
      }
   }

   void pop_front(){
      // case 1 : single element 
      if(front == -1 && rear == -1 ){
         cout << "Underflow" << endl ;
      }
      else if( front == rear){
         front = -1 ; 
         rear = -1 ;
      }
      else if(front == size -1 ){
         front = 0 ; 
      }
      else{
         front++ ; 
      }

   }
   void pop_back(){
      // case 1 : single element 
      if(front == -1 && rear == -1 ){
         cout << "Underflow" << endl ;
      }
      else if( front == rear){
         front = -1 ; 
         rear = -1 ;
      }
      else if(rear == 0 ){
         rear = size - 1 ; 
      }
      else{
         rear-- ; 
      }

   }
   
   int getsize(){
      if (isEmpty()) {
         return 0;
     } else if (front <= rear) {
         return rear - front + 1;
     } else {
         return (size - front) + (rear + 1);
     }
   }

   bool isEmpty(){
      if(front == -1 && rear == -1) return true ; 
      else return false ; 
   }
   
   int getfront(){
      return arr[front] ; 
   }
   
   int getback(){
      return arr[rear] ; 
   }
   
};

int main(){
   Deque dq(5) ; 
   dq.push_front(20);
   dq.push_front(90);
   dq.push_back(30) ;
   dq.push_back(40) ;
   
   cout << dq.getsize() <<endl ; 
   
   while(!dq.isEmpty()){
      cout << dq.getfront() << endl ; 
      dq.pop_front() ;
   }

   

}



