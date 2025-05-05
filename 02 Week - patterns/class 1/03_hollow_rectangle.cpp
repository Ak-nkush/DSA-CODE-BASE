#include<iostream>
using namespace std ; 

int main(){
    int l , b ; 
    cout << "Enter the length for rectangle : " ; 
    cin >> l ; 
    cout << "Enter the breath for rectangle : " ; 
    cin >> b ; 

    for(int i =0 ; i<l ; i++){
        for(int j = 0 ; j < b ; j++){
            if(i==0 || i==(l-1)){
                cout<<" * " ; 
            }
            else{
                if(j==0 || j==(b-1)){
                    cout<<" * " ;
                }
                else{
                    cout<<" _ " ; 
                }
            }
                
        }
        cout << endl ; 
    }
}