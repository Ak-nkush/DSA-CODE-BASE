#include<iostream>
#include<algorithm>
#include<numeric> 
#include<vector>
using namespace std ; 
int main(){ 

    vector<int> arr ; 
    arr.push_back(10) ; 
    arr.push_back(20) ; 
    arr.push_back(30) ; 
    arr.push_back(40) ; 
    arr.push_back(50) ; 

    int target = 40 ; 
   auto it = binary_search(arr.begin() , arr.end() , target) ; 
    cout <<"Check the target : " << it << endl ;

    auto it1 = lower_bound(arr.begin(),arr.end(),target) ; 
    cout <<"Lower bound : " << *it1 << endl ; 

    auto it2 = upper_bound(arr.begin(),arr.end(),target) ; 
    cout <<"upper bound : " << *it2 << endl ; 
    
    // auto it3 = equal_range(arr.begin(),arr.end(),target) ; 
    // cout <<" range  : "<< it3.first << endl ; 

    auto it4 = min_element(arr.begin(),arr.end()) ;
    auto it5 = max_element(arr.begin(),arr.end()) ;
    cout << " min and max in the range : " << *it4 << *it5 <<  endl ; 

} 