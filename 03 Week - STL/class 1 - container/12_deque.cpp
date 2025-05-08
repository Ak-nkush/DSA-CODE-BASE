#include<iostream>
#include<queue> 
using namespace std ; 

int main(){
    deque<int> dq ; 
    dq.push_back(10) ; 
    dq.push_back(20) ; 
    dq.push_back(30) ; 
    dq.push_back(40)  ; 

    cout << "Size : " << dq.size() << endl ; 
    dq.pop_back() ;     
    cout << "Size : " << dq.size() << endl ; 

    dq.push_front(100) ; 
    
    deque<int>::iterator it = dq.begin() ; 
    while(it!=dq.end()){
        cout << *it << " " ; 
        it++ ; 
    }cout << endl ; 

    cout <<dq[0] << endl ; 
}
