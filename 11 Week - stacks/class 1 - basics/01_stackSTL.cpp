#include<iostream> 
#include<stack> // for using the stacks we are using stacks header file 
using namespace std ; 
//! note - there is no build in function for printing the elements of the stacks 
int main(){
    stack<int> s ; // this is how we create the stacks 

    // inserting the elements in the stacks 
    s.push(10) ;  
    s.push(20) ;  
    s.push(30) ;  
    s.push(40) ; 

    // for removing the elements 
    s.pop() ; // this is going to remove the element from the top of the stacks 

    cout << s.empty() << endl  ;  // empty is going to return true if the stacks is empty 

    cout << s.size() << endl  ;  // this tells the size of the stacks 
    cout << s.top() <<endl ; 
}