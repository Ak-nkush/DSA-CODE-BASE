#include<iostream>
using namespace std ; 

// brute force appraoch - creating the temp array 
void print(int * arr , int& n ){
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << " " ; 
    }cout << endl ; 
}
int main(){
    int n ;
    cout << "Enter the size of the array : " ; 
    cin >> n ; 
    int input[n] = {1,2,3,4,5};
    // cout << "Enter the values in the array  : " << endl ; 
    // for(int i=0;i<n;i++){
    //     cin >> input[i];
    // }

    int d ; 
    cout <<"Enter the value for d : " ; 
    cin >> d  ;

    d = d % n ; // in case d is greater than n  
     
    print(input,n) ; 

    // step 1 - copying 
    //! - if we didn't specify the size of the size of the temp array there will be error in the output 
    int temp[d] = {} ; 

    for(int i = 0 ; i<d ; i++){
        temp[i] = input[i] ; 
    }
    cout << "temp : ";
    print(temp,d) ; 
    
    // step 2 - shifting 
    for(int i = 0 ; i < (n-d)  ; i++){
        input[i] = input[d + i ] ; 
    }
    
    // step 3 - put back temp to input array 
    for(int i = 0 ; i < d ; i++){
        input[((n-d)+i)] = temp[i] ; 
    }
    print(input,n) ; 
    
}