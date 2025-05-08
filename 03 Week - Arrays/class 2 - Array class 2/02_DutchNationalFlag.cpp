//todo - it was there in the doubt class have to do it by myself 
#include<iostream>
#include<algorithm>
using namespace std ; 

void DutchNationalFlag(int * arr , int& n ){
    // step 1 - make the three pointers 
    // and we will traverse the array using mid 
    int low = 0 ; 
    int mid = 0 ; 
    int high = n - 1 ; 

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]) ; 
            mid++ , low++ ; 
        }
        else if (arr[mid]==1){
            // here we don't need to swap because our 1 range starts from low to mid-1 ; soo it is in a range , therefore we just need to move mid ; 
            mid++ ; 
        }
        else if (arr[mid] == 2){
            swap(arr[mid],arr[high]) ; 
            high-- ; 
        }
    }
}

void print(int * arr , int& n ){
    for(int i = 0 ; i <n ; i++){
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
    
    print(input,n) ; 
    DutchNationalFlag(input,n) ; 
    print(input,n) ; 
}