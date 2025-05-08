#include<iostream>
using namespace std ; 
// using arrays with function 

void printElement(int arr[] , int size ){
    for(int index = 0 ; index < size ; index++){
        cout << arr[index] << " " ; 
    }
}

int main(){

    int arr[5] = {10, 20, 30 , 40 , 50 } ; 
    printElement(arr , 5 ) ; 
    return 0 ; 
}