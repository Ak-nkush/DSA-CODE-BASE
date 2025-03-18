#include<iostream>
#include<stack>
using namespace std ; 
void insertSorted(stack<int> &s , int value ){
    // edge case 
    if(s.empty()){
        s.push(value) ; 
        return ; 
    }
        // base conditon : jab top ki value , insertvalue se chooti ho toh insert kar do 
    if(!s.empty() && s.top()<value){
        //! here it is important to check weather the stack is empty or not 
        s.push(value) ; 
        return ; 
    }
    // case 1 : 
    int topElement = s.top() ; 
    s.pop() ; 
    insertSorted(s,value) ; 
    s.push(topElement) ; 
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
    int value = 9 ; 
    //! in  case our value is not greater then anyof the element then the garbage value is entered 
    print(s) ; 
    insertSorted(s,value) ; 
    print(s) ; 

}