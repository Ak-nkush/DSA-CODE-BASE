#include<iostream> 
#include<queue> 
using namespace std ; 

int main(){
    priority_queue<int> pq ; 
    pq.push(10) ; 
    pq.push(44) ; 
    pq.push(66) ; 
    pq.push(177) ;

    cout << pq.top() << endl ;  
    pq.pop() ; 
    cout << pq.top() << endl ; 
    cout << "Size : " << pq.size() << endl ;  
}