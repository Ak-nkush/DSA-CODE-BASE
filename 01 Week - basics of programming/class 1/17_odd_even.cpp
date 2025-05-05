#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cout << "Enter the number : " ; 
    cin >> n ; 
    
    //! - n&1 , first here we didn't given the parenthesis soo our output was always odd 
    if((n&1) == 0){
        cout <<"The given number is even " << endl ; 
    }
    else{
        cout << "The given number is odd " << endl ; 
    }
    return 0 ; 
}