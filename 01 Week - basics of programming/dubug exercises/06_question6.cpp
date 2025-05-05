// Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;

int main() {
    int i,j,n;
    cin>>n;
    //correction - taken p outside the loop and initialized it with nth alphabet and then printing it with inner loop in a increment manner 
    char p='A'+ n - 1 ;
    for(i=1;i<=n;i++){
        char start = p ;
        for(j=1;j<=i;j++){
            cout<<start;
            start++ ;  
        }
        p-- ; 
        cout<<endl;
    }
}