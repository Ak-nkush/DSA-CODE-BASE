#include<iostream>
using namespace std ; 

//traversing of array inreversed diagonal wise manner 

int main(){

    int arr[3][3] ={
        {10,20,30} ,
        {110,120,130} ,
        {210,220,230} ,  
    } ; 

    // traversing through array 
    int rowSize = 3  ;
    int colSize = 3  ;

    for(int i = 0 ; i<rowSize ; i++){
        for(int j = 0 ; j<colSize ; j++){
            if(j==colSize-1-i){
            cout << arr[i][j] << " "; 
            }
        }
        cout << endl ; 
    }
    return 0 ; 
}