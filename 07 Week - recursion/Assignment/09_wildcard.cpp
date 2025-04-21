#include<iostream>
#include<string>
#include<vector>
using namespace std ; 

// LC 44 - wildcard matching 

class Solution {
    public:
            bool isMatchHelper(string & s,int si,string&p,int pi){
                 // base case : 
                 if(si == s.size() && pi == p.size()){
                    return true ; 
                 }
                 // main base case  we created from the assumption of * 
                 if(si == s.size() && pi < p.size()){
                     while(pi<p.size()){
                        if(p[pi] != '*') return false ; 
                        pi++ ; 
                     }
                     return true ; 
                 }


                // single character matching 
                if((s[si] == p[pi]) || (p[pi] == '*')){
                    isMatchHelper(s,si+1,p,pi+1) ;
                }
                else{
                    // treating * as NULL , it means we have to move pi 
                    bool caseA = isMatchHelper(s,si,p,pi+1) ;

                    // allowing * to consume one character of s string 
                    bool caseB = isMatchHelper(s,si+1,p,pi) ;

                    return caseA || caseB ; 
                }

                return false ; // this is case when characters doesn't get matched 
            } 
            
        bool isMatch(string s, string p) {
            int si = 0 ; // pointer index for s string 
            int pi = 0 ; // pointer index for pattern string 
          
            return isMatchHelper(s,si,p,pi) ; 

        }
    };