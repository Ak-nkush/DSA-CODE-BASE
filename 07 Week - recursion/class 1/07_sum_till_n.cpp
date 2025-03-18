#include<iostream>
using namespace std ; 
// this is the last problem of recursion class 1  
int totalSum(int n ){
    if(n==1) return 1 ; 
    int recursiveAns = totalSum(n-1) ; 
    int finalans = n + recursiveAns ; 
    return finalans ; 
}

int main(){
    cout <<"Enter the value of n : " ; 
    int n ; 
    cin >> n ; 
    int ans = totalSum(n) ; 
    cout << ans ; 
}