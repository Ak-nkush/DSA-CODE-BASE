#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){

    int arr[] = {10,20,30,40,50,60} ; 
    int n = 7 ; 
    int target = 77 ; 

    bool ans = binary_search(arr,arr+n,target) ; 
    cout << ans << endl ;
     
}