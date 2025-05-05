#include<iostream>
using namespace std ;

int main(){
    int n ; 
    cout <<"Enter the value of n : "; 
    cin >> n ; 
    
    for(int i = 0 ; i<n ;i++){
        char ch = 'A' ; 
        for(int j = 0 ; j<((i*2)+1) ; j++){
           cout << ch ; 
           ch++ ; 
           if(j == i) break ; 
        }
        for( char k = ch-2; k >='A' ; k--){
            cout << k ;
        }
        cout << endl ; 
    }
}