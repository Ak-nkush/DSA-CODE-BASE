#include<iostream>
using namespace std ; 
#include<vector>
//! - start with l.m on 0 index and h on n-1 index 
//todo - and also keep in mind that the random spectrum that is from m to h-1 is generally it can be seen in the larger array 
// its similar like dutch national flag 

void sortColors(vector<int>& nums) {
        int l = 0 ; 
        int m = 0 ; 
        int h = nums.size() -1 ; 

        while(m<=h){
            if(nums[m]==1){
                m++ ; 
            }
            else if(nums[m] == 0 ){
                swap(nums[l],nums[m]) ; 
                l++ ; 
                m++ ; 
            }
            else{
                swap(nums[m],nums[h]) ; 
                h-- ; 
            }
        }
}