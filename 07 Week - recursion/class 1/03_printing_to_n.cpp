#include<iostream>
using namespace std ; 

// NOTE - always acquire the recursive relationship throught n , and the changes can be done according to the 
// order we places the recursive call 

void printingcount(int n ){
    // base condition 
    if(n==0) return ; 
    printingcount(n-1) ;  
    cout << n << endl ;

}
int main() {
    cout<<"Printing numbers from n : " ; 
    int n ; 
    cin >> n ; 
    printingcount(n) ; 
    return 0 ; 
}