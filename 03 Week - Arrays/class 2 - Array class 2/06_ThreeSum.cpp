#include<iostream>
using namespace std ; 

// finding the first pair which will be equal to target 
void findingTriplet(int arr[] , int n , int target ){
   
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1  ; j < n ; j++){
          for(int k = j + 1 ; k < n ;k++){
            if(arr[i] + arr[j] + arr[k] == target){
                cout << arr[i] << endl ; 
                cout << arr[j] << endl ; 
                cout << arr[k] << endl ; 
            }
          }
        }
    }
   
}

int main (){
    int arr[] ={10,20,30,40} ; 
    int size = 4 ; 

    findingTriplet(arr,size,70) ; 
}