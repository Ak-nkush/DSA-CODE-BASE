#include<iostream>
using namespace std ; 

void printingCount(int n ){
     // base condition 
     // stop at 1 
     if(n==0) return ; 
     // recursive relationship 
     // 9 8 7 6 5 4 3 2 1 i.e n + printingcount(n-1) 
     // soo first printing n 
     cout << n << endl ; 
     printingCount(n-1) ; 
}
int main() {
    cout << "Printing number from n : " ; 
    int n ; 
    cin >> n ; 
    printingCount(n) ; 
    return 0 ; 
    
}