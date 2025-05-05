/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cout <<"Enter the value for n : " ; 
    cin >> n ; 

    int diff = (n/2) ; 
    int num = 1 ; 

    for(int i =0 ; i<n; i++){
        for(int j =0 ; j<(n+diff) ; j++){
            cout <<"*" ; 
        }
        for(int k =0 ; k<(2*i+1) ; k++){
            if(k%2 == 0){
                cout << num ; 
            }
            else{
                cout <<"*" ;
            }
        }
        for(int j =0 ; j<(n+diff) ; j++){
            cout <<"*" ; 
        }
        num++ ; 
        diff-- ; 
        cout << endl ; 

    }
}



