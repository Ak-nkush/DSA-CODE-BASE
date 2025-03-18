#include<iostream>
#include<cstring>
#include<string>
using namespace std ; 
//! reverse the string using recrusion 
//todo - appraoch 1 - using head recursion 
//todo - appraoch 2 - swapping 

// void reverse(string& s , int index ){
//     // base condition 
//     if(index == s.length()){
//         return ; 
//     }
//     // case 1 : 
     
//     reverse(s,index + 1 ) ; 
//     cout << s[index] ;
// } 
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
