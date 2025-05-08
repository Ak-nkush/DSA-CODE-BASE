#include<iostream>
using namespace std ; 
// sorting 0 1 2 in the given array sloved using counting method 

void sorting(int arr[], int n ){
    int zeroCount = 0 ;  
    int oneCount = 0 ;  
    int twoCount = 0 ;  
    for(int i = 0 ; i<n ;i++){
        if(arr[i]==0){
            zeroCount++ ; 
        }
        else if (arr[i]==1){
            oneCount++ ; 
        }
        else if(arr[i]==2){
            twoCount++ ; 
        }

    }

    // here we have to add the pointers since we have to sort more than two  numbers 
    fill(arr,arr+zeroCount,0) ; 
    fill(arr+zeroCount,arr+zeroCount + oneCount ,1) ; 
    fill(arr+zeroCount + oneCount ,arr+zeroCount + oneCount + twoCount,2) ; 
} 

int main(){
    int arr[] = {0,2,1,2,2,1,1,0} ; 
    int size = 8 ; 
    sorting(arr , size) ; 

    for(int i = 0 ;i<size ; i++){
        cout << arr[i] << " " ; 
    }
}