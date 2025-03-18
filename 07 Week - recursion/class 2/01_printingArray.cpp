#include<iostream>
using namespace std ; 
// traversing in the array using recursion 
void printElement(int arr[] , int size , int index){
    // base case 
    if(index == size){
        return ; 
    }
    cout << arr[index] << " " ; 
    printElement(arr ,size ,index+1) ; 
}
int main(){
    int arr[] = {10,20,30,40,50} ; 
    int size = 5 ; 
    int index = 0 ; 
    printElement(arr,size,index) ; 
    return 0 ; 

}