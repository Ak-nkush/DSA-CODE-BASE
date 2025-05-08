#include<iostream>
using namespace std ; 

bool search2D(int arr[][4],int rowSize , int colSize , int target){
    for(int i = 0 ; i<rowSize ; i++){
        for(int j = 0 ;j<colSize ; j++){
            if(arr[i][j] == target){
                return true ; 
            }
        }
    }
    return false ; 
}
int main(){
    int arr[3][4] ={
    {10,20,30,40},
    {50,55,57,59},
    {69,72,79,89}}; 

    // traversing through array 
    int rowSize = 3  ;
    int colSize = 4  ;
    int target = 404 ; 
    
    int search = search2D(arr,rowSize,colSize,target); 
    if(search == 1) {
        cout << "Target is present " ;
    }
    else{
        cout << "Target is not present " ; 
    }

     
}