#include<iostream>
#include<stack>
using namespace std ; 
//! this is the different approach - here we are going to find the middle index using the size , and then are going to pop that number of element 
void getMiddle(stack<int>&s , int count ){
    // base case - jab tak count zero nahi hota 
    if(count == 0 ){
        cout << s.top() << endl ; 
        return ;
    }
    // case 1 : 
    int topelement = s.top() ; 
    s.pop() ; 
     
    getMiddle(s,--count) ; 
}
int main(){
    stack<int> s ; 
    s.push(10) ; 
    s.push(20) ; 
    s.push(30) ; 
    s.push(40) ; 
    s.push(50) ;
    int count = s.size()/2 ; 
    getMiddle(s,count) ; 
} 