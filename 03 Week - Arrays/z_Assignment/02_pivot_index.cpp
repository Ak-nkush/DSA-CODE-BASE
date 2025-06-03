#include<iostream>
#include<vector>
using namespace std ; 

// QUESTION 2 - PIVOT INDEX - it means at i position the leftsum == rightsum 
// approach 1 - brute force - calculating leftsum and rightsum for every ith position 
// approach 2 - Formula based 

// intution - how we taught of this apporach 2 - first it is the formula and we have to two array from it. First array creation will be starting by traversing the original array from 1 and leftsum i.e is first array its leftsum[0] = 0 ; and now we have to add leftsum[i-1] and num[i-1] ; by dping this we can create the array 
// When you're creating a leftSum array for each index i, you're storing the sum of all elements before index i, i.e., from index 0 to i - 1.

// appraoch 3 - calculating the leftsum and rightsum parallely and using totalsum 

int approach2(vector<int>&arr){
    int n = arr.size() ; 
    vector<int> leftSum(n,0) ; 
    vector<int> rightSum(n,0) ; 
    
    // storing leftsum of i in a leftsum array 
    for(int i = 1 ; i<n ; i++){
        leftSum[i] = arr[i-1] + leftSum[i-1] ; 
    }

    // storing rightsum of i in a rightsum array 
    for(int i = n-2 ; i>=0 ; i--){
        rightSum[i] = arr[i+1] + rightSum[i+1] ; 
    }

    for(int i = 0 ; i<n ; i++){
        if(leftSum[i] == rightSum[i]) return i ; 
    }
    return -1 ; 
}

int approach3(vector<int>&arr){
    int n = arr.size() ; 
    int totalSum = 0 ; 
    for(int i =0 ; i<n ; i++){
        totalSum += arr[i] ; 
    }
    
    int leftSum = 0 ; 
    for(int i = 1 ; i<n ; i++){
        leftSum += arr[i-1] ; 
        int rightSum = totalSum - (leftSum + arr[i]) ; 

        if(leftSum == rightSum) return i ; 
    }
    return -1 ; 
}

int main(){
    vector<int> arr = {1,7,3,6,5,6} ; 

    cout << approach2(arr) << endl; 
    cout << approach3(arr) << endl ; 
}