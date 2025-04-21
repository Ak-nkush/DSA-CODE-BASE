#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std ; 
// gfg - step for knight 

class solution {
  public : 
    int minStepToReachTarget(vector<int> &KnightPos , vector<int>&TargertPos,int N){
        // step 1 : convert to zero based indexing 

        pair<int,int> src = {KnightPos[0] - 1 , KnightPos[1] - 1} ; 
        pair<int,int> dest = {
            TargertPos[0] -1 ,
            TargertPos[1] - 1 
        };

        if(src == dest) return 0 ; 

        queue<pair<int,int>> q ; 
        q.push(src) ; 
        q.push({-1,-1}) ; 

        vector<vector<bool

    }
};