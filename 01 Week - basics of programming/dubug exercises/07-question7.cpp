// Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no;
    while(i<=(no)){
        // for gaps we modified the gaps formula 
        int gaps = n-(2*i),k=1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        // moved the j here , 
        int j = i;
        int ch = n - gaps + 1, z = (ch+1)/2;
        while(z>1){
            cout<<j;
            // here we have to increment j and decrement z 
            j = j + 1;
            z = z - 1;
            
        }
        j = j - 1;
        z = (ch-1)/2;
        // here there should be no equal to sign 
        while(z>1){
            j = j - 1;
            cout<<j;
            z = z - 1;
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