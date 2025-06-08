#include<iostream>
#include<vector>
using namespace std ; 
// Question - spiral traversal 

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ; 
        int m = matrix.size() ; 
        int n = matrix[0].size() ; 
        int total_element = m*n ; 
        int count  = 0 ; 
        
        // Intializing all the position of the 2d matrix 
        int startingRow = 0 ; 
        int endingRow = m - 1 ; 
        int startingCol = 0 ; 
        int endingCol = n - 1 ; 
        while( count < m*n){
            // here we are also checking the condition in each loop soo that it get spiraled 
            // only once 
            
            for(int i = startingCol ; i<=endingCol && count<total_element ; i++){
                ans.push_back(matrix[startingRow][i]);
                count++ ; 
            }
            startingRow++ ; // incrasing the startingrow to make spiral looking and same for 
                            // every intialized value 
            for(int i = startingRow ; i<=endingRow && count<total_element ; i++){
                ans.push_back(matrix[i][endingCol]);
                count++ ; 
            }
            endingCol-- ; 
            for(int i = endingCol ; i>=startingCol && count<total_element ; i--){
                ans.push_back(matrix[endingRow][i]);
                count++ ; 
            }
            endingRow-- ; 
            for(int i = endingRow ; i>=startingRow && count<total_element ; i--){
                ans.push_back(matrix[i][startingCol]);
                count++ ; 
            }
            startingCol++ ; 

        }
        return ans ; 
}