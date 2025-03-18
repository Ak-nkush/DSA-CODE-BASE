#include<iostream>
#include<cstring>
#include<string>
using namespace std ; 
//! here we have to find the last occurrence of the char on the string 
//todo - approach 1 - head recursion ; 
//todo - appraoch 2 - tail recursion ; 
//todo - appraoch 3 - strrchr() - this is standard c library function 

int main(){
    const char* str = "aassddfdre" ; 
    char ch = 'd' ; 
   const char* result = strrchr(str, ch);
   cout << " the last index of ch : " <<  (result - str ) << endl ; 
}