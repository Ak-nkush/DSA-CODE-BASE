#include<iostream>
using namespace std ; 
#include<vector>
#include<unordered_map>
// Question - co number that are repeated in a array 

    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp ; 
        vector<int> ans ; 
        
        for(int i=0 ; i<arr.size() ; i++){
            if(mp.find(arr[i]) == mp.end()) mp[arr[i]]++ ; 
            else{
                mp[arr[i]]++ ; 
            }
        }
        
        for(auto i : mp){
            if(i.second > 1 ){
                ans.push_back(i.first) ; 
            }
        }
        
        return ans ; 
    }


