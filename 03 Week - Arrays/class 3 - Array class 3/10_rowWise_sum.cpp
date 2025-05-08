#include<iostream>
using namespace std ; 
// findind total sum of each row of 2d array 

void rowwiseSum(int arr[][3] , int rowSize , int colSize){
    for(int i =0 ; i<rowSize ; i++){
        int ans = 0 ; 
        for(int j = 0 ; j<colSize ;j++){
            ans = ans + arr[i][j] ; 
        }
        cout << ans << " "; 
    }
}
int main(){
    int arr[3][3] ={
    {10,20,30},
    {40,50,60},
    {70,80,90}}; 

    // traversing through array 
    int rowSize = 3  ;
    int colSize = 3  ;
     
    rowwiseSum(arr,rowSize,colSize) ; 
 

     
}