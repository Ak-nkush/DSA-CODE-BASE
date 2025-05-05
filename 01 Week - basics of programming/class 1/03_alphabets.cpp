#include<iostream>
using namespace std ; 

int main(){
    cout << "Printing uppercase alphabets : " << endl  ; 
    for(char ch='A' ; ch <='Z' ; ch++){
        cout << ch << endl ; 
    }

    cout << "Printing lowercase alphabets : " << endl ; 
    for(char ch='a' ; ch <='z' ; ch++){
        cout << ch << endl ; 
    }
}