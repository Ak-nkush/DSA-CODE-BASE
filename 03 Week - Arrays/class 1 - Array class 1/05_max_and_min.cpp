#include<iostream>
using namespace std ; 
// linear search algorithm 
// finding the maximum number in the array  


void askValue(int arr[] , int size ) {
    for(int i = 0 ;  i< size ; i++){
        cout << "Enter the value for index " << i << " : " ; 
        cin >> arr[i] ; 
    }
}

int maxNumber(int arr[] , int size) {
    int ans = INT_MIN ; 
    for(int i = 0 ; i< size ; i++){
        if(arr[i] > ans ){
           ans = arr[i] ; // this is the important step to store the larger element after comparision 
        }
    }
    return ans ; 
}
int minNumber(int arr[] , int size) {
    int ans = INT_MAX ; 
    for(int i = 0 ; i< size ; i++){
        if(arr[i] < ans ){
           ans = arr[i] ; // this is the important step to store the larger element after comparision 
        }
    }
    return ans ; 
}

int main(){

    int arr[100] ; 
    int size ; 
    cout << "Enter the number of elements you want to enter : " ; 
    cin >> size ;

    askValue(arr,size) ; 
    
    int max = maxNumber(arr , size) ;
    cout << "Max number is : " << max ; 

    int min = minNumber(arr,size) ; 
    cout<< endl <<"Min number is : " << min ; 
     
    
    return 0 ; 
}

   
   
    