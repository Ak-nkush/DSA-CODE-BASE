#include<iostream>
using namespace std ; 
// finding the maximum element using recursion 
// using tail recursion or the head recursion doesn't matter it only changes the order to comparision 

void maxElement(int arr[] , int size , int index,int&maxi){
    // base case 
    if(index == size){
        return ; 
    }
    maxElement(arr ,size ,index+1,maxi) ;
    maxi = max(maxi,arr[index]) ; 
   
     
}
int main(){
    int arr[] = {10,20,30,40,50} ; 
    int size = 5 ; 
    int index = 0 ;
    int maxi = INT_MIN ;  
    maxElement(arr,size,index,maxi) ; 
    cout << maxi << endl ; 
    return 0 ; 

}