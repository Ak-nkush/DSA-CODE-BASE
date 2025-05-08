#include<iostream>
using namespace std ; 

// sorting 0 and 1 using counting them and then inserting them into the array 

void sorting (int arr[] , int n ) {
    int zeroCount = 0 ; 
    int oneCount = 0 ; 

    // counting 
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == 0 ){
            zeroCount++ ; 
        }
        if(arr[i] == 1 ){
            oneCount++ ; 
        }
    }
    // insertion
    int i = 0 ;  
    for(;i<zeroCount;i++){
        arr[i] = 0 ; 
    }
    for(;i<n;i++){
        arr[i] =1 ; 
    }
}

int main(){

    int arr[] = {0,1,1,1,0,0,1} ; 
    int size = 7 ; 

    sorting (arr , size) ; 
    for(int i = 0 ;i < size ; i++){
        cout << arr[i] << " , " ; 
     }
}