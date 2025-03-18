#include<iostream>
#include<stack> 
#include<vector>
#include<algorithm>
using namespace std ; 
//! problem statement - previous first smaller element search for every element 
//! brute force - o(n^2) ; 
//! appraoch 2 - using stacks - why we are using stacks ? 
// todo - because we have to check the previous element , while begin on current element , another thing that for firstmost element the smaller element would always be -1 ; soo checking would began for left to right , soo the prevous element can be access using the stack while staying on the current element . 
//logic - if stacks top is greater than the element than remove it from the stacks and if smaller he toh , store the top of the stack and enter the current element into the stacks 
 

int main(){
  vector<int> arr ; 
  arr.push_back(8) ; 
  arr.push_back(5) ; 
  arr.push_back(3) ; 
  arr.push_back(2) ; 
  arr.push_back(4) ; 
  arr.push_back(1) ;

  vector<int> ans ; 

  stack<int> st ; 
  st.push(-1) ; //! initially stacks will store te -1 to checks the last element of the array 

  for(int i = 0 ; i<arr.size() ; i++) {
        int currELement = arr[i] ; 
        while(st.top() >= currELement){
            st.pop() ; 
        }
        ans.push_back(st.top()) ; //todo - idhar mistake ho gya 
        st.push(currELement) ; 
    }

     
    for(int i = 0 ; i< ans.size() ; i++){
        cout << ans[i] << " " ; 
    }
}