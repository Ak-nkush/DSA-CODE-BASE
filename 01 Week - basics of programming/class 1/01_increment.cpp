#include<iostream>
using namespace std ; 
int main(){
    
    int a = 10 ; 
    cout << (++a) * (++a) << endl ; 
    cout << (++a) * (a++) << endl ; 
    cout << (a++) * (++a) << endl ; 
    cout << (a++) * (a++) << endl ; 
}