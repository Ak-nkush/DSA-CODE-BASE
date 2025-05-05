// print the pattern
/*
12345
2  5
3 5
45
5
*/

#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout <<"Enter the value of n : " ; 
    cin >> n ; 

    int num = 1 ; 
    for(int i = 0 ; i< n ; i++){
        int count = num ; 
        for(int j = 0  ; j<(n-i);j++){
            if(i == 0 || i == (n-1)){
                cout << count ; 
            }
            else{
                if(j == 0 || j == (n-i-1)){
                    cout << count ;
                }
                else{
                    cout << " " ;
                }
            }
            count++ ; 
        }
        num++ ; 
        cout << endl ;
    }
}