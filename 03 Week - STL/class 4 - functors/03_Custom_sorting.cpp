#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

class comparator{
    public : 
      bool operator()(int a , int b ){
        return a>b ; 
    }
}; 

int main(){
    vector<int> arr ; 
    arr.push_back(10) ; 
    arr.push_back(2) ; 
    arr.push_back(11) ; 

    sort(arr.begin() , arr.end()) ; 
    // by using the inbuilt sort function vector get sorts in the ascending order 
    for(auto i : arr){
        cout << i << " "  ;
    }cout << endl ; 
    
    // to sort the vector in descending order we can use custom comparator 
    
    sort(arr.begin() , arr.end()  , comparator()) ; 
    for(auto i : arr){
        cout << i << " "  ;
    }
    


}