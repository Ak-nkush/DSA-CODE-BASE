  #include<iostream>
#include<vector>
using namespace std  ; 

int main(){ 
    vector<vector<int>> arr (4 , vector<int>(4,0)) ; 

    int totalRow = arr.size() ; 
    int col = arr[0].size() ; 

    // jaggered 2d vector 

    vector<vector<int>> a ; 
    a[0] = vector<int>(4)  ; 
    a[1] = vector<int>(2)  ; 
    a[2] = vector<int>(4)  ;  
    a[3] = vector<int>(3)  ; 