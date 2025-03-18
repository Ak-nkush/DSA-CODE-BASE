#include<iostream>
using namespace std ; 
// binary search using recursion 

int  binarySearch(int arr[],int size,int start,int end, int k){
    // base case 
    if(start>end){
        return -1 ;  
    }
    // solving 1 case 
    int mid = start + (end - start )/2 ; 
    if(arr[mid]==k){
        return mid ;  
    }
    else if (k>arr[mid]){
        start = mid + 1 ; 
        return binarySearch(arr,size,start,end,k) ; 
    }
    else{
        end = mid - 1 ; 
        return binarySearch(arr,size,start,end,k) ; 
    }
} 
int main(){
    int arr[] = {10,20,30,40,50} ; 
    int k = 10 ; 
    int size = 5 ; 
    int start = 0 ; 
    int end = size - 1 ; 
    //int mid = start + (end - start )/2 ;  there is no need for calculating the mid before the recursion it should be done hands on with recursion 

    cout << binarySearch(arr,size,start,end, k ) ; 
    return 0 ; 
}