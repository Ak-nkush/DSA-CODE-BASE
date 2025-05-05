#include<iostream>
using namespace std ; 

int main(){
    int a ; 
    cout <<"Enter the length of pyramid : " ; 
    cin >> a ; 

    for(int i = 0 ; i<a ; i++){
        for(int j = 0 ; j<=i ; j++){
            if(i==0 || i==(a-1)){
                cout<<"*" ; 
            }
            else{
                if(j==0 || j==i){
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