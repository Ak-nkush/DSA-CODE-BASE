#include<iostream>
using namespace std ; 
#include <string> 

void solve(string str , int i ){
    // base condition 
    if(i>=str.length()){
        cout << str << endl;
        return  ; 
    }

    // each element will get the chance to be place at every index 
    // index j will kept the track of the element which will get replaced by i 
    for(int j = i  ; j<str.length() ; j++){
        swap(str[i],str[j]) ; 
        solve(str , i+1 ) ; 
    }
}
int main(){
  string str = "abc" ; 
  int i =0 ; 
  solve(str,i) ; 
  return 0 ; 
}