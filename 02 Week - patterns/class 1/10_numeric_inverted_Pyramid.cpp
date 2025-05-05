#include<iostream>
using namespace std ; 

int main(){
    int a ; 
    cout <<"Enter the length of pyramid : " ; 
    cin >> a ; 

    for(int i = a ; i>0; i--){
        int num = 1 ;
        for(int j = 0 ; j<i  ; j++){
            cout << num  ; 
            num++ ; 
        }
        cout << endl ; 
    }

}