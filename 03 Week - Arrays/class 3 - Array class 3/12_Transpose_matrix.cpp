#include<iostream>
using  namespace std ; 
// transposing the array by creating the new array 
int main(){
    int arr[3][3] = {
        {10,20,30},
        {110,120,130},
        {210,220,230},} ; 
    
    int rowSize = 3 ; 
    int colSize = 3 ; 
    
    int arr1[100][100] ; 
    for(int i=0 ; i<rowSize ; i++){
        for(int j = 0 ;j<colSize ; j++){
          arr1[i][j] = arr[j][i] ; 
        }
    }
    for(int i=0 ; i<rowSize ; i++){
        for(int j = 0 ;j<colSize ; j++){
           cout << arr1[i][j] << " " ; 
        }
        cout << endl ; 
    }

}