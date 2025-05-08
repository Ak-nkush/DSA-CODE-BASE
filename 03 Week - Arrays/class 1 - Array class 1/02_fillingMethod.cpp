#include<iostream>
using namespace std ; 
// use of filling method 
int main(){

    int arr[4] ; 
    fill(arr,arr+4,23) ; 
    
    // int * a = &arr[0] ; 
    cout << arr << endl ; 
    // cout << a << endl ; 
    //! - its not python to give all contain of the arr , as here it gives the address of the arr array or we can say &arr[0]
    //! - it means the address of the array arr and the starting block of array is same 
    //! - where starting blocks address is also called as base address 
    for(int i =0  ; i<4 ; i++){
        cout << arr[i] << " " ; 
    }
}