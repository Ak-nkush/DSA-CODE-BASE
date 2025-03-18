#include<iostream>
#include<vector>
using namespace std ; 
void  subSequence(string str , int index , string output , vector<string> &ans){
    // creating the base consition 
    if(index==str.length()){
        ans.push_back(output) ; 
        return ; 
    }
    // include the character 
    char ch = str[index] ; 
    subSequence(str,index + 1 ,output + ch ,ans) ;

    // exluding the character 
    subSequence(str,index + 1 ,output,ans) ;
        
}
int main(){
    string str = "abc"  ;
    int index = 0 ; 
    string output = "" ; 
    vector<string> ans ; 
    subSequence(str,index,output,ans) ; 
    for(auto i : ans){
        cout << i << endl ; 
    }
    return 0 ; 
}