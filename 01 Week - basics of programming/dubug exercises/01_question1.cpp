// 1. **Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.**

#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    // corrected condition 
    if( c>='a' && c<='z'){
        cout<<0;
        
    }
    // corrected condition 
	else if(c>='A' && c<= 'Z'){
       
       cout << 1  ; 
    }
    else{
        cout<<-1;
    }
}