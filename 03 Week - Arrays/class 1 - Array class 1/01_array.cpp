#include<iostream>
using namespace std ; 
// declaration , initialization of array 

int main(){

    int arr[10] ; 

    // int brr[] ; it give a error 

    int crr[] = {10,20,30,40} ; 
    cout << crr[4] << endl ; 
    //! going out the index of the array it will give a error known as segmentation fault  
    //! or segmentation error is also occur when we are accessing out of scope memory 
}