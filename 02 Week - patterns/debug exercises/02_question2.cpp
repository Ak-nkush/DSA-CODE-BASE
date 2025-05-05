// Debug the code. Convert Binary to Decimal.
#include<iostream>
using namespace std;

int main() {
    int n,sum=0,factor=1;
    cin>>n;
    while(n!=0){
        int digit = n%10;
        factor = 2*factor;
        sum = sum + digit*factor;
        n = n/10;
    }
    cout<<sum;
    return 0;
}