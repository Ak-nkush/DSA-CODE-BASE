#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 

// in this question we have to find the maximum average from the subarray in the range of i to k 
// soo maximum average is maximum sum 
// appraoch 1 - to find the maximum sum we use nested loop where outer i =0 and j = k-1 and untill j is out of bound , find the maximum sum from the inner loop 

//! - approach 2 (sliding window )



double approach1(vector<int>&arr , int&k){
    int i = 0 ; 
    int j = k-1 ; 
    int n = arr.size() ; 
    
    int maxi = INT_MIN ; 
    while(j<n){
        int sum = 0 ; 
        for(int k = i ; k<=j ; k++){
            sum = sum+arr[k] ; 
        }
        maxi = max(sum,maxi) ; 
        i++ ; 
        j++ ; 
    }
    double average = maxi/double(k) ; 
    return average ; 
}
int main(){
    vector<int> arr = {1,12,-5,-6,50,3} ; 
    int k = 4 ; 
    cout << approach1(arr,k) << endl ; 
}