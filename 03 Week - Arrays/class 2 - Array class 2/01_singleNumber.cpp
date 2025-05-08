#include<iostream>
using namespace std ; 
// having the number in the array which occurs only once 
// DONE USING XORING 

int findUniqueNumber(int arr[] , int size){
     
    int ans = 0 ; 
    for(int i = 0 ; i < size ; i++){
      ans = ans ^ arr[i] ; 
    }
    return ans ; 
}

int main(){

    int arr[] = {2,3,4,5,4,3,2} ; 
    int size = 7 ; 

    int ans = findUniqueNumber(arr,size) ; 
    cout << ans ; 
}
