#include<iostream>
using namespace std ; 
#include<vector>
// Question - move all negative number to the left side of the array 

void print(vector<int>&arr , int&n ){
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << " " ; 
    }cout << endl ; 
}

void moveNegative(vector<int>&nums){
    int l = 0 ; 
    int h = nums.size() - 1 ; 

    while(l<=h){
        if(nums[l]<0){
            l++ ; 
            // it means left side has negative number 
        }
        else if(nums[h]>0){
            h-- ; 
        }
        else{
            swap(nums[l] , nums[h]) ; 
            l++ ; 
            h-- ; 
        }
    }
}

int main(){
     int n ;
    cout << "Enter the size of the array : " ; 
    cin >> n ; 
    vector<int>input(n) ; 
    cout << "Enter the values in the array  : " << endl ; 
    for(int i=0;i<n;i++){
        cin >> input[i];
    }

    print(input,n) ; 
    moveNegative(input) ; 
    print(input,n) ; 
}


