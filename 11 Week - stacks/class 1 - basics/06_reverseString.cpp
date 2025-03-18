#include<iostream>
#include<stack>
using namespace std ;
//! here we access the stacks using the recursion , but we also be simply done by using loop , as we are entering the character using the loop , the 0 index character will entered the first and the last character will entered at the last , access the stack will automatically reverse the string 

void reverse(stack<char>& st ){
    // base case
    if(st.empty()){
        return ; 
    }
    cout << st.top(); 
    st.pop() ; 
    reverse(st) ; 
}
int main(){
    string name = "Great" ; 
    stack<char> st ;
    cout << name << endl ; 
    for(int i = 0 ; i<name.length() ; i++){
        char ch = name[i] ; 
        st.push(ch) ; 
    }
    reverse(st) ;




}