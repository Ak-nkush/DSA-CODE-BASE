#include<iostream>
#include<unordered_map>
using namespace std ; 

int main(){
    int arr[7] ={2,3,4,77,2,3,4}  ; 
    int size = 7 ; 

    unordered_map<int,int> mp ; 

    for(int i = 0 ; i < size ; i++){
        if(mp.find(arr[i]) == mp.end()){
            // entry is not present in the map 
            // soo do the entry in the map 
            mp[arr[i]] = 1 ; 
        }
        else{
            mp[arr[i]]++ ; 
        } 
    }

    for(int i = 0 ; i<size ; i++){
        if(mp[arr[i]] == 1 ){
            cout << "Single element is : " << arr[i] << endl ; 
        }
    }
}