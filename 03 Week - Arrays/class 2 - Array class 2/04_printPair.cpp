#include<iostream>
using namespace std ; 

// printing pairs from the element of the array into different patterns 

int main(){
    int arr[] = {10 , 20 , 30 , 40 } ; 
    int size = 4 ; 
    
    cout << "Pattern 1 : " << endl ; 
    for(int i = 0 ; i<size ; i++){
        for(int j = 0 ; j<size ; j++){
            cout << "("<< arr[i] <<"," << arr[j] << ")  "  ; 
        }
        cout << endl  ; 
    }
    cout << "Pattern 2 : " << endl ;  
    for(int i = 0 ; i<size ; i++){
        for(int j = 0 ; j<i ; j++){
            cout << "("<< arr[i] <<"," << arr[j] << ")  "  ; 
        }
        cout << endl  ; 
    }
    cout << "Pattern 3 : " << endl ;  
    for(int i = 0 ; i<size ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout << "("<< arr[i] <<"," << arr[j] << ")  "  ; 
        }
        cout << endl  ; 
    }
    cout << "Pattern 4 : " << endl ;  
    for(int i = 0 ; i<size ; i++){
        for(int j = size-1 ; j>=0 ; j--){
            cout << "("<< arr[i] <<"," << arr[j] << ")  "  ; 
        }
        cout << endl  ; 
    }
    cout << "Pattern 5 : " << endl ;  
    for(int i = 0 ; i<size ; i++){
        for(int j = size-1 ; j>=i ; j--){
            cout << "("<< arr[i] <<"," << arr[j] << ")  "  ; 
        }
        cout << endl  ; 
    }
    //! - this is most commonly used pattern to find the unique pairs in the array 
    //! - but to use this , array should be sorted 
    cout << "Pattern 6 : " << endl ;  
    for(int i = 0 ; i<size ; i++){
        for(int j = i + 1 ; j< size ;j++){
            cout << "("<< arr[i] <<"," << arr[j] << ")  "  ; 
        }
        cout << endl  ; 
    }
}