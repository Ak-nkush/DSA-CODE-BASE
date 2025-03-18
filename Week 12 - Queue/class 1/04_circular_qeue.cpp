#include<iostream> 
using namespace std ; 
// todo - Implementing the circular queue using the array 
class circularQueue{
   public : 
      int * arr ; 
      int size ; 
      int front ; 
      int rear ; 

    public : 
       circularQueue(int n){
        arr = new int[n]() ; 
        size = n ; 
        front = -1 ; 
        rear = -1 ; 
    }

    void push( int value ){
       if(front == -1 && rear == -1 ){
        front++ ; 
        rear++ ; 
        arr[rear] = value ;
       }
       else if (rear == front - 1 ){
        cout << "Overflow" << endl ;
       }
       //! This is the main condition of the circular queue that when it is the last index , then go to index 0 , only when the front is not equal to zero
       else if(rear == size - 1 && front!=0){
           rear = 0 ;
           arr[rear] = value ;  
       }
       else{
        // normal insertion 
        rear++ ; 
        arr[rear] = value ; 
       }
    }

    void pop(){
        if(front == -1 && rear == -1) {
            cout << "Underflow" << endl ; 
        }
        else if(front == rear){
            front = -1 ; 
            rear = -1 ; 
        }
        else if (front == size -1 ){
            arr[front] = -1 ; 
            front = 0 ; 
            
        }
        else{
            // normal deletion 
            arr[front] = -1 ; 
            front++ ; 

        }
    }
    
    //! - getting the size in the circular one is tricky 
    int getsize(){
       if(front <= rear){
         return rear - front + 1 ; 
       }
       else{
         return ((size - front) + (rear + 1)) ; 
       }
    }

    int getfront(){
        return arr[front] ; 
    }
        
    int getback(){
        return arr[rear] ; 
    }

    bool isempty(){
       if(rear == -1 && front == -1 ){
        return true ; 
       }
       return false ; 
    }

    void print(){
        for(int i = 0 ; i<size ; i++){
            cout << arr[i] << " " ; 
        }cout << endl ; 
    }
};

int main(){
    circularQueue q(5) ;
    
    q.push(10) ; 
    q.push(20) ; 
    q.push(30) ; 
    q.push(40) ; 
    q.push(50) ; 

    q.pop() ; 
    q.pop() ; 
    
    q.push(60) ; 
    q.push(90) ; 
    q.push(90) ; 
    q.pop() ; 
    q.pop() ; 
    q.pop() ; 
 
    cout << q.getsize() << endl ; 
    q.print() ; 

}