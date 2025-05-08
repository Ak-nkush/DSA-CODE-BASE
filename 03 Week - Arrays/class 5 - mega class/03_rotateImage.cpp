#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 

//todo - approach 
// first transpose the matrix and then reverse it  the row wise 

void print(vector<vector<int>> arr){
    for(int i = 0 ; i<arr.size() ; i++){
        for(int j = 0 ; j<arr[i].size() ; j++){
            cout << arr[i][j] << "                 " ; 
        } cout << endl ; 
    }
}
int main(){
    vector<vector<int>> arr = {{1,2,3} , {4,5,6} , {7,8,9}} ; 
 
    // for transpose optimal approach is swapping upper triangle with lower triangle 


 
    for(int i = 0 ; i<arr.size() ; i++){
        for(int j = 0 ; j<arr[i].size() ; j++){
            if(i<j){
                swap(arr[i][j] , arr[j][i]) ; 
            }
        }
    }
    print(arr) ; 
    
    for(int i = 0 ; i < arr.size() ; i++){
        reverse(arr[i].begin() , arr[i].end() ) ; 
    }
    cout << " rotated image : " << endl ; 
    print(arr) ; 



}