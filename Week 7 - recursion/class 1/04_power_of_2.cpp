#include<iostream>
using namespace std ; 

int pow(int n ){
    // base condition - the value which we known for that particular expression 
    if(n==0) return 1 ; 
    
    // recursive call - chotta kaam 
    int recursionAns = pow(n-1) ; 
    int finalans = 2 * recursionAns ; 
    return finalans ; 
}
int main(){
    cout << "ENter the power of 2 : " ; 
    int n ; 
    cin >> n ; 
    int ans = pow(n) ; 
    cout << ans << endl ; 
    return 0 ; 
}