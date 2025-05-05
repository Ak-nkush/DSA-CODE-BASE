#include<iostream>
#include<math.h>
using namespace std ; 

int main(){
    int a ; 
    cout << "Enter the binary value : " ; 
    cin >> a ; 

    int num = 0 ; 
    int i = 0 ; 
    while(a!=0){
        int bit = a % 10 ; 
        num = bit*pow(2,i) + num ; 
        i++ ; 
        a = a/10 ; 
    }

    cout << "Decimal value for a given binary is : " << num << endl ; 

    return 0 ; 
}