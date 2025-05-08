#include<iostream>
using namespace std ; 

int main(){
    int arr[3][3] = {
        {10,20,30},
        {110,120,130},
        {210,220,230}} ; 
    
    int rowSize = 3 ; 
    int colSize = 3 ; 

    cout << "Sum of the diagonal : " ; 
    int sum1 = 0 ;
    for(int i = 0 ; i<rowSize ; i++){
        sum1 = sum1 + arr[i][i] ; 
    }
    cout << sum1 << endl ; 
    
    cout << " Sum of the reversed diagonal : " ; 
    int sum2 = 0 ; 
    for(int i = 0 ; i<rowSize ; i++){
        for(int j = 0 ; j<colSize ; j++){
            if(i<=j){
                sum2 = sum2 + arr[i][i] ; 
            }
        }
       
    }
    cout << sum2 ; 

}  