#include<iostream>
#include<vector>
using namespace std ; 

//! - NOTE - this appraoch is only usful when the array is sorted and no duplicate element is not present in a array 
//! - it works fine for smaller array. 

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
    int n ;
    cout << "Enter the size of the array : " ; 
    cin >> n ; 
    
    int input[n];
    cout << "Enter the values in the array  : " << endl ; 
    for(int i=0;i<n;i++){
        cin >> input[i];
    }

    int target ; 
    cout <<"Enter the target : " ; 
    cin >> target ; 

    vector<pair<int,int>> ans ; 
    ans = findPairEqualtoTarget(input,n,target)  ;

    for(auto pair : ans){
        cout<<"(" << pair.first << "," << pair.second << ") " ; 
    }
}