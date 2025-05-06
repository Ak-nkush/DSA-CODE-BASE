// 1. **Debug the code. Linear Search.** 

// added the header file and namespace directive  
#include<iostream>
using namespace std ; 

bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true ;
        }
    }
    return false ;
}

// wrote the main function 
int main(){
    int n ;
    cout << "Enter the size of the array : " ; 
    cin >> n ; 

    int val ; 
    cout << "Enter the target : " ; 
    cin >> val ;
    int input[n];
    cout << "Enter the values in the array  : " << endl ; 

    for(int i=0;i<n;i++){
        cin >> input[i];
    }

    string ans = linearSearch(input , n , val )?"target found":"target not found" ; 
    cout << ans ; 

    
}