#include<iostream>
#include<vector>
using namespace std ; 

int main(){
    vector<int> v = {1,3,5,3,4} ; 

    // making the index starting from 1 
    // to do that we just entried the random number at the beginning of the array 

    v.insert(v.begin() , 999 ) ; //  where 999 is a random number 

    for(int i = 1 ; i < v.size() ; i++){
        int index = abs(v[i]) ; // we are taking it has a absoulte because we can visit a element twice which is duplicate
        if(v[index] > 0){
            v[index] = v[index] * -1 ; 
        }
    }
    cout << "array which is visited : " << endl ; 
    for(auto it : v){
        cout << it <<  " " ; 
    }
    
    int missingNumber ; 
    for(int i = 1 ; i<v.size() ; i++){
        if(v[i] > 0) {
           missingNumber = i ;
           break ;  
        }
    }
     
    cout << "missing number is : " << missingNumber << endl ; 
}