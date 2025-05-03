#include<iostream>
#include<math.h>
using namespace std ; 


int main(){
    int a ; 
    cout <<"Enter the number : " ;
    cin >> a ;
    int b ; 
    cout <<"enter the power : " ; 
    cin >> b ; 

    long long int result = pow(a,b) ; 
    cout <<"Answer : " << result << endl ; 
}