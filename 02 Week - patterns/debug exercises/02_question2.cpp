// Debug the code. Convert Binary to Decimal.
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n,sum=0,factor=1;
    cin>>n;
    int i = 0 ; 
    while(n!=0){
        int digit = n%10;
        // factor formula was incorrected soo we corrected it 
        int factor = pow(2,i);
        cout << "factor :" << factor << endl ; 
        sum = sum + digit*factor;
        cout << "sum: " << sum << endl ;  
        n = n/10;
        i++ ; 
    }
    cout<<sum;
    return 0;
}