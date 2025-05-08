#include<iostream>
#include<vector>
using namespace std  ; 

int main(){
  vector<int> marks ; 
  marks.push_back(10) ; 
  marks.push_back(20) ; 
  marks.push_back(30) ; 

  cout << "Size : " <<marks.size() << endl ; 
  marks.insert(marks.begin(),50) ; 
  cout << "Size : " <<marks.size() << endl ; 
 // here only iterator should be passed in first argument 
  

}