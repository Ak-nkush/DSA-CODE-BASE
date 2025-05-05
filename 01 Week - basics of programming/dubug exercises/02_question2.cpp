// Debug the code. It is trying to print the given pattern.
/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n;
    // correction - it was not taking the input
    cin >> n ; 
    int i=1;
    while(i<=n){
        // correction - started count at 0 instead of 1 
        int j = i,count = 0;
        while(count<i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}