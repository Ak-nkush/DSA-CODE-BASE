#include<iostream>
#include<algorithm>
using namespace std ; 

//! own reverse method 
void reverseMethod(int * arr , int start , int end ){
    int i = start  ; 
    int j = end - 1 ;  
    while(i<=j){
        swap(arr[i] , arr[j]) ; 
        i++ ; 
        j-- ; 
    }
}

void print(int * arr , int& n ){
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << " " ; 
    }cout << endl ; 
}
int main(){
    int n = 5 ; 
    int arr[n] = {1,2,3,4,5} ; 
    int d = 2 ; 
    
    print(arr,n) ; 
    reverse(arr , arr+d); 
    reverse(arr+d , arr+n) ; 
    reverse(arr , arr+n) ; 
    print(arr,n) ; 


    int brr[n] = {11,22,33,44,55} ; 
    
    print(brr,n) ; 
    reverseMethod(brr , 0 , d ) ; 
    reverseMethod(brr,d,n) ; 
    reverseMethod(brr,0,n) ; 
    print(brr,n) ; 
}