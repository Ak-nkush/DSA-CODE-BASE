// numeric palindrome equilateral pyramid 
/*
****1
***121
**12321
*1234321
123454321
*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cout <<"enter the value for n : " ; 
    cin >> n ; 

    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j<(n-i-1) ; j++){
            cout << " " ; 
        }
        int num = 1 ; 
        for(int k = 0 ; k<(i+1) ; k++){
            cout << num ; 
            num++ ; 
        }
        num = num - 2 ; 
        int l = i ; 
        while(l--){
            cout << num ;
            num-- ;
        }
        cout << endl ; 
            
    }
}