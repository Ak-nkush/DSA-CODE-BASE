#include<iostream>
#include<stack> 
#include<vector>
#include<algorithm>
using namespace std ; 
//! problem statement - have to find the next smaller element for the each element , next element  means we have to check from left to right 
//! approach 1 - o(n^2) , looping for each element till be get the smaller one 
//! appraoch 2 - stacks use - why we are using stacks here ? 
//todo - if we go from left to right we wouldn't able to checks the next element at one tranversal , kyuki next access kesi karnega current element ka dyan rakhate huye . another thing to notice for the last element of the array the smaller element would always be -1 , soo knowing that case , thats become  the reason instead of going from left to right we going from right to left and , now we can access the next element , by staying on the current element using stacks 
//? logic - if we get the larger element than the current element we just pop it from the stacks and doesn't push that , and if we get the smaller element store that element and we push it into the stacks 

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

  for(int i = arr.size() - 1  ; i>=0 ; i--) {
        int currELement = arr[i] ; 
        while(st.top() >= currELement){
            st.pop() ; 
        }
        ans.push_back(st.top()) ; //todo - idhar mistake ho gya 
        st.push(currELement) ; 
    }

    reverse(ans.begin() , ans.end()) ;  // because we are storing from right to left 
    for(int i = 0 ; i< ans.size() ; i++){
        cout << ans[i] << " " ; 
    }
}
