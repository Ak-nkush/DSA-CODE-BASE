// Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    // started i , j with 0 , toke the another variable count contain p , that will go in reverse and started each row with p which will get increment row wise and done 
    int p = 1 ; 
    for(i=0;i<n;i++){
        int count = p ; 
        for(j=0;j<i+1;j++){
          cout<<count;
          count--;
        }
        p++ ; 
        cout<<endl;
        
    }
}