// print the pattern 
/* 
1
12
1 3
1   4 
1 2 3 4 5 
*/

#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout <<"Enter the value of n : " ; 
    cin >> n ; 

    for(int i = 0 ; i<n ; i++){
        int num = 1 ; 
        for(int j = 0  ; j<(i+1) ;j++){
            if(i == 0 || i == (n-1)){
               cout << num ; 
            }
            else{
                if(j == 0 || j == i){
                    cout << num ;
                }
                else{
                    cout << " " ;
                }
            }
            num++ ; 
        }
        cout << endl ;
    }
}