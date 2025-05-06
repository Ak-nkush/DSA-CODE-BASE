// Debug the code. Your task is to populate the array using the integer values in the range 1 to N (both inclusive) in the order - 1,3,5,.......,6,4,2.

#include<iostream>
#include<math.h>
using namespace std ; 

void populate(int arr[],int n){
    // correction - since j is the last pointer it should be started from n - 1 ; 
    int j= n - 1 ;
    for(int i=0; i <= j ; i++){
        // has from the last index we are printing even numbers 
        arr[j] = (2*i) + 2 ;
        // and from the 1st index we are printing odd numbers soo index should also starts from 0 
        arr[i] = (2*i) + 1 ; 
        j--;
    }
}
void print(int arr[] , int size ){
    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << " " ; 
    }cout << endl ; 
}
int main(){
    int n ;
    cout << "Enter the size of the array : " ; 
    cin >> n ; 
    int input[n]; 

    populate(input,n) ; 
    print(input,n) ; 

    return 0 ; 
   
}