#include<iostream>
#include<algorithm>
#include<numeric> 
#include<vector>
using namespace std ; 
int main(){ 

    vector<int> first ; 
    first.push_back(1) ; 
    first.push_back(2) ; 
    first.push_back(3) ; 

    vector <int> second ; 
    second.push_back(3) ; 
    second.push_back(4) ; 
    second.push_back(5) ;
     
     vector<int> result ; 
    set_union(first.begin() , first.end() , second.begin() , second.end() , inserter(result , result.begin()) ) ;
    cout << "Union of set : "  ; 
    for(int a : result ){
        cout << a << " " ; 
    }cout << endl ; 
    
    vector<int> result1 ; 
    set_intersection(first.begin() , first.end() , second.begin() , second.end() , inserter(result1 , result1.begin()) ) ;
    cout <<"Insersection of set : " ; 
     for(int a : result1 ){
        cout << a << " " ; 
    }cout << endl ; 
     
    vector<int> result2 ; 
    set_difference(first.begin() , first.end() , second.begin() , second.end() , inserter(result2 , result2.begin()) ) ;
    cout <<"difference  of set : " ; 
     for(int a : result2 ){
        cout << a << " " ; 
    }cout << endl ; 

    vector<int> result3 ; 
    set_symmetric_difference(first.begin() , first.end() , second.begin() , second.end() , inserter(result3 , result3.begin()) ) ;
    cout <<" Symmetric difference  of set : " ; 
     for(int a : result3 ){
        cout << a << " " ; 
    }cout << endl ; 
     
}