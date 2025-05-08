#include<iostream>
using namespace std ; 

int main(){
    int arr[3][3] ;
    int rowSize = 3  ;
    int colSize = 3 ;  
    fill(arr[0][0] , arr[2][2] , 99) ;
     
    for(int i = 0 ; i<rowSize ; i++){
        for(int j = 0 ; j<colSize ; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl ; 
    }
}