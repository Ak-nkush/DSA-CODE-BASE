#include<iostream>
#include<vector> 
using namespace std ; 

// printing all subarrays using recrusion 
// here we noticed that subarrry starts from i to n-1 , for every element 
// soo two recursion are going to be there 


void printSubArray_utility(vector<int> &arr , int start , int end){
    // base conddition
    if(end == arr.size() ){
        return ; 
    }
    // 1 test case 

    for(int i = start ; i <= end ; i++){
        cout << arr[i] << " " ; 
    }
    cout << endl ;
    end = end + 1 ;  
    printSubArray_utility(arr,start,end) ; 
}

void printSubArray(vector<int> &arr){
    for(int start = 0 ; start < arr.size() ; start++){
        int end = start ; 
        printSubArray_utility(arr,start,end) ; 
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5} ; 
    printSubArray(arr) ; 
}