#include<iostream>
using namespace std ; 
// finding minimum and maximum in 2d array 

int min2D(int arr[][3], int rowSize , int colSize){
    int minValue = INT_MAX ; 
    for(int i = 0 ; i<rowSize ;i++){
        for(int j = 0 ; j<colSize ; j++){
            minValue = min(minValue , arr[i][j]) ; 
        }
    }
    return minValue ; 
}
int max2D(int arr[][3], int rowSize , int colSize){
    int maxValue = INT_MIN ; 
    for(int i = 0 ; i<rowSize ;i++){
        for(int j = 0 ; j<colSize ; j++){
            maxValue = max(maxValue , arr[i][j]) ; 
        }
    }
    return maxValue ; 
}
int main(){
    int arr[3][3] ={
    {70,23,41},
    {27,69,42},
    {56,12,18}}; 

    // traversing through array 
    int rowSize = 3  ;
    int colSize = 3  ;
     
    int minimum = min2D(arr,rowSize,colSize) ; 
    int maximum = max2D(arr,rowSize,colSize) ; 
    cout << minimum << endl ; 
    cout << maximum ; 
 

     
}