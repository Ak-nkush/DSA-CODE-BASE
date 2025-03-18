#include<iostream> 
#include<stack>   
using namespace std ; 
//! this approach is ok , finding the middle of the stack depends on the question , wheather the index starts from the zero or the one 

void getmiddle(stack<int> &s , int mid ){
    // base condition ; 
    if(s.size() == mid){
        cout << s.top() << endl ; 
        return ; 
    }
    int topElement = s.top() ; 
    s.pop() ; 
     
    getmiddle(s,mid) ; 
    s.push(topElement) ; 
}
 
int main(){
    stack<int> s ; 
    
    s.push(10) ;  
    s.push(20) ;  
    s.push(30) ;  
    s.push(40) ; 
    s.push(50) ; 
    s.push(60) ; 
    s.push(70) ; 
    s.push(80) ; 
    int mid ; 
    int size = s.size() ; 
    if(size&1){
    mid = (s.size() / 2) + 1  ; 
    }
    else{
         
       mid = (s.size() / 2); 
    }  
    getmiddle(s , mid ) ; 
}
     