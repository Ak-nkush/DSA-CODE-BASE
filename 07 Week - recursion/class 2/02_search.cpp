#include<iostream>
using namespace std ; 
// linear searching  in the array using recursion 
bool printElement(int arr[] , int size , int index , int k ){
    // base case 
    if(index == size){
        return false ; 
    }
    if(k==arr[index]) return true ; 
  
    bool ans = printElement(arr ,size ,index+1,k) ; 
    return ans ; 


}
int main(){
    int arr[] = {10,20,30,40,50} ; 
    int k = 40 ;  
    int size = 5 ; 
    int index = 0 ; 
    cout << printElement(arr,size,index,k) ; 
    return 0 ; 

}