#include<iostream>
#include<vector>
using namespace std  ; 

int main(){

    vector<int>first ; 
    vector<int>second; 

    first.push_back(10)  ; 
    first.push_back(20)  ; 
    first.push_back(30)  ; 
    first.push_back(40)  ; 

 // creation of iterator 
 vector<int>::iterator it = first.begin() ; 

 while(it!= first.end()){
    cout << *it << " " ; 
    it++ ; 
 }
} 