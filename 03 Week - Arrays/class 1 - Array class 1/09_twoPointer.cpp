// reverse the array using two pointers 

#include<iostream>
using namespace std ;

void print(int arr[] , int size ){
    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << " " ; 
    }cout << endl ; 
}

int main(){
    int arr[5] = {1,2,3,4,5} ; 
    int size = 5 ; 

    int i = 0 ; 
    int j = size - 1 ; 
    
    print(arr,size) ; 
    
    while(i<=j){
        int temp = arr[i] ; 
        arr[i] = arr[j]  ; 
        arr[j] = temp ; 
        
        i++ ; 
        j-- ; 
    }
    
    print(arr,size) ; 
    return 0 ; 

}