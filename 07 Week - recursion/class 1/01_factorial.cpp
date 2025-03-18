#include<iostream>
using namespace std ; 


// NOTE - Yes, you are correct! In general, when using recursion, pass by value is often preferred because each recursive call should work with its own copy of the variable. This way, the original value remains unchanged in the caller function, allowing the recursion to operate independently on each step. 
// Therefore we are not using (int&n)

int getfactorial(int n){
    // forming the base conidition 
    if(n==0) return 1 ; 

    // creating the recursive relationship 
    // fact(n) = n * fact(n-1) 

    int recursiveAns = getfactorial(n-1) ; 
    int finalans = n * recursiveAns ; 
    return finalans ; 

}
int main(){
    int n = 5 ; 
    int ans = getfactorial(n) ; 
    cout << ans << endl ; 
}