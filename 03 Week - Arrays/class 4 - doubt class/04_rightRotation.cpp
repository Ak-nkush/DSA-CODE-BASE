#include<iostream>
using namespace std ; 

void print(int * arr , int& n ){
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << " " ; 
    }cout << endl ; 
}
int main(){
    int n = 5 ; 
    int arr[5] = {1,2,3,4,5} ; 

    int d ; 
    cout << "Values to get rotated from right : " ; 
    cin >> d ; 

    d = d % n ; 

    print(arr,n) ; 
    int temp[d] = {} ; 
    for(int i = 0 ; i<d ; i++){
        temp[i] = arr[n-d-i] ; 
    }
    
    for(int i = (n-d-1) ; i>=0 ;i--){
        arr[i+d] = arr[i] ; 
    }
    
    for(int i = 0 ; i<d ; i++){
        arr[i] = temp[i] ; 
    }
    print(arr,n) ; 
}