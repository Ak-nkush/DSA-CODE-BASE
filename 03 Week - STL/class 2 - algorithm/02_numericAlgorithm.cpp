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

    int it = accumulate(arr.begin(),arr.end(),0) ; 
     cout << it  << endl ; 

    vector<int> first ; 
    first.push_back(1) ; 
    first.push_back(2) ; 
    first.push_back(3) ; 

    vector <int> second ; 
    second.push_back(3) ; 
    second.push_back(4) ; 
    second.push_back(5) ; 

    int ans = inner_product(first.begin() ,first.end() , second.begin() , 0  ) ; 
    cout << "Product is : " << ans << endl ; 
    
   vector<int> result(first.size()) ; 
    partial_sum(first.begin() , first.end() , result.begin()) ; 
    for(int a : result){
      cout << a << " " ; 
    }cout << endl ; 
    
    cout << "iota : " ; 
    vector<int> a(5) ; 
    iota(a.begin(),a.end(),250) ; 
    for(int a : a){
      cout << a << " " ; 
    }cout << endl ; 

 
 return 0 ; 
}