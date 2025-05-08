#include<iostream>
#include<algorithm>
using namespace std  ;

//method 1 : swap inbuilt method 
void swapMethod(int a , int b){
    swap(a,b) ; 
    cout << "Now the value of a and b using swap built in : " << a << " " << b << endl ;  
}

// method 2 : temporary variable 
void tempVariable(int a , int b){
    int temp = a ; 
    a = b ; 
    b = temp ; 
    cout << "Now the value of a and b using temp variable : " << a << " " << b << endl;  
}

// method 3 : arithematic approach 
void ArithematicMethod(int a , int b){
    a = a + b ; 
    b = a - b ; 
    a = a - b ; 
    cout << "Now the value of a and b using arithematic approach :  " << a << " " << b << endl ;  
}

// method 4 : XOR 
void XORswap(int a , int b ){
    a = a^b ; 
    b = b^a ; 
    a = a^b ; 
    cout << "Now the value of a and b using xor :  " << a << " " << b << endl ; ;  
}

int main(){
    int a ; 
    cout << "Enter the value of a : " ;
    cin >> a ;   

    int b ; 
    cout << "Enter the value of b : " ;
    cin >> b ;  

    swapMethod(a,b) ; 
    
    tempVariable(a,b) ; 
    ArithematicMethod(a,b) ; 
    XORswap(a,b) ; 
}