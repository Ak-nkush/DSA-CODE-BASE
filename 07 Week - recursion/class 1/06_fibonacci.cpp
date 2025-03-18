#include<iostream>
using namespace std ; 
// fibonacci series -  sum of two previous terms
// code - number at nth position of the series  
// this type of recursion is known as recursion tree 
// here the fibonacci series start from 1,2,3,5,8,13

int fib(int n ){
 // base condition - zero'th term 0 and first term 1 
 if(n==0 || n==1) return n ; 
 int finalans = fib(n-1) + fib(n-2) ; // multiply recursion type 
 return finalans ; 

}

int main(){
      cout << "Enter the positon of whose value you want : " ; 
      int n ; 
      cin >> n ; 
      int ans = fib(n) ; 
      cout << ans << endl ; 

}