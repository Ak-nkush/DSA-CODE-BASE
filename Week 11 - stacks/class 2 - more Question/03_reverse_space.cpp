#include<iostream>
#include<stack>
using namespace std ; 
//! here we have to reverse the stack without extrea space 

void insertAtbottom(stack<int> &s , int value){
    if(s.empty()){
        s.push(value) ; 
        return ; 
    }

    int topElement = s.top() ; 
    s.pop() ; 
    insertAtbottom(s,value) ; 
    s.push(topElement) ; 
}

void reverseWithoutExtraSpace(stack<int> &s){
    // base condtion : it would be same , empty stacks get the element entried 
    if(s.empty()){
        return ; 
    }
    int insertElement = s.top() ; 
    s.pop() ; 
    reverseWithoutExtraSpace(s) ; 
    insertAtbottom(s,insertElement) ; 
}
void print(stack<int> s){
 while(!s.empty()){
    cout << s.top() <<" " ; 
    s.pop() ; 
 }cout << endl ; 
}
int main(){
    stack<int> s ; 
    s.push(10) ; 
    s.push(20) ; 
    s.push(30) ; 
    s.push(40) ; 
    s.push(50) ;
    reverseWithoutExtraSpace(s) ; 
    print(s) ; 

}