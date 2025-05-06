// Debug the code. have to swap alternatives {1,2,3,4,5} => {2,1,4,3,5}
#include<iostream>
using namespace std ; 

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        // have to add a break statement since in case of odd size , for last element it was swapping with out of sccope memory 
        if(i == size - 1) break ; 
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        // correction it should be arr[i] instead of arr[j]  
        arr[i] = temp;
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
    cout << "Enter the values in the array  : " << endl ; 
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    
    swapAlternate(input,n) ; 
    print(input,n) ; 
}