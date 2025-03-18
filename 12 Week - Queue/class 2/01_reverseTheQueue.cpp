#include<iostream>
#include<queue>
using namespace std ; 
//todo - in this question we are going to reverse the queue without using the stacks 

void reverseQueue(queue<int> & q){
    if(q.empty()){
        return ; 
    }

    int element = q.front() ; 
    q.pop() ; 
    reverseQueue(q) ; 
    q.push(element) ; 
}
void print(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop() ;  
    }cout << endl ; 
}
int main(){
   queue<int> q ; 
   q.push(10) ; 
   q.push(20) ; 
   q.push(30) ; 
   q.push(40) ; 
   q.push(50) ; 

   print(q) ; 
   reverseQueue(q) ; 
   print(q) ; 
}