#include<iostream>
#include<math.h>
using namespace std ; 

int main(){
    int a ; 
    cout << "Enter a decimal value : " ; 
    cin >> a ; 

    int num = 0 ; 
    int i = 0 ; 
    while (a!=0)
    {
        int digit = a%2 ;
        num = digit*pow(10,i) +  num ; 
        i++ ; 
        a = a/2 ; 
    }
    
    cout << "Binary conversion is : " << num << endl ; 
}