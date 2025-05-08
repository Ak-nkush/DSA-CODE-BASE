#include<iostream>
using namespace std ; 
// linear search algorithm 
// counting zeros and ones in the array 

void askValue(int arr[] , int size ) {
    for(int i = 0 ;  i< size ; i++){
        cout << "Enter the value for index " << i << " : " ; 
        cin >> arr[i] ; 
    }
}

void count ( int arr[] , int size ){
    int countzero = 0 ; 
    int countone = 0 ; 
    for(int i = 0 ; i<size ; i++){
       if(arr[i] == 0 ){
        countzero++ ; 
       }
       else if (arr[i]== 1 ){
        countone++ ; 
       }
    }
    cout << " Count of zeros : " << countzero ; 
    cout << " Count of ones  : " << countone ; 
}



int main(){

    int arr[100] ; 
    int size ; 
    cout << "Enter the number of elements you want to enter : " ; 
    cin >> size ;

    askValue(arr,size) ; 
    count(arr , size ) ; 
    
  
  
   
    
    return 0 ; 
}