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

    second.push_back(100) ; 
    second.push_back(200) ; 
    second.push_back(300) ; 
    second.push_back(400) ; 

    first.swap(second) ; 

    for(int i : first){
        cout << i << " " ; 
    }
    cout << endl ; 
    for(int i : second){
        cout << i << " " ; 
    }
}