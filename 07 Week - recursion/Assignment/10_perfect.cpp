#include<iostream>
#include<math.h>



class Solution {
    public:
        int numSquaresHelper(int n){

            // base case 
            if(n == 0 ) return 1 ; 
            // for -ve 
            if(n < 0) return 0 ; 
            
            int ans = INT_MAX ; 
            int i = 1 ; 
            int end = sqrt(n) ; 
            while(i<= end){
                int perfectSquare = i * i ; 
                int NumberofPerfectSquare = 1 + numSquaresHelper(n - perfectSquare ) ; 
                if(NumberofPerfectSquare < ans ){
                    ans = NumberofPerfectSquare;
                } 
                ++i ; 
            }
      
            return ans ;
        } 
             
        int numSquares(int n) {
             return numSquaresHelper(n) - 1 ; 
        }
    };