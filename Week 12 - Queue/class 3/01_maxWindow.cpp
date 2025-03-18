#include<iostream>
#include<deque> 
#include<vector>
using namespace std ; 
//! window siding problem , use of deque , comparing from back and front and eliminating the elements soo that largest for the particular window stays at front 


void findMaxIN(vector<int> & arr , int & k , vector<int>& ans){
    // step 1 : 
    deque<int> q ; 
    q.push_front(0) ; 
    for(int i = 1 ; i<k ;i++){
        while(!q.empty() && (arr[q.back()] < arr[i])){
            q.pop_back() ; 
           }
           
           // addition 
           q.push_back(i) ;
    }
    if(q.empty()) ans.push_back(0) ; 
    else ans.push_back(arr[q.front()]) ; 
        

    // step 2 
    for(int i = k ; i< arr.size() ; i++){
        // removal 
       if(!q.empty() &&(q.front() < i - k + 1)){
         q.pop_front() ; 
       }
       while(!q.empty() && (arr[q.back()] < arr[i])){
        q.pop_back() ; 
       }
       
       // addition 
       q.push_back(i) ;
       
       // storing 
       if(q.empty()) ans.push_back(0) ; 
       else ans.push_back(arr[q.front()]) ; 


    }
}
int main(){
    vector<int> arr = {9,10,9,-7,-4,-8,2,-6} ; 
    // Output: [10,10,9,2]
    int k = 5 ; 
    vector<int> ans ; 
    findMaxIN(arr,k,ans) ; 

    for(auto i : ans){
         cout << i << " " ; 
    }
}