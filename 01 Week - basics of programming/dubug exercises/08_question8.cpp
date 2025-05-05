// Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
#include<iostream>
using namespace std ; 

void printPatt(int n){
    int i=1;
    //updating while condition making <=
    while(i<=(n)){
        int gaps =( n-2*i) + 1 , k=1;
        
        if(i>(n)/2){  
            
            int no = (n+1)/2;
            gaps = 2*(i%no);
        }
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        // modified the formula for ch 
        int ch = n - (gaps);
        while(ch>=1){
            cout<<"*";
            ch = ch - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}

int main(){
    int n ; 
    cin >> n ; 
    printPatt(n) ; 
}