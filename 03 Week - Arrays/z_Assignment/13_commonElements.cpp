#include<iostream>
#include<vector>
#include<set>
using namespace std ; 

//! - here we are using set soo that only unique element will be there in ans 
// T.C -> o(n1 + n2 + n3) 
// s.c -> o(n)
//todo - this is done using a extra space that is set 
vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int i = 0 ; 
        int j = 0 ; 
        int k = 0 ; 
        set<int> st ; 
        vector<int> ans ; 
        
        while( i<arr1.size() && j<arr2.size() && k<arr3.size()){
            if((arr1[i] == arr2[j]) && (arr2[j] == arr3[k])){
                st.insert(arr1[i]) ;
                i++ ; 
                j++ ; 
                k++ ; 
            }
            else if(arr1[i] < arr2[j]){
                // move i soo that we may get equal to j 
                i++ ; 
            }
            else if(arr2[j] < arr3[k]){
                // move j soo that it get equal to k 
                j++ ; 
            }
            else{
                // finally if all three are not equal , i doesn't move nor j it means that k is the smallest among them 
                // move k is hope is becomes equal to i and j 
                k++ ; 
            }
        }
        
        for(auto i : st){
            ans.push_back(i) ; 
        }
        return ans ; 
}
// **************************************************************************************************************
//! - method 2 - using erase() in vector but here it gives TLE 
// why it is giving TLE because erase() in vector have t.c of o(n)
// soo the removeDuplicate t.c will be o(n^2)

void removeDuplicates(vector<int>&nums){
            int i = 0 ; 
            while(i<nums.size()){
                if((i+1 < nums.size()) && (nums[i]==nums[i+1])){
                   nums.erase(nums.begin() + (i+1)) ; 
                }
                else{
                    i++ ; 
                }
            }
    }
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int i = 0 ; 
        int j = 0 ; 
        int k = 0 ; 
        // set<int> st ; 
        vector<int> ans ; 
        
        
        removeDuplicates(arr1) ; 
        removeDuplicates(arr2) ; 
        removeDuplicates(arr3) ; 
        
        while( i<arr1.size() && j<arr2.size() && k<arr3.size()){
            if((arr1[i] == arr2[j]) && (arr2[j] == arr3[k])){
                 
                ans.push_back(arr1[i]) ; 
                i++ ; 
                j++ ; 
                k++ ; 
            }
            else if(arr1[i] < arr2[j]){
                // move i soo that we may get equal to j 
                i++ ; 
            }
            else if(arr2[j] < arr3[k]){
                // move j soo that it get equal to k 
                j++ ; 
            }
            else{
                // finally if all three are not equal , i doesn't move nor j it means that k is the smallest among them 
                // move k is hope is becomes equal to i and j 
                k++ ; 
            }
        }
        
        
        
        return ans ; 
    }
 // **********************************************************************************************************
 //! - another method - using resize() in vector
 // here resize() in vector have t.c of o(1) 

class Solution {
public:
    // Efficiently remove duplicates in-place (O(n) time, O(1) space)
    void removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return;
        int write_index = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[write_index] = nums[i];
                write_index++ ; 
            }
        }
        nums.resize(write_index); // Trim the vector to remove extra elements
    }

    vector<int> commonElements(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        // Step 1: Remove duplicates from each array (O(n) time per array)
        removeDuplicates(arr1);
        removeDuplicates(arr2);
        removeDuplicates(arr3);

        // Step 2: Three-pointer technique to find common elements
        int i = 0, j = 0, k = 0;
        vector<int> ans;

        while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                ans.push_back(arr1[i]);
                i++; j++; k++;
            }
            else if (arr1[i] < arr2[j]) {
                i++;
            }
            else if (arr2[j] < arr3[k]) {
                j++;
            }
            else {
                k++;
            }
        }

        return ans;
    }
};