#include<iostream>
#include<vector>
#include<list>

using namespace std ; 
int main(){ 

    vector<int> arr ; 
    arr.push_back(10) ; 
    arr.push_back(20) ; 
    arr.push_back(30) ; 
    arr.push_back(40) ; 
    arr.push_back(50) ; 

    vector<int>::iterator it = arr.begin() ; 
    while(it!=arr.end()){
        *it = *it + 4 ;        cout<< *it << " " ; 
        it++ ; 
    }cout << endl ; 
    
    vector<int>::iterator it1 = arr.end()-1hj ; 
    while(it1!=arr.begin()){
        cout<< *it1 << " " ; 
        it1-- ; 
    }cout << endl ; 
} 