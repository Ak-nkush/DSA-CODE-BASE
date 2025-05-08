#include<iostream>
#include<stack>
using namespace std ; 
int main(){
    stack<int> st ; 
    st.push(10) ; 
    st.push(20) ; 
    st.push(30) ; 

    cout << "Size : " << st.size() << endl ; 
    st.pop() ; 
    cout << st.top() << endl ; 
    
   if(st.empty() == true) {
    cout << "Stack is empty " << endl ; 
   }
   else{
    
   }
}