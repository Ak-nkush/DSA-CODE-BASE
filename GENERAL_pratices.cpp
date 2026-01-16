#include<iostream>
#include<vector>
#include<math.h>
using namespace std ; 

int main(){
      int n ; 
      cout << "Enter the number : " ; 
      cin >> n ;
      
      int number = 0 ;
      int i = 0 ;  
      while(n!=0) {
        int bits = n % 10 ; 
        n = n / 10 ;
        // converting binary into decimal 
        number = bits*pow(2,i) + number ; 
        i++ ; 
    }
    cout << number ; 
    

        
}
