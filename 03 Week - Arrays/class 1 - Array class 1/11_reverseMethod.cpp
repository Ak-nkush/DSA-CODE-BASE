// we can reverse the array , using two pointer appraoch or any of the swapping method 
//todo - there is just a built-in function to do this i.e is reverse 

#include<iostream>
#include<algorithm>
using namespace std ; 

void print(int arr[] , int size ){
    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << " " ; 
    }cout << endl ; 
}

int main(){
    int arr[5] = {1,2,3,4,5} ; 
    int size =  5 ; 
     
    print(arr,size) ;
    reverse(arr,arr+size) ; 
    print(arr,size) ;
    
    return 0 ; 

}