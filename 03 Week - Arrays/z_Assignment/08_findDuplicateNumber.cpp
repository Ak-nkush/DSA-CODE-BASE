#include<iostream>
using namespace std ; 
#include<vector>
// question - find the duplicate number from the array 
// method 1 - sort and find , t.c -> o(nlogn + n ) 
// method 2 - negative marking , t.c -> o(n)
//! method 3 - swapping nums[0] with nums[nums[0]] unless nums[0] != nums[nums[0]] , in this way we get the duplicate on the zeroth index of the array 

void print(vector<int>&arr , int&n ){
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << " " ; 
    }cout << endl ; 
}
int method2_findingDuplicate(vector<int> nums){
    int ans = -1 ; 
    for(int i = 0 ; i<nums.size() ;i++){
        //! - taking the absolute index is very necessary 
        int index = abs(nums[i]) ; 
        if(nums[index] > 0){
            nums[index] = nums[index]* -1 ; 
        }
        else{
            ans = index ; 
            break ; 

        }
    }
    return ans ; 
}

int method3_findingDuplicate(vector<int> nums){
    for(int i=0 ;i<nums.size() ;i++){
        if(nums[0]!= nums[nums[0]])
        swap(nums[0],nums[nums[0]]) ; 
    }
    return nums[0] ; 
}

int main(){
    vector<int> input = {1,3,4,2,2}  ;
    int ans = method2_findingDuplicate(input) ; 
    cout << "Method 2 duplicate number is : " << ans << endl ; 
    
    int ans2 = method3_findingDuplicate(input) ; 
    cout << "Method 3 duplicate number is : " << ans2 << endl ; 


}
