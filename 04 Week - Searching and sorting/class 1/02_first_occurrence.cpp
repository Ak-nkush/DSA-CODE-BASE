#include<iostream>
using namespace std ; 

void findFirstOccurence(int arr[] , int n , int target , int &ansIndex){
    int s = 0 ; 
    int e = n - 1 ; 
    int mid = s +(e-s)/2 ; 
    while(s<=e){
        if(arr[mid] == target){
            ansIndex = mid ; 
            e = mid - 1 ; 
        }
        else if (arr[mid] > target){
            e = mid - 1 ; 
        }
        else if (arr[mid] < target){
            s = mid + 1 ; 
        }
        mid = s + (e-s)/2;
    }
}
int main(){
    int arr[] = {10,20,20,20,20,20,20,30,40,50,60} ; 
    int size = 11 ; 
    int target = 200 ; 
    int ansIndex = -1 ; 

    findFirstOccurence(arr,size , target, ansIndex ) ; 
    cout << "First occurrence of target is : " ; 
    cout << ansIndex << endl ; 
}