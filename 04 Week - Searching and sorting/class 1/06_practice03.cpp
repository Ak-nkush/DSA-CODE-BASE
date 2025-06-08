#include<iostream>
#include<vector> 
using namespace std ; 

int findinglastOccurence(vector<int>&nums,int target){
        int n = nums.size() ; 
        int s = 0 ; 
        int e = n - 1 ; 
        int mid = s +(e-s)/2;
        int ans = -1 ; 
        int count = 0 ; 
        while(s<=e){
            if(nums[mid]==target){
                // first store and mid and then check the previous element 
                ans = mid ; 
                count++  ; 
                s = mid + 1 ; 
            }
            else if(nums[mid]<target){
                s = mid + 1 ; 
            }
            else{
                e = mid - 1 ;

            }
            mid = s +(e-s)/2;
        }  
         return count  ; 
        }

int main(){
    vector<int> nums = {2,2} ; 
    int target = 2 ; 
    int count  = findinglastOccurence(nums,target) ; 
    cout << count   ;  

}