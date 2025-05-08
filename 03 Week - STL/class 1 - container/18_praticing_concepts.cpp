#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    
    // here we tranversing through the vector using iterator 
    vector<int> v ; 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator it = v.begin() ; 
    while(it!=v.end()){
        cout << *it << " " ; 
        it++ ; 
    }
}