#include<iostream>
#include<string> 
using namespace std ; 

bool checkPalindrome(string &s , int start , int end ){
    // base case 
    if(start>end){
        return true ; 
    }
    // solving one case 
    if(s[start] == s[end]){
        return checkPalindrome(s,++start , --end) ; 
    }
    else{
        return false  ; 
    }

}
int main(){
    string s1 = "racecar" ; 
    string s2 = "goodbye" ; 

    cout << checkPalindrome(s1,0,s1.length() - 1 ) << endl ; 
    cout << checkPalindrome(s2,0,s2.length() - 1 ) << endl  ; 
}
