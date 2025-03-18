#include <iostream>
using namespace std;
// todo - here we have to implement the functionality of the queue using the array , it means that we are creating our own queue . soo that does the normal queue do , insertion always been doen from the back , the removal is done from the front , accessing the element can be done from both back and end , other method are about the size and the empty check . soo for this we are going to use the class

class Queue
{
    //! - here we going to take the memeber as the private
private:
    int *arr;
    int size;
    int front;
    int rear;
    // todo - since the accessing of the element can be done from both the ends

public:
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = -1;
        rear = -1;
    }

    void push(int value)
    {
        // initially both the front and back are placed at the -1 ;
        // the insertion will always done from the back soo we have to move the rear and update its value
        // here is the catch , when the queue is empty we have to move front and as well as rear since they are going to point the same location
        // and another special condition , that is about the overflow
        if (rear == size - 1)
        {
            cout << "overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            rear++;
            arr[rear] = value;
            front++;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }
    void pop()
    {
      // well pop is different , when we are removing the element its going to happend from the front 
      // and when there is the single element left that is when the front and back points at the same location then 
      // later they are going to point to -1 
        if (rear == -1 && front == -1)
        {
            cout << "underflow" << endl;
        }
        else if (front == rear)
        {
            rear = -1;
            front = -1;
        }
        else
        {
            front++;
        }
    }
    
    //! - while getting the size of the queue there we have to note that when they are at -1 , then there size is 0 
    int getsize()
    {
        if(rear == -1 && front == -1) return 0 ; 
        else return rear - front + 1 ; 
    }

    bool isempty()
    {
        if (rear == -1 && front == -1)
        {
            return true;
        }
        return false;
    }

    int getfront()
    {
        return arr[front] ;
    }

    int getback()
    {
        return arr[rear] ;
    }
};
int main()
{
    Queue b (5) ; 
    b.push(10) ; 
    b.push(20) ; 
    b.push(30) ; 
    b.push(40) ; 
    b.push(50) ; 

    cout << b.getfront() << endl ; 
    cout << b.getback() << endl ;
    b.pop() ; 
    cout << b.getfront() << endl ; 
     b.pop() ;  
     b.pop() ;  
     b.pop() ;  
     b.pop() ;  
     b.pop() ;  
     b.pop() ; 
     cout << b.getsize() << endl ; 
     cout << b.isempty() << endl ;  

}