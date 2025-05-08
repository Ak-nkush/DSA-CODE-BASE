#include<iostream>
using namespace std ; 
// linear search algorithm 
// finding the target 

bool findTarget(int arr[] , int size , int  target ){
    for(int index = 0 ; index < size ; index++){
       int element = arr[index] ; 
       if(element == target ){
        return true ; 
       }
    }
    return false ; 
}

void askValue(int arr[] , int size ) {
    for(int i = 0 ;  i< size ; i++){
        cout << "Enter the value for index " << i << " : " ; 
        cin >> arr[i] ; 
    }
}

int main(){

    int arr[100] ; 
    int size ; 
    cout << "Enter the number of elements you want to enter : " ; 
    cin >> size ;

    askValue(arr,size) ; 

    int target ; 
    cout << "Enter the target : " ; 
    cin >> target ;  

    int ans = findTarget(arr,size,target) ; 
    
    cout << "target found : " << ans << endl ; 
   
    
    return 0 ; 
}