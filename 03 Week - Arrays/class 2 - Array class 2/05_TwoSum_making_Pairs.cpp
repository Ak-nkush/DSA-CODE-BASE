#include<iostream>
using namespace std ; 

// finding the first pair which will be equal to target 

pair<int,int> findingPair(int arr[] , int n , int target ){
    pair<int,int> ans = make_pair(-1,-1) ; 
    for(int i =0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[i] + arr[j] == target ){
                ans.first = arr[i] ; 
                ans.second = arr[j] ; 
                return ans ; 
            }
        }
    }
    return ans ; 
}

int main (){
    int arr[] ={10,5,20,15,30} ; 
    int size = 5 ; 

    pair<int ,int> ans = findingPair(arr,size,35) ; 

    if(ans.first==-1 && ans.second==-1){
        cout << "Pair not found " ; 
    }
    else{
        cout << " Pair found : " << ans.first <<","<<ans.second << endl ; 
    }
}