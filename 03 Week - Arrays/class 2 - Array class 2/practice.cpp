#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std ; 
// removing the adjacent duplicated from the string 

int main(){
  vector<int> arr = {4 ,3, 7,2, 6, 1} ; 
  int cut = 0  ; 
  int currRank = arr[0] ; 
  for(int i = 1 ; i < arr.size() ; i++){
    int currRank =  arr[i] ; 
    if(currRank > arr[i+1]){
      cut++ ; 
    }
  }
}
