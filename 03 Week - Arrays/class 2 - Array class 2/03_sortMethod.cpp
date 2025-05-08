#include<iostream>
#include<algorithm>
using namespace std ; 

// sorting 0 and 1 using sort method , this is the appraoch two for this question  

int main(){

    int arr[] = {0,1,1,1,0,0,1} ; 
    int size = 7 ; 

    sort(arr,arr+size) ; 
    for(int i = 0 ;i < size ; i++){
        cout << arr[i] << " " ; 
     }
}