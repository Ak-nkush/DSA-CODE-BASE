#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
// Question 3 - missing number 
// appraoch 1 - sorting and comparing it with index 
// appraoch 2 - xoring the arr elemnts with index range 

int approach1(vector<int> arr){
    int n = arr.size() ; 
    
    // step 1 - sort
    sort(arr.begin() , arr.end()) ; 

    for(int i = 0 ; i<n ;i++){
        if(arr[i]!= i){
            return i ; 
        }
    }
    return -1 ; 
}

int approach2(vector<int> arr){
    int n = arr.size() ; 
    int elementXOR = 0 ; 
    //step1 - first xor all the elements 
    for(int i = 0 ; i<n ; i++){
        elementXOR = elementXOR ^ arr[i] ; 
    } 
    for(int i = 0  ; i<=n ; i++){
        elementXOR = elementXOR ^ i ; 
    }
    return elementXOR ; 
}
int main(){
    vector<int> arr = {0,3,2} ; 

    cout << approach1(arr) << endl ; 
    cout << approach2(arr) << endl ; 
    

}