// Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // correction - started i , j and k with 0 
    int i=0;
    while(i<n){
        // it count there was no need to add 1 
        int j = i,count = 2*n,gaps=(n-i-1),k=0;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        // here substracting minus 1 was necessary 
        int m = 0,ch = count - 2*gaps - 1 ;
        while(m<ch){
            cout<<"*";
            m = m + 1;
        }
        k = 0;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}