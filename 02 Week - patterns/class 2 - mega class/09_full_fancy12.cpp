#include<iostream>
using namespace std ; 

int main() {
    int n ; 
    cout <<"Enter the value of n : " ; 
    cin >> n ; 

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<(i*2+1) ; j++){
            if(j%2 == 0){
                cout <<(i+1);
            }
            else{
                cout<<"*" ; 
            }
        }
        cout << endl ; 
    }
    for(int i = n-1 ; i>0 ; i--){
        for(int j =0 ; j<((i*2)-1) ; j++){
            if(j%2 == 0){
                cout << i ; 
            }
            else{
                cout << "*" ;
            }
        }
        cout << endl ; 
    }
} 