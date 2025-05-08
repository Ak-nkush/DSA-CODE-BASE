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
      
    make_heap(arr.begin() , arr.end()) ; 
    for(int a : arr){
        cout << a << " " ; 
    }cout << endl ; 

    arr.push_back(99) ;
    push_heap(arr.begin() , arr.end()) ; 
    // after the insertion of the element in the vector use push_heap . 

    for(int a : arr){
        cout << a << " " ; 
    }cout << endl ; 

    // deletion 
    pop_heap(arr.begin() ,arr.end()) ; 
    arr.pop_back() ; 
      for(int a : arr){
        cout << a << " " ; 
    }cout << endl ; 
    
    sort_heap(arr.begin() , arr.end()) ; 
       for(int a : arr){
        cout << a << " " ; 
    }cout << endl ; 


}