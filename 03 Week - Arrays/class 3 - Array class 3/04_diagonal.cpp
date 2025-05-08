#include<iostream>
using namespace std ; 

//traversing of array in diagonal wise manner which will only happened in sqaure matrix .   

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
          cout << arr[i][i] << " " ; 
    }
    return 0 ; 
}