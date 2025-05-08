#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ; 

//! - this appraoch is used when array is not sorted and duplicate elements are present in a array 
vector<pair<int,int>> findPairEqualtoTarget(int arr[] , int&n , int&target ){
    vector<pair<int,int>> ans ; 

    //todo - steps 
    // step1 - sort the array 
    sort(arr,arr+n) ; 
    // step2 - remove duplicates and find pairs 
    // for remove of duplicate elements we can skip that element soo that a pair can be forms 
    // for outer , that is for value of i if , arr[i] == arr[i+1] skip that i where i+1<n ; 
    // similarly for inner , that is for tha value of arr[j] , arr[j] == arr[j+1] , skip that j where j+1< n 
    for(int i = 0 ; i<n ; i++){
        if(i+1<n && arr[i] == arr[i+1]) continue; 
        for(int j = i+1 ; j<n ; j++){
            if(j+1<n && arr[j] == arr[j+1]) continue; 
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
