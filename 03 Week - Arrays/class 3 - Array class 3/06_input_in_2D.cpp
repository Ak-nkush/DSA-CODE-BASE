#include<iostream>
using namespace std ; 

// taking input in 2d array 

int main(){

    int arr[2][3] ; 

    // traversing through array 
    int rowSize = 2  ;
    int colSize = 3  ;
    
    for(int i = 0 ; i<rowSize ; i++){
        for(int j = 0 ; j<colSize ; j++){
            cout << "Enter the value for ( " << i << " , "<< j << ") : " ;
            cin >> arr[i][j] ;  
        }
        cout << endl ; 
    }
    for(int i = 0 ; i<rowSize ; i++){
        for(int j = 0 ; j<colSize ; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl ; 
    }
    return 0 ; 
}