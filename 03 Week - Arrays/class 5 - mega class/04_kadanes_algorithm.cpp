#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 

//todo -  approach 
// take the sum of has we are traversing through the array , and update it with the max 
//! - note that take the maximum carefully and update in accordingly 
// when sum become less than 0 ; make sum = 0 ; because when sum is  negative and we add the next element , we will still gets the same result when if we didn't take that element that gives the negative element or the previous track of the sum  
int main(){
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4} ;
    int sum = 0 ; 
    int maxi = INT_MIN ; 
   

    for(int i = 0 ; i < v.size() ; i++){
        sum = sum + v[i] ; 
        //! - take a look here we can make a mistake 
        maxi = max(sum , maxi) ; 
        if(sum < 0){
           sum = 0 ; 
           continue;
        }
    }
    cout << "the max from the subarray is : " << maxi ; 

            
}
