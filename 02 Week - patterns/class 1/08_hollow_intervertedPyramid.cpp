#include<iostream>
using namespace std ; 

int main(){
    int a ; 
    cout <<"Enter the length of pyramid : " ; 
    cin >> a ; 

    for(int i = a ; i>0; i--){
        for(int j = 0 ; j<i  ; j++){
            if(i==1 || i==a){
                cout<<"*" ; 
            }
            else{
                if(j==0 || j==i-1){
                    cout<<"*" ;
                }
                else{
                    cout<< "_" ; 
                }
            }
        }
        cout << endl ; 
    }
}
