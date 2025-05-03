#include<iostream>
using namespace std ; 
// gfg problem - set k bit 
//! - Remember optimized approach 

class Solution {
  public:
    int setKthBit(int n, int k) {
        // Code here
        // regular appraoch - dec to binary , change kth bit and then binary to decomal
        // t.c = O(3n)
        
        // optimized appraoch - use the right shift and then or with n 
        int x = 1 << k ; 
        return n | x ;
        
        
        
    }
};

