#include<iostream>
#include<cstring>
#include<string>
using namespace std ; 
//! reverse the string using recrusion 
//!- i can be also be done by creating another string and push character while backtracking 
//
//todo - appraoch 1 - using head recursion 
//todo - appraoch 2 - swapping 

// backtracking approach 
void solve(string &s , int i , string & ans ){
    // base case 
    if(i == s.size()){
        return ; 
    }
    char ch = s[i] ; 
    solve(s,i+1,ans) ; 
    ans.push_back(ch) ; 
} 
//! swapping appraoch 
void reverseTwo(string &s , int start , int end){
    // base condition 
    if(start > end){
        return ; 
    }
    // case 1 : 
    swap(s[start] , s[end]) ; 
    ++start ; 
    --end ;
    reverseTwo(s,start,end) ; 
}
int main(){
    string s = "Great" ; 
    cout << s << endl ; 
    // reverse(s,0) ;
    int start = 0 ; 
    int end = s.length() - 1 ;
    reverseTwo(s,start,end ) ; 
    cout << s << endl ; 
    return 0 ; 
}
