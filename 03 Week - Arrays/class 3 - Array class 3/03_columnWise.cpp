#include<iostream>
using namespace std ; 

//traversing of array in generalized  column wise manner 

int main(){

    int arr[3][3] ={
        {10,20,} ,
        {110,120} ,
        {210,220} ,  
    } ; 

    // traversing through array 
    int rowSize = 3  ;
    int colSize = 2  ;

    for(int j = 0 ; j<colSize ; j++){
        for(int i = 0 ; i<rowSize ; i++){
            cout << arr[i][j] << " "; 
        }
        cout << endl ; 
    }
    return 0 ; 
}