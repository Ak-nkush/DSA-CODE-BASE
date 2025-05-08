#include<iostream>
using namespace std ;

int main(){
    int arr[5] = {1,2,3,4,5} ; 
    int i = 1 ; 

    int*add1 = &arr[0] ; 
    int*add2 = &arr[1] ; 

    cout << *(add1 + i) << endl ; 
    cout << *(i+add2) << endl ; 
    // because we are incrementing address and * is equal to value present at that address 

    return 0 ; 

}