#include<iostream>
using namespace std ; 
// creation of 2d array 
// also traversing of array in row wise manner 

int main(){

    int arr[3][2] ={
        {10,20} ,
        {30,40} ,
        {50,60} ,  
    } ; 

    // tranversing through array 
    int rowSize = 3  ;
    int colSize = 2  ;

    for(int i = 0 ; i<rowSize ; i++){
        for(int j = 0 ; j<colSize ; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl ; 
    }
    return 0 ; 
}