#include<iostream>
#include<vector>
using namespace std ; 
// Question - wave traversal in the matrics 
//  method 1 - using boolean to toogle , t.c -> o(n^2) 
// method 2 - using odd and even logic , even for top to bottom traversal and odd for bottom to top traversal 

void wavePattern(vector<vector<int>>&matrics, vector<int>&ans ){
    int n = matrics.size() ; // size of row 
    int m = matrics[0].size() ; // size of col 
    bool start = true ; 

    // outer loop is for column since col is constant 
    for(int j = 0 ; j<m ; j++){
        if(start){
            int i = 0 ; 
            while(i<n){
                ans.push_back(matrics[i][j]) ; 
                i++ ; 
            } 
            start = false ; 
        }
        else {
             int i = n - 1 ; 
             while(i>=0){
                ans.push_back(matrics[i][j]) ; 
                i-- ; 
             }
            start = true ;  
        }
    }
}

int main(){
    vector<vector<int>> matrics = {{1,2,3},{4,5,6}, {7,8,9}} ; 
    vector<int> ans ; 

    wavePattern(matrics,ans) ; 
    
    for(auto i : ans){
        cout << i << " " ; 
    }
    

}