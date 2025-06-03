#include<iostream>
#include<vector>
using namespace std ; 
// Question 4 - remove all the duplicated from the array and given the length of only unique elements 
// approach1 - two pointer , take i = 0 and j = 1 and then compare if both elements are same then move i and j and if they are different then but a[j] into a[i] and only move j 
//! correct appraoch - when element are same only move j and they are different first move i soo that we come on the second occurrence of number and then put a[j] into a[i] and later move j by 1 . 

int appproach1(vector<int>& arr){
    int n = arr.size() ; 
    int i = 0 ; 
    int j = 1 ; 

    while (j<n)
    {
       if(arr[i]==arr[j]){
        //! - mistake
        // i++ ; 
        j++ ; 
       }
       else{
        //! correction 
        i++ ; 
        arr[i] = arr[j] ; 
        j++ ; 
       }
    }
    return i+1 ; 
}
int main(){
    vector<int> arr = {0,0,1,1,2,2,3,3,4} ;
    
    cout << appproach1(arr) << endl ; 

}