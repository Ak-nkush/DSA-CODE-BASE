#include<iostream>
#include<stack>
using namespace std ; 
// insertion at the bottom - we will make the stacks empty and then insert the value and will backtracking and  entered the top element which we would store first ; 

void insertAtbottom(stack<int>&s , int value ){
    // base case 
    if(s.empty()){
        s.push(value) ; 
        return ; 
    }
    // case 1 : 
    int topElement = s.top() ; 
    s.pop() ; 
    insertAtbottom(s,value) ; 
    s.push(topElement) ; 
}
void print(stack<int>&s){
    while(!s.empty()){
        cout<<s.top()<<" " ; 
        s.pop() ;
    }cout<<endl ; 
}
int main(){
    stack<int> s ; 
    s.push(10) ; 
    s.push(20) ; 
    s.push(30) ; 
    s.push(40) ; 
    s.push(50) ;
    int value = 99 ; 
    insertAtbottom(s, value) ;
    print(s) ; 
}