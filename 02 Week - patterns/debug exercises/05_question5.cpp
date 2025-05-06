// Debug the code. Return true if the number is member of fibonacci series else false.
#include<iostream>
using namespace std ; 
//! - this is important question as we didn't taught of logic 
bool checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 || n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }
        }
    }

}

int main(){
    int n ; 
    cout << "enter the number : " ; 
    cin >> n ; 
    cout << bool(checkMember(n)) ; 
}