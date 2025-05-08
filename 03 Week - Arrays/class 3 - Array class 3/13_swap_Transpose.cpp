#include<iostream>
using  namespace std ; 
// transposing the array by swapping   
int main(){
    int arr[3][3] = {
        {10,20,30},
        {110,120,130},
        {210,220,230},} ; 
    
    int rowSize = 3 ; 
    int colSize = 3 ; 
    
    
    for(int i=0 ; i<rowSize ; i++){
        for(int j = 0 ;j<colSize ; j++){
          if(i<=j){
            swap(arr[i][j],arr[j][i]) ; 
          } 
        }
    }
    for(int i=0 ; i<rowSize ; i++){
        for(int j = 0 ;j<colSize ; j++){
           cout << arr[i][j] << " " ; 
        }
        cout << endl ; 
    }

}