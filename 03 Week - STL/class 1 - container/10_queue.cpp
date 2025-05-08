#include<iostream>
#include<queue>
using namespace std ; 
int main(){
    // declaration of queue 
    queue<int> q ; 

    // insertion in the queue 
    q.push(10) ; 
    q.push(20) ; 
    q.push(30) ; 
    q.push(40) ; 

    // size of the queue 
    cout << q.size() << endl ; 

    //removal in the queue 
    q.pop() ; 
    cout << q.size() << endl ; 

    if(q.empty() == true)
    cout <<"Queue is empty" << endl ;   
    else 
    cout <<"Queue is not empty" << endl ;   

    cout << q.front() << endl ; 
    cout << q.back() << endl ; 
}