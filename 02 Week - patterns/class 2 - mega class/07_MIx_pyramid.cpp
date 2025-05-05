#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cout << "Enter number of lines for this pattern : " ; 
    cin >> n ; 
    

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<(n-i) ; j++){
            cout << "*" ; 
        }
        for(int k =0 ; k < ((i*2) + 1) ; k++){
            cout << "_" ; 
        }
        for(int l = 0 ; l<(n-i) ; l++){
            cout << "*" ; 
        }
        cout << endl ; 
    }

    for(int i = 0 ; i<n ;i++){
        for(int j = 0 ; j<(i+1) ; j++){
            cout <<"*" ; 
        }
        for(int k = 0 ; k <((n*2)-((i*2) + 1)) ; k++){
            cout << "_" ; 
        }
        for(int l = 0 ; l<(i+1) ; l++){
            cout <<"*" ; 
        }
        cout << endl ; 
    }
}