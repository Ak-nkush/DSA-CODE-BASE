// Debug the code. Sum of array
#include<iostream>
using namespace std;

int main(){
    // correction - initialized the sum with zero 
    int n, sum = 0 ;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
        // corrected the index that is the i 
        cin >> input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}