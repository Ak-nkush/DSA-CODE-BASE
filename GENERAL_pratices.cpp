#include<iostream>
#include<vector>
using namespace std ; 

vector<pair<int,int>> findPairEqualtoTarget(int arr[] , int&n , int&target ){
    vector<pair<int,int>> ans ; 
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[i]+ arr[j] == target) {
                pair<int,int> p = make_pair(arr[i],arr[j]) ; 
                ans.push_back(p) ; 
            }
        }
    }
    return ans ; 
}
int main(){
    int arr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}} ;
    
    int n = 3 ; 
    
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j <3 ; j++){
            if(j == n-i-1){
                cout << arr[i][j] << " " ; 
            }
        }
    }cout << endl ; 

vector<vector<int>>v(3,vector<int>(3,0)) ; 
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j <3 ; j++){
            cout << v[i][j] << " " ; 
        }cout << endl ; 
    }

}
