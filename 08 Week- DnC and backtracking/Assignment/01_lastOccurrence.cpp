#include<iostream>
#include<string> 
#include<cstring>
using namespace std ; 
void solve(string str , int index , int &ans , char target ){
    // base case => when we out of string 
    if(index >= str.length()){
        return ; 
    }
    // solving one case 
    if(str[index]==target){
        ans = index ; 
    }
    solve(str,index + 1,ans,target ); 
}
int main(){
    string str = "abcddedf" ; 
    int index = 0 ;
    char target = 'd'  ;
    int ans ;
    char* stl = strrchr(str.c_str(),target) ;   
    // solve(str , index , ans , target ); 
    cout << stl ; 
}