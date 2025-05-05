#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cout <<"Enter the length of full pyramid : " ; 
    cin >> n ; 

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<(n-1-i) ;j++){
            cout<<" " ; 
        }
        for(int k = 0 ; k<(i+1) ; k++){
            if(i==0 || i == (n-1)) {
                cout << "* " ; 
            }
            else{
                if(k==0 || k == i){
                    cout<<"* " ; 
                }
                else{
                    cout<<"_ " ; 
                }
                    
            }
        }
        cout << endl ; 
    }
}