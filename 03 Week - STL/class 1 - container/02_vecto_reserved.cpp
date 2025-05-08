#include<iostream>
#include<vector>
using namespace std  ; 

int main(){
    vector<int> m(5,10) ; 
    cout << " Capacity of m : " << m.capacity()<< endl ; 
    cout << " size of m : " << m.size()<< endl ;
    m.push_back(20) ;  
    cout << " Capacity of m : " << m.capacity()<< endl ; 
    m.reserve(20) ; 
     cout << " Capacity of m : " << m.capacity()<< endl ;  

    vector<int> n ; 
    n.reserve(10) ;
      cout << " Capacity of n : " << n.capacity() ; 
    cout << " size of n : " << n.size()<< endl ; 
}